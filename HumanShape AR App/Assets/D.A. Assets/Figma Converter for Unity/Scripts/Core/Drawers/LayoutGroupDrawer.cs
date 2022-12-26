using DA_Assets.FCU.Config;
using DA_Assets.FCU.Extensions;
using DA_Assets.FCU.Model;
using DA_Assets.Shared;
using DA_Assets.Shared.CodeHelpers;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Console = DA_Assets.Shared.Console;

namespace DA_Assets.FCU.Core.Drawers
{
    [Serializable]
    public class LayoutGroupDrawer : ControllerHolder<FigmaConverterUnity>
    {
        [SerializeField] List<string> aligments = new List<string>();
        public IEnumerator Draw(FObject fobject)
        {
            foreach (FCU_Tag tag in fobject.Tags)
            {
                switch (tag)
                {
                    case FCU_Tag.HorLayoutGroup:
                    case FCU_Tag.VertLayoutGroup:
                        DrawHorizontalOrVerticalLayoutGroup(fobject);
                        break;
                    case FCU_Tag.GridLayoutGroup:
                        DrawGridLayoutGroup(fobject);
                        break;
                    case FCU_Tag.LayoutElement:
                        DrawLayoutElement(fobject);
                        break;
                }
            }

            controller.CanvasDrawer.DrawnObjectsCount++;

            yield break;
        }
        private ContentSizeFitter DrawContentSizeFitter(FObject fobject, bool fitWidth, bool fitHeight)
        {
            fobject.GameObject.TryAddComponent(out ContentSizeFitter contentSizeFitter);

            if (fitWidth)
            {
                contentSizeFitter.horizontalFit = ContentSizeFitter.FitMode.MinSize;
            }

            if (fitHeight)
            {
                contentSizeFitter.verticalFit = ContentSizeFitter.FitMode.MinSize;
            }

            return contentSizeFitter;
        }
        private LayoutElement DrawLayoutElement(FObject fobject)
        {
            fobject.GameObject.TryAddComponent(out LayoutElement layoutElement);

            layoutElement.minWidth = fobject.Size.x;
            layoutElement.minHeight = fobject.Size.y;

            if (fobject.LayoutPositioning == "ABSOLUTE")
            {
                layoutElement.ignoreLayout = true;
            }
            else
            {
                layoutElement.ignoreLayout = false;
            }

            return layoutElement;
        }
        private HorizontalOrVerticalLayoutGroup DrawHorizontalOrVerticalLayoutGroup(FObject fobject)
        {
            HorizontalOrVerticalLayoutGroup hvGroup = null;

            foreach (FCU_Tag tag in fobject.Tags)
            {
                switch (tag)
                {
                    case FCU_Tag.HorLayoutGroup:
                        fobject.GameObject.TryAddComponent(out HorizontalLayoutGroup hvGroup1);
                        hvGroup = hvGroup1;
                        break;
                    case FCU_Tag.VertLayoutGroup:
                        fobject.GameObject.TryAddComponent(out VerticalLayoutGroup hvGroup2);
                        hvGroup = hvGroup2;
                        break;
                }
            }

            if (fobject.PrimaryAxisAlignItems == "SPACE_BETWEEN" || fobject.CounterAxisAlignItems == "SPACE_BETWEEN")
            {
                hvGroup.spacing = 0;
            }
            else
            {
                hvGroup.spacing = fobject.ItemSpacing;
            }
          
            hvGroup.padding = new RectOffset
            {
                bottom = (int)Mathf.Round(fobject.PaddingBottom),
                top = (int)Mathf.Round(fobject.PaddingTop),
                left = (int)Mathf.Round(fobject.PaddingLeft),
                right = (int)Mathf.Round(fobject.PaddingRight)
            };

            FigmaAligment figmaAligment = fobject.GetAligmentData(controller);
            hvGroup.childAlignment = figmaAligment.Anchor;

            hvGroup.childScaleWidth = true;
            hvGroup.childScaleHeight = true;
            hvGroup.childForceExpandWidth = true;
            hvGroup.childForceExpandHeight = true;

            hvGroup.childControlWidth = false;
            hvGroup.childControlHeight = false;

            return hvGroup;
        }
        private GridLayoutGroup DrawGridLayoutGroup(FObject fobject)
        {
            fobject.GameObject.TryAddComponent(out GridLayoutGroup glGroup);

            glGroup.childAlignment = TextAnchor.MiddleCenter;

            try
            {
                string[] nameParts = fobject.FixedName.Split(FCU_Config.Instance.RealTagSeparator);
                string[] spacingArray = nameParts[nameParts.Length - 1].Split("x");
                string[] cellSizeArray = nameParts[nameParts.Length - 2].Split("x");

                int spacingX = Convert.ToInt32(spacingArray[0]);
                int spacingY = Convert.ToInt32(spacingArray[1]);

                int cellSizeX = Convert.ToInt32(cellSizeArray[0]);
                int cellSizeY = Convert.ToInt32(cellSizeArray[1]);

                glGroup.spacing = new Vector2(spacingX, spacingY);
                glGroup.cellSize = new Vector2(cellSizeX, cellSizeY);
            }
            catch (Exception ex)
            {
                Console.LogError(ex);
            }

            return glGroup;
        }
    }
}
