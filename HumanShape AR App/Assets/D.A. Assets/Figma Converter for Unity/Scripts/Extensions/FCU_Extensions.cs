using DA_Assets.FCU.Config;
using DA_Assets.FCU.Core;
using DA_Assets.FCU.Model;
using DA_Assets.Shared.CodeHelpers;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEngine;
using Console = DA_Assets.Shared.Console;

#if JSON_NET_EXISTS
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
#endif

namespace DA_Assets.FCU.Extensions
{
    public static class FCU_Extensions
    {
        public static void StopImport(this FigmaConverterUnity fcu)
        {
            fcu.Model.DynamicCoroutine(fcu.Model.StopAllCoroutines);
        }
        public static string GetMetaId(this FObject fobject, FigmaConverterUnity fcu)
        {
            switch (fcu.Model.MainSettings.ComponentDetectionType)
            {
                case ComponentDetectionType.ById:
                    return fobject.Id;
                case ComponentDetectionType.ByName:
                    return fobject.Hierarchy;
            }

            return null;
        }
        public static IEnumerator WriteLog(this Request request, string text)
        {
            string logPath = Path.Combine(Directory.GetParent(Application.dataPath).FullName, "Logs");
            UnityCodeHelpers.CreateFolderIfNotExists(logPath);

            FileInfo[] fileInfos = new DirectoryInfo(logPath).GetFiles($"*.*");

            if (fileInfos.Length >= Config.FCU_Config.Instance.MaxLogFilesCount)
            {
                foreach (FileInfo file in fileInfos)
                {
                    try
                    {
                        file.Delete();
                    }
                    catch
                    {

                    }
                }
            }

            string logFileName = $"{DateTime.Now.ToString(Config.FCU_Config.Instance.DateTimeFormat)}_{Config.FCU_Config.Instance.WebLogFileName}";
            string logFilePath = Path.Combine(logPath, logFileName);

            if (text.IsJsonValid())
            {
#if JSON_NET_EXISTS
                JToken parsedJson = JToken.Parse(text);
                text = parsedJson.ToString(Formatting.Indented);
#endif
            }

            text = $"{request.Query}\n{text}";

            File.WriteAllText(logFilePath, text);

            yield return null;
        }
        public static bool IsEmpty(this FigmaProject figmaProject)
        {
            try
            {
                if (figmaProject.Equals(default) ||
                    figmaProject.Document == null ||
                    figmaProject.Document == default ||
                    figmaProject.Document.Children == null ||
                    figmaProject.Document.Children == default ||
                    figmaProject.Document.Children.Count() < 1)
                {
                    return true;
                }
            }
            catch (Exception ex)
            {
                Console.LogError(ex);
                return true;
            }

            return false;
        }
        public static float GetImageScale(this ImageScale imageScale)
        {
            switch (imageScale)
            {
                case ImageScale.X_0_5:
                    return 0.5f;
                case ImageScale.X_0_75:
                    return 0.75f;
                case ImageScale.X_1_0:
                    return 1f;
                case ImageScale.X_1_5:
                    return 1.5f;
                case ImageScale.X_2_0:
                    return 2.0f;
                case ImageScale.X_3_0:
                    return 3.0f;
                case ImageScale.X_4_0:
                    return 4.0f;
                default:
                    return 4.0f;
            }
        }
        public static string GetImageFormat(this ImageFormat imageFormat)
        {
            return imageFormat.ToString().ToLower();
        }
        public static bool ContainsButtonState(this string fixedName, out ButtonState buttonState)
        {
            ButtonState[] allTags = Enum.GetValues(typeof(ButtonState))
              .Cast<ButtonState>()
              .ToArray();

            foreach (ButtonState tag in allTags)
            {
                if (fixedName.ToLower().Contains(tag.ToLower()))
                {
                    buttonState = tag;
                    return true;
                }
            }

            buttonState = ButtonState.Default;
            return false;
        }
        public static void Log(this FigmaConverterUnity fcu, object log, FCU_LogType logType = FCU_LogType.Default)
        {
            if (fcu.Model.MainSettings.DebugMode == false)
            {
                return;
            }

            switch (logType)
            {
                case FCU_LogType.Default:
                    if (FCU_Config.Instance.LogDefault == false)
                        return;
                    break;
                case FCU_LogType.SetTag:
                    if (FCU_Config.Instance.LogSetTag == false)
                        return;
                    break;
                case FCU_LogType.IsDownloadable:
                    if (FCU_Config.Instance.LogIsDownloadable == false)
                        return;
                    break;
                case FCU_LogType.Transform:
                    if (FCU_Config.Instance.LogTransform == false)
                        return;
                    break;

            }

            Debug.Log($"FCU {fcu.Model.Guid}: {log}");
        }
        public static string ParseError(this FigmaError figmaError)
        {
            return $"Error: {figmaError.Error}\nStatus: {figmaError.Status}";
        }
        public static bool IsAuthed(this FigmaConverterUnity fcu)
        {
            if (string.IsNullOrWhiteSpace(fcu.Model.MainSettings.Token))
            {
                return false;
            }
            else
            {
                return true;
            }
        }
        public static bool IsProjectUrlExists(this FigmaConverterUnity fcu)
        {
            if (string.IsNullOrWhiteSpace(fcu.Model.MainSettings.ProjectUrl))
            {
                return false;
            }
            else
            {
                return true;
            }
        }
        public static void SetFixedName(this FObject fobject)
        {
            string newName = fobject.Name.ReplaceInvalidFileNameChars(FCU_Config.Instance.RealTagSeparator);
 
            if (newName.Length == 0)
            {
                if (fobject.Parent == null)
                {
                    newName = $"unnamed - {fobject.Id}";
                }
                else
                {
                    newName = $"unnamed - {fobject.Parent.Id} {fobject.Id}";
                }
            }

            fobject.FixedName = newName;
        }
        public static string GetHash(this FObject fobject)
        {
            List<string> values = new List<string>();

            GetHashRecursive(fobject, values);

            string allProps = string.Join("", values);

            string allPropsHash = allProps.GetDeterministicHashCode().ToString();
            return allPropsHash;
        }
        private static void GetHashRecursive(this FObject fobject, List<string> values)
        {
            string final = "";

            //final += fobject.Name;
            final += fobject.Type;
            final += fobject.Size.Round();
            final += fobject.Fills.GetHash();
            final += fobject.Effects.GetHash();
            final += fobject.Strokes.GetHash();
            final += fobject.StrokeWeight;
            final += fobject.StrokeAlign;
            final += fobject.ArcData.GetHash();

            if (fobject.RectangleCornerRadius.IsEmpty())
            {
                final += fobject.CornerRadius;
            }
            else
            {
                final += string.Join("", fobject.RectangleCornerRadius);
            }
          
            final += fobject.Opacity;
            final += fobject.GetFigmaRotationAngle();

            values.Add(final);

            if (fobject.Children.IsEmpty())
            {
                return;
            }

            foreach (FObject child in fobject.Children)
            {
                GetHashRecursive(child, values);
            }
        }
        public static string GetHash(this List<Fill> fills)
        {
            string final = "";

            foreach (var item in fills)
            {
                final += item.BlendMode?.ToString();
                final += item.Opacity?.ToString();
                final += item.Type?.ToString();
                final += item.ScaleMode?.ToString();
                final += item.ImageRef?.ToString();
                final += item.Color.ToString();

                if (item.GradientStops.IsEmpty() == false)
                {
                    foreach (var item2 in item.GradientStops)
                    {
                        final += item2.Color.ToString();
                        final += item2.Position.ToString();
                    }
                }

                if (item.GradientHandlePositions.IsEmpty() == false)
                {
                    foreach (var item2 in item.GradientHandlePositions)
                    {
                        final += item2.ToString();
                    }
                }
            }

            return final;
        }
        public static string GetHash(this ArcData arcData)
        {
            string final = "";

            final += arcData.StartingAngle;
            final += arcData.EndingAngle;
            final += arcData.InnerRadius;

            return final;
        }
        public static string GetHash(this List<Stroke> strokes)
        {
            string final = "";

            foreach (var item in strokes)
            {
                final += item.BlendMode?.ToString();
                final += item.Type?.ToString();
                final += item.Color.ToString();
            }

            return final;
        }
        public static string GetHash(this List<Effect> effects)
        {
            string final = "";

            foreach (var item in effects)
            {
                final += item.Type?.ToString();
                final += item.Color.ToString();
                final += item.BlendMode?.ToString();
                final += item.Offset.ToString();
                final += item.Radius.ToString();
            }

            return final;
        }
    }
}