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

namespace DA_Assets.FCU.Core.Drawers
{
    [Serializable]
    public class MaskDrawer : ControllerHolder<FigmaConverterUnity>
    {
        private List<FObject> figmaMasksToDestroy;
        public void Init()
        {
            figmaMasksToDestroy = new List<FObject>();
        }
        public IEnumerator Draw(List<FObject> fobjects)
        {
            //Draw masks at the end to avoid in-scene rendering errors.
            foreach (FObject fobject in fobjects)
            {
                if (fobject.ContainsTag(FCU_Tag.Mask) == false)
                    continue;

                controller.Model.DynamicCoroutine(Draw(fobject));
            }

            yield return null;
        }
        private IEnumerator Draw(FObject fobject)
        {
            FObject target;

            if (fobject.ContainsTag(FCU_Tag.Image) == false)
            {
                target = fobject;
                target.IsEmptyMask = true;

                yield return controller.CanvasDrawer.ImageDrawer.Draw(target, target);
            }
            else if (fobject.ClipsContent.ToBool() || fobject.ContainsTag(FCU_Tag.Frame))
            {
                target = fobject;
            }
            else
            {
                target = fobject.Parent;

                yield return controller.CanvasDrawer.ImageDrawer.Draw(fobject, target);
                figmaMasksToDestroy.Add(fobject);
                //yield return controller.CanvasDrawer.ImageDrawer.Draw(target, target);
            }

            InstantiateUnityMask(target);

            controller.CanvasDrawer.DrawnObjectsCount++;
        }
        private Mask InstantiateUnityMask(FObject unityMaskImage)
        {
            unityMaskImage.GameObject.TryAddComponent(out Mask unityMask);

            if (unityMaskImage.ContainsTag(FCU_Tag.Image) == false)
            {
                unityMask.showMaskGraphic = false;
            }

            if (controller.UsingShapes2D())
            {
#if UNITY_EDITOR
                int moveCount = 0;

                while (true)
                {
                    if (moveCount > 99)
                    {
                        break;
                    }

                    bool moved = UnityEditorInternal.ComponentUtility.MoveComponentUp(unityMask);

                    if (moved)
                    {
                        moveCount++;
                    }
                    else
                    {
                        break;
                    }
                }
#endif
            }

            return unityMask;
        }
        public IEnumerator DestroyFigmaMasksImages()
        {
            foreach (FObject figmaMask in figmaMasksToDestroy)
            {
                figmaMask.GameObject.Destroy();
                yield return new WaitForSecondsRealtime(FCU_Config.Instance.Delay001);
            }
        }
    }
}
