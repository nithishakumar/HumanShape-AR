using DA_Assets.FCU.Model;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;
using System.Collections;
using DA_Assets.FCU.Extensions;
using System;
using DA_Assets.Shared.CodeHelpers;

#if SHAPES_EXISTS
using Shapes2D;
#endif

#if PUI_EXISTS
using UnityEngine.UI.ProceduralImage;
#endif

#if MPUIKIT_EXISTS
using MPUIKIT;
#endif

namespace DA_Assets.FCU.Core.Drawers
{
    [Serializable]
    public class ImageDrawer : ControllerHolder<FigmaConverterUnity>
    {
        public IEnumerator Draw(FObject source, FObject target)
        {
            switch (controller.Model.MainSettings.ImageComponent)
            {
                case ImageComponent.UnityImage:
                    yield return controller.Model.DynamicCoroutine(DrawUnityImage(source, target));
                    break;
                case ImageComponent.Shape:
                    yield return controller.Model.DynamicCoroutine(DrawShapeImage(source, target));
                    break;
                case ImageComponent.ProceduralImage:
                    yield return controller.Model.DynamicCoroutine(DrawProceduralUI_Image(source, target));
                    break;
                case ImageComponent.MPImage:
                    yield return controller.Model.DynamicCoroutine(DrawMPImage(source, target));
                    break;
            }

            controller.CanvasDrawer.DrawnObjectsCount++;
        }
        private IEnumerator DrawUnityImage(FObject source, FObject target)
        {
            target.GameObject.TryAddGraphic(out Image img);

            if (source.IsEmptyMask)
            {

            }
            else if (source.Meta.IsDownloadable)
            {
                yield return controller.Tools.GetSprite(source, result => img.sprite = result.Result);
            }
            else
            {
                if (source.Fills.IsEmpty())
                {
                    yield break;
                }

                if (source.Fills[0].Color == new Color(0, 0, 0, 0))
                {
                    if (source.Fills[0].GradientStops.IsEmpty() == false)
                    {
                        img.color = source.Fills[0].GradientStops[0].Color;

                        if (source.Fills[0].Visible != null)
                        {
                            img.enabled = source.Fills[0].Visible.ToBool();
                        }
                    }
                }
                else
                {
                    img.color = source.Fills[0].Color;

                    if (source.Fills[0].Visible != null)
                    {
                        img.enabled = source.Fills[0].Visible.ToBool();
                    }
                }
            }

            img.type = controller.Model.UnityImageSettings.Type;
            img.raycastTarget = controller.Model.UnityImageSettings.RaycastTarget;

            yield return null;
        }
        private IEnumerator DrawShapeImage(FObject source, FObject target)
        {
#if SHAPES_EXISTS
            target.GameObject.TryAddGraphic(out Image img);
            img.material = null;

            if (source.IsEmptyMask)
            {
                if (target.GameObject.TryGetComponent(out Shape sh1))
                {
                    sh1.Destroy();
                    img.enabled = true;
                }
            }
            else if (source.Meta.IsDownloadable)
            {
                if (target.GameObject.TryGetComponent(out Shape sh1))
                {
                    sh1.Destroy();
                    img.enabled = true;
                }

                yield return controller.Tools.GetSprite(source, result => img.sprite = result.Result);
            }
            else
            {
                target.GameObject.TryAddComponent(out Shape shape);

                foreach (Fill fill in source.Fills)
                {
                    if (fill.Type == "SOLID")
                    {
                        shape.settings.fillColor = fill.GetColor();
                        break;
                    }
                    else if (fill.Type.Contains("GRADIENT"))
                    {
                        shape.settings.fillColor = fill.GradientStops.First().Color;
                        shape.settings.fillColor2 = fill.GradientStops.Last().Color;

                        if (fill.Type == "GRADIENT_RADIAL")
                        {
                            shape.settings.gradientType = Shapes2D.GradientType.Radial;
                        }
                        else
                        {
                            shape.settings.gradientType = Shapes2D.GradientType.Linear;
                        }

                        break;
                    }
                }

                if (source.Strokes != null && source.Strokes.Count() > 0)
                {
                    shape.settings.outlineSize = source.StrokeWeight;
                    shape.settings.outlineColor = source.Strokes[0].Color;
                }

                if (source.Type == "ELLIPSE")
                {
                    shape.settings.shapeType = ShapeType.Ellipse;
                }
                else
                {
                    shape.settings.shapeType = ShapeType.Rectangle;

                    if (source.RectangleCornerRadius != null)
                    {
                        Vector4 cr = source.GetCornerRadius();

                        shape.settings.roundnessPerCorner = true;

                        shape.settings.roundnessBottomLeft = cr.x;
                        shape.settings.roundnessBottomRight = cr.y;
                        shape.settings.roundnessTopRight = cr.z;
                        shape.settings.roundnessTopLeft = cr.w;
                    }
                    else if (source.CornerRadius != 0)
                    {
                        shape.settings.roundnessPerCorner = true;

                        shape.settings.roundnessBottomLeft = source.CornerRadius;
                        shape.settings.roundnessBottomRight = source.CornerRadius;
                        shape.settings.roundnessTopRight = source.CornerRadius;
                        shape.settings.roundnessTopLeft = source.CornerRadius;

                        //shape.settings.roundnessPerCorner = false;
                        //shape.settings.roundness = source.CornerRadius;
                    }
                }

                foreach (Effect effect in target.Effects)
                {
                    if (effect.Visible == false)
                    {
                        continue;
                    }

                    if (effect.Type == "LAYER_BLUR")
                    {
                        shape.settings.blur = effect.Radius;
                        break;
                    }
                }

                bool allFillsDisabled = source.Fills.Where(x => x.Visible != null && x.Visible.ToBool() == false).Count() == source.Fills.Count();
                bool allStrokesDisabled = source.Strokes.Where(x => x.Visible != null && x.Visible.ToBool() == false).Count() == source.Strokes.Count();

                if (allFillsDisabled && allStrokesDisabled)
                {
                    img.enabled = false;
                }
            }

            img.type = controller.Model.Shapes2D_Settings.Type;
            img.raycastTarget = controller.Model.Shapes2D_Settings.RaycastTarget;
#endif
            yield return null;
        }
        private IEnumerator DrawProceduralUI_Image(FObject source, FObject target)
        {
#if PUI_EXISTS
            target.GameObject.TryAddGraphic(out ProceduralImage img);

            if (source.Type == "ELLIPSE")
            {
                target.GameObject.TryAddComponent(out RoundModifier roundModifier);
            }
            else
            {
                if (source.RectangleCornerRadius != null)
                {
                    target.GameObject.TryAddComponent(out FreeModifier freeModifier);

                    freeModifier.Radius = source.GetCornerRadius();
                }
                else
                {
                    target.GameObject.TryAddComponent(out UniformModifier uniformModifier);
                    uniformModifier.Radius = source.CornerRadius;
                }
            }

            if (source.IsEmptyMask)
            {

            }
            else if (source.Meta.IsDownloadable)
            {
                yield return controller.Tools.GetSprite(source, result => img.sprite = result.Result);
            }
            else
            {
                foreach (Fill fill in source.Fills)
                {
                    if (fill.Type == "SOLID")
                    {
                        img.color = fill.GetColor();
                        break;
                    }
                    else if (fill.Type.Contains("GRADIENT"))
                    {
                        img.color = fill.SimplifyGradient();
                        break;
                    }
                }

                bool allFillsDisabled = source.Fills.Where(x => x.Visible != null && x.Visible.ToBool() == false).Count() == source.Fills.Count();

                if (allFillsDisabled)
                {
                    img.enabled = false;
                }
            }

            img.type = controller.Model.PUI_Settings.Type;
            img.raycastTarget = controller.Model.PUI_Settings.RaycastTarget;
            img.FalloffDistance = controller.Model.PUI_Settings.FalloffDistance;
#endif
            yield return null;
        }


        private IEnumerator DrawMPImage(FObject source, FObject target)
        {
#if MPUIKIT_EXISTS
            MPImage img = null;

            if (source.IsEmptyMask)
            {
                target.GameObject.TryAddGraphic(out img);
            }
            else if (source.Meta.IsDownloadable)
            {
                target.GameObject.TryAddGraphic(out img);

                yield return controller.Tools.GetSprite(source, result => img.sprite = result.Result);
            }
            else
            {
                target.GameObject.TryAddGraphic(out img);

                foreach (Fill fill in source.Fills)
                {
                    if (fill.Type == "SOLID")
                    {
                        img.color = fill.GetColor();
                        break;
                    }
                    else if (fill.Type == "GRADIENT_LINEAR")
                    {
                        Gradient gradient = new Gradient
                        {
                            mode = GradientMode.Blend,
                        };

                        List<GradientColorKey> gradientColorKeys = new List<GradientColorKey>();

                        foreach (GradientStop gradientStop in fill.GradientStops)
                        {
                            gradientColorKeys.Add(new GradientColorKey
                            {
                                color = gradientStop.Color,
                                time = gradientStop.Position
                            });
                        }

                        gradient.colorKeys = gradientColorKeys.ToArray();

                        if (source.ContainsTag(FCU_Tag.Frame))
                        {
                            img.GradientEffect = new GradientEffect
                            {
                                Enabled = true,
                                GradientType = MPUIKIT.GradientType.Linear,
                                Gradient = gradient
                            };
                        }
                        else
                        {
                            img.GradientEffect = new GradientEffect
                            {
                                Enabled = false,
                                GradientType = MPUIKIT.GradientType.Linear,
                                Gradient = gradient
                            };
                        }

                        img.color = fill.SimplifyGradient();
                        break;
                    }
                    else if (fill.Type.Contains("GRADIENT"))
                    {
                        img.color = fill.SimplifyGradient();
                        break;
                    }
                }

                if (source.Strokes != null && source.Strokes.Count() > 0)
                {
                    img.OutlineWidth = source.StrokeWeight;
                    img.OutlineColor = source.Strokes[0].Color;
                }

                if (source.Type == "ELLIPSE")
                {
                    img.DrawShape = DrawShape.Circle;
                    img.Circle = new Circle
                    {
                        FitToRect = true
                    };
                }
                else
                {
                    img.DrawShape = DrawShape.Rectangle;

                    if (source.RectangleCornerRadius != null)
                    {
                        img.Rectangle = new Rectangle
                        {
                            CornerRadius = source.GetCornerRadius()
                        };
                    }
                    else if (source.CornerRadius != 0)
                    {
                        img.Rectangle = new Rectangle
                        {
                            CornerRadius = new Vector4
                            {
                                x = source.CornerRadius,
                                y = source.CornerRadius,
                                z = source.CornerRadius,
                                w = source.CornerRadius
                            }
                        };
                    }
                }

                bool allFillsDisabled = source.Fills.Where(x => x.Visible != null && x.Visible.ToBool() == false).Count() == source.Fills.Count();
                bool allStrokesDisabled = source.Strokes.Where(x => x.Visible != null && x.Visible.ToBool() == false).Count() == source.Strokes.Count();

                if (allFillsDisabled && allStrokesDisabled)
                {
                    img.enabled = false;
                }
            }

            img.type = controller.Model.MPUIKIT_Settings.Type;
            img.raycastTarget = controller.Model.MPUIKIT_Settings.RaycastTarget;
            img.FalloffDistance = controller.Model.MPUIKIT_Settings.FalloffDistance;

            img?.Init();
#endif
            yield return null;
        }
    }
}
