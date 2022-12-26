using DA_Assets.FCU.Config;
using DA_Assets.FCU.Core.Drawers;
using DA_Assets.FCU.Extensions;
using DA_Assets.FCU.Model;
using DA_Assets.FCU.UI;
using DA_Assets.Shared.CodeHelpers;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using DA_Assets.Shared;
using Console = DA_Assets.Shared.Console;

#pragma warning disable IDE0003

namespace DA_Assets.FCU.Core
{
    [Serializable]
    public class CanvasDrawer : ControllerHolder<FigmaConverterUnity>
    {
        [SerializeField] ImageDrawer imageDrawer;
        [SerializeField] TextDrawer textDrawer;
        [SerializeField] LayoutGroupDrawer layoutGroupDrawer;
        [SerializeField] MaskDrawer maskDrawer;
        [SerializeField] ButtonDrawer buttonDrawer;
        [SerializeField] InputFieldDrawer inputFieldDrawer;
        [SerializeField] I2LocalizationDrawer i2LocalizationDrawer;
        [SerializeField] ShadowDrawer shadowDrawer;
        [SerializeField] CanvasGroupDrawer canvasGroupDrawer;

        [SerializeField] int drawnObjectsCount;
        [SerializeField] int objectsToDrawCount;

        public void Init() { }

        public IEnumerator DrawToCanvas(List<FObject> fobjects)
        {
            drawnObjectsCount = 0;
            objectsToDrawCount = GetCount(fobjects);

            this.ButtonDrawer.Init();
            this.InputFieldDrawer.Init();
            this.TextDrawer.Init();
            this.MaskDrawer.Init();

            yield return controller.Model.DynamicCoroutine(controller.Tools.MarkAsSprites(fobjects));
            yield return controller.Model.DynamicCoroutine(Draw(fobjects));
            yield return controller.Model.DynamicCoroutine(this.MaskDrawer.Draw(fobjects));

            yield return this.ButtonDrawer.SetTargetGraphics();
            yield return this.InputFieldDrawer.SetTargetGraphics();
            yield return this.MaskDrawer.DestroyFigmaMasksImages();

            if (controller.Model.MainSettings.UseI2Localization)
            {
                yield return this.I2LocalizationDrawer.Draw();
            }
        }
        public int GetCount(List<FObject> fobjects)
        {
            int count = 0;

            foreach (FObject fobject in fobjects)
            {
                foreach (FCU_Tag tag in fobject.Tags)
                {
                    if (tag == FCU_Tag.Mask)   
                        continue;

                    if (tag.GetTagConfig().HasComponent)
                        count++;
                }
            }

            return count;
        }
        public IEnumerator Draw(List<FObject> fobjects)
        {
            controller.Model.DynamicCoroutine(SlowCycles.ForEach(fobjects, fobject =>
            {
                foreach (FCU_Tag tag in fobject.Tags)
                {
                    switch (tag)
                    {
                        case FCU_Tag.InputField:
                            controller.Model.DynamicCoroutine(this.InputFieldDrawer.Draw(fobject));
                            break;
                        case FCU_Tag.Button:
                            controller.Model.DynamicCoroutine(this.ButtonDrawer.Draw(fobject));
                            break;
                        case FCU_Tag.GridLayoutGroup:
                        case FCU_Tag.VertLayoutGroup:
                        case FCU_Tag.HorLayoutGroup:
                        case FCU_Tag.LayoutElement:
                            controller.Model.DynamicCoroutine(this.LayoutGroupDrawer.Draw(fobject));
                            break;
                        case FCU_Tag.Placeholder:
                        case FCU_Tag.Text:
                            controller.Model.DynamicCoroutine(this.TextDrawer.Draw(fobject));
                            break;
                        case FCU_Tag.Shadow:
                            controller.Model.DynamicCoroutine(this.ShadowDrawer.Draw(fobject));
                            break;
                        case FCU_Tag.CanvasGroup:
                            controller.Model.DynamicCoroutine(this.CanvasGroupDrawer.Draw(fobject));
                            break;
                        case FCU_Tag.Image:
                            controller.Model.DynamicCoroutine(this.ImageDrawer.Draw(fobject, fobject));
                            break;
                    }
                }
            }, FCU_Config.Instance.Delay001, 250));

            while (true)
            {
                Console.WriteLine(LocKey.log_drawn_count.Localize(drawnObjectsCount, objectsToDrawCount));

                if (drawnObjectsCount >= objectsToDrawCount)
                    break;

                yield return new WaitForSecondsRealtime(FCU_Config.Instance.Delay1);
            }
        }

