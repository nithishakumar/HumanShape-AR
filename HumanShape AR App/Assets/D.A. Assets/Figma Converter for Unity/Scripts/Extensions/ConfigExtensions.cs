using DA_Assets.FCU.Model;

namespace DA_Assets.FCU.Extensions
{
    public static class ConfigExtensions
    {
        public static bool UsingShapes2D(this FigmaConverterUnity fcu)
        {
            return fcu.Model.MainSettings.ImageComponent == ImageComponent.Shape;
        }
        public static bool UsingUnityImage(this FigmaConverterUnity fcu)
        {
            return fcu.Model.MainSettings.ImageComponent == ImageComponent.UnityImage;
        }
        public static bool UsingProceduralUI_Image(this FigmaConverterUnity fcu)
        {
            return fcu.Model.MainSettings.ImageComponent == ImageComponent.ProceduralImage;
        }
        public static bool UsingMPUIKit(this FigmaConverterUnity fcu)
        {
            return fcu.Model.MainSettings.ImageComponent == ImageComponent.MPImage;
        }
    }
}