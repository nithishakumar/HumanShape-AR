using DA_Assets.FCU.Model;
using DA_Assets.Shared.CodeHelpers;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace DA_Assets.FCU.Extensions
{
    public static class ImageExtensions
    {
        public static Vector4 GetCornerRadius(this FObject fobject)
        {
            return new Vector4
            {
                x = fobject.RectangleCornerRadius[3],
                y = fobject.RectangleCornerRadius[2],
                z = fobject.RectangleCornerRadius[1],
                w = fobject.RectangleCornerRadius[0]
            };
        }
        public static Color GetColor(this Fill fill)
        {
            if (fill.Opacity != null)
            {
                Color _color = fill.Color;
                _color.a = (float)fill.Opacity;
                return _color;
            }
            else
            {
                return fill.Color;
            }
        }
        /// <summary>
        /// So far, importing gradients is not supported due to the lack of an algorithm for getting the angle of a gradient.
        /// </summary>
        public static Color SimplifyGradient(this Fill fill)
        {
            if (fill.Opacity != null)
            {
                Color _color = fill.GradientStops.First().Color;
                _color.a = (float)fill.Opacity;
                return _color;
            }
            else
            {
                return fill.GradientStops.First().Color;
            }
        }
        public static bool IsEmpty(this FObject fobject, FigmaConverterUnity fcu)
        {
            if (fobject.Visible != null && fobject.Visible == false)
            {
                fcu.Log($"IsEmpty | not visible | {fobject.FixedName} | {fobject.Hierarchy}", FCU_LogType.IsDownloadable);
                return true;
            }

            if (fobject.AbsoluteBoundingBox.Width == 0 || fobject.AbsoluteBoundingBox.Height == 0)
            {
                fcu.Log($"IsEmpty | zero size | {fobject.FixedName} | {fobject.Hierarchy}", FCU_LogType.IsDownloadable);
                return true;
            }

            return false;
        }
        public static bool IsEmptyImage(this FObject fobject, FigmaConverterUnity fcu)
        {
            List<bool> values = new List<bool>();
            IsEmptyImageRecursive(fobject, values, fcu);

            if (values.Contains(false))
            {
                return false;
            }
            else
            {
                return true;
            }

        }
        public static void IsEmptyImageRecursive(this FObject fobject, List<bool> values, FigmaConverterUnity fcu)
        {
            if (fobject.Fills.IsEmpty() == false)
                values.Add(false);

            else if (fobject.Strokes.IsEmpty() == false)
                values.Add(false);

            else if (fobject.Effects.IsEmpty() == false)
                values.Add(false);

            fcu.Log($"IsEmptyImage | fills: {fobject.Fills.Count()} | strokes: {fobject.Strokes.Count()} | effects: {fobject.Effects.Count()} | {fobject.FixedName} | {fobject.Hierarchy}", FCU_LogType.IsDownloadable);

            if (fobject.Children.IsEmpty())
            {
                return;
            }

            foreach (var item in fobject.Children)
            {
                item.IsEmptyImageRecursive(values, fcu);
            }
        }
        public static bool IsArcDataFilled(this FObject fobject)
        {
            if (fobject.ArcData.Equals(default(ArcData)))
            {
                return false;
            }

            return fobject.ArcData.EndingAngle < 6.28f;
        }
        public static bool ContainsLinearGradients(this List<Fill> fills)
        {
            if (fills.IsEmpty())
            {
                return false;
            }

            foreach (Fill fill in fills)
            {
                if (fill.Type.Contains("LINEAR"))
                {
                    return true;
                }
            }

            return false;
        }
        public static bool ContainsGradients(this List<Fill> fills)
        {
            if (fills.IsEmpty())
            {
                return false;
            }

            foreach (Fill fill in fills)
            {
                if (fill.Type.Contains("GRADIENT"))
                {
                    return true;
                }
            }

            return false;
        }
        public static bool IsSolidFillsOnly(this List<Fill> fills)
        {
            if (fills.IsEmpty())
            {
                return false;
            }

            foreach (Fill fill in fills)
            {
                if (fill.Type != "SOLID")
                {
                    return false;
                }
            }

            return true;
        }
    }
}