        public IEnumerator SetFigmaTransform(List<FObject> fobjects)
        {
            if (controller.Model.MainSettings.DebugMode)
            {
                controller.Model.aligmentRaw = new List<hierarchy_aligment>();
                controller.Model.aligments = new List<hierarchy_aligment>();
            }

            controller.Tools.CacheResolutionData();

            var fobjectsByFrame = fobjects
                .GroupBy(x => x.Meta.RootFrame)
                .Select(g => ((g.Key, g.First()), g.Select(x => x)));

            foreach (var child in fobjectsByFrame)
            {
                yield return new WaitForSecondsRealtime(FCU_Config.Instance.Delay01);

                controller.Model.SetGameViewSize(child.Item1.Item2.Size);
                controller.GetComponent<CanvasScaler>().referenceResolution = child.Item1.Item2.Size;

                yield return new WaitForSecondsRealtime(FCU_Config.Instance.Delay01);

                foreach (FObject fobject in child.Item2)
                {
                    if (fobject.GameObject == null)
                    {
                        continue;
                    }

                    RectTransform rect = fobject.GameObject.GetComponent<RectTransform>();

                    fobject.GameObject.transform.localScale = Vector3.one;

                    if (fobject.Visible != null)
                    {
                        fobject.GameObject.SetActive(fobject.Visible.ToBool());
                    }

                    fobject.SetFigmaRotation(controller);
                    rect.SetAnchorSmart(AnchorType.TopLeft);
                    rect.SetSmartPivot(PivotType.TopLeft);

                    rect.position = fobject.GetPosition(controller);
                }
            }

            foreach (FObject fobject in fobjects)
            {
                if (fobject.GameObject == null)
                {
                    continue;
                }

                if (fobject.HasRotation() && fobject.CanBeRotated())
                {
                    RectTransform rect = fobject.GameObject.GetComponent<RectTransform>();
                    rect.localPosition = new Vector3(fobject.RelativeTransform[0][2], -fobject.RelativeTransform[1][2], 0);
                }
            }

            foreach (FObject fobject in fobjects)
            {
                if (fobject.GameObject == null)
                {
                    continue;
                }

                RectTransform rect = fobject.GameObject.GetComponent<RectTransform>();

                rect.sizeDelta = fobject.GetSize(controller);
                rect.SetSmartPivot(PivotType.MiddleCenter);

                if (fobject.ContainsTag(FCU_Tag.Frame) == false)
                {
                    rect.SetAnchorSmart(fobject.GetFigmaAnchor());
                }
            }

            foreach (FObject fobject in fobjects)
            {
                if (fobject.GameObject == null)
                {
                    continue;
                }

                RectTransform rect = fobject.GameObject.GetComponent<RectTransform>();

                if (fobject.ContainsTag(FCU_Tag.LayoutElement))
                {
                    rect.sizeDelta = fobject.GetSize(controller);
                }
            }

            if (controller.Model.MainSettings.DebugMode == false)
            {
                foreach (FObject fobject in fobjects)
                {
                    if (fobject.GameObject == null)
                    {
                        continue;
                    }

                    if (fobject.ContainsTag(FCU_Tag.Frame))
                    {
                        RectTransform rect = fobject.GameObject.GetComponent<RectTransform>();
                        rect.SetAnchorSmart(AnchorType.StretchAll);
                        rect.offsetMin = new Vector2(0, 0);
                        rect.offsetMax = new Vector2(0, 0);
                        rect.localScale = Vector3.one;
                    }
                }
            }

            controller.Tools.RestoreResolutionData();

            if (controller.Model.MainSettings.DebugMode)
            {
                controller.Model.aligments = controller.Model.aligmentRaw.GroupBy(x => x.aligment).Select(x => x.First()).ToList();
            }
        }

        public static void TryInstantiateCanvas(Vector2 refRes)
        {
            GameObject go = UnityCodeHelpers.CreateEmptyGameObject();

            go.TryAddComponent(out FigmaConverterUnity fcu);
            go.name = string.Format(FCU_Config.Instance.CanvasGameObjectName, go.GetInstanceID().ToString().Replace("-", ""));

            TryInstantiateCanvas(fcu.gameObject, refRes);
        }
        public void TryInstantiateCanvas()
        {
            controller.Model.GetGameViewSize(out Vector2 gameViewSize);
            TryInstantiateCanvas(controller.gameObject, gameViewSize);
        }
        private static void TryInstantiateCanvas(GameObject gameObject, Vector2 refRes)
        {
            bool cExists = gameObject.TryAddComponent(out Canvas c);

            if (cExists)
            {
                Canvas[] canvases = UnityEngine.Object.FindObjectsOfType<Canvas>();
                c.renderMode = RenderMode.ScreenSpaceOverlay;

                int sortingOrder = canvases
                    .Where(x => x.TryGetComponent(out UIManager uiManager) == false)
                    .Select(x => x.sortingOrder)
                    .Max();

                if (sortingOrder < 32767)
                {
                    c.sortingOrder = sortingOrder + 1;
                }
            }

            bool csExists = gameObject.TryAddComponent(out CanvasScaler cs);

            if (csExists)
            {
                cs.uiScaleMode = CanvasScaler.ScaleMode.ScaleWithScreenSize;
                cs.screenMatchMode = CanvasScaler.ScreenMatchMode.MatchWidthOrHeight;
                cs.matchWidthOrHeight = 1f;
                cs.referencePixelsPerUnit = 100f;
                cs.referenceResolution = refRes;
            }

            gameObject.TryAddComponent(out GraphicRaycaster gr);
        }
        public static void TryInstantiateEventSystem()
        {
            EventSystem[] findedES = MonoBehaviour.FindObjectsOfType<EventSystem>();

            if (findedES.Length == 0)
            {
                GameObject _gameObject = UnityCodeHelpers.CreateEmptyGameObject();
                _gameObject.AddComponent<EventSystem>();
                _gameObject.AddComponent<StandaloneInputModule>();
                _gameObject.name = FCU_Config.Instance.EventSystemGameObjectName;
            }
        }
        public ImageDrawer ImageDrawer
        {
            get
            {
                return imageDrawer.SetController(controller);
            }
        }
        public TextDrawer TextDrawer
        {
            get
            {
                return textDrawer.SetController(controller);
            }
        }
        public LayoutGroupDrawer LayoutGroupDrawer
        {
            get
            {
                return layoutGroupDrawer.SetController(controller);
            }
        }
        public MaskDrawer MaskDrawer
        {
            get
            {
                return maskDrawer.SetController(controller);
            }
        }
        public ButtonDrawer ButtonDrawer
        {
            get
            {
                return buttonDrawer.SetController(controller);
            }
        }
        public InputFieldDrawer InputFieldDrawer
        {
            get
            {
                return inputFieldDrawer.SetController(controller);
            }
        }
        public I2LocalizationDrawer I2LocalizationDrawer
        {
            get
            {
                return i2LocalizationDrawer.SetController(controller);
            }
        }
        public ShadowDrawer ShadowDrawer
        {
            get
            {
                return shadowDrawer.SetController(controller);
            }
        }
        public CanvasGroupDrawer CanvasGroupDrawer
        {
            get
            {
                return canvasGroupDrawer.SetController(controller);
            }
        }
        public int DrawnObjectsCount { get => drawnObjectsCount; set => drawnObjectsCount = value; }
    }
}