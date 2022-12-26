using DA_Assets.FCU.Config;
using DA_Assets.FCU.Core;
using DA_Assets.FCU.Model;
using DA_Assets.Shared;
using DA_Assets.Shared.CodeHelpers;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using UnityEditor;
using UnityEngine;
using Console = DA_Assets.Shared.Console;

#if TMPRO_EXISTS
using TMPro.EditorUtilities;
#endif

namespace DA_Assets.FCU
{
    public class EditorTools
    {
        public static void ConvertFontsToTextMeshPro_OnClick(FigmaConverterUnity fcu)
        {
            fcu.Model.DynamicCoroutine(ConvertFontsToTextMeshPro(fcu));
        }

        private static IEnumerator ConvertFontsToTextMeshPro(FigmaConverterUnity fcu)
        {
#if TMPRO_EXISTS
            List<string> assetFontPathes = AssetDatabase.FindAssets($"t:{typeof(Font).Name}", new string[] { fcu.Tools.FontsPath })
                .Select(x => AssetDatabase.GUIDToAssetPath(x)).ToList();

            TMPro_FontAssetCreatorWindow window = EditorWindow.GetWindow<TMPro_FontAssetCreatorWindow>();
            window.titleContent = new GUIContent("Font Asset Creator");
            FontAtlasGenerator gen = new FontAtlasGenerator(window);

            int sourceCount = assetFontPathes.Count();
            int skipedCount = 0;
            int errorsCount = 0;
            int convertedCount = 0;

            for (int i = 0; i < sourceCount; i++)
            {
                Font sourceFontFile = AssetDatabase.LoadAssetAtPath<Font>(assetFontPathes[i]);

                if (sourceFontFile == null)
                {
                    errorsCount++;
                    Console.WriteLine(LocKey.log_cant_find_font.Localize(assetFontPathes[i]));
                    continue;
                }

                string newFontPath = gen.GetNewFontPath(sourceFontFile);

                if (File.Exists(newFontPath))
                {
                    skipedCount++;
                    Console.WriteLine(LocKey.log_tm_font_already_exists.Localize(sourceFontFile.name, newFontPath));
                    continue;
                }

                gen.m_SourceFontFile = sourceFontFile;

                yield return new WaitForSecondsRealtime(FCU_Config.Instance.Delay01);

                while (true)
                {
                    if (gen.m_SourceFontFile != null)
                    {
                        break;
                    }

                    gen.m_SourceFontFile = sourceFontFile;
                    yield return new WaitForSecondsRealtime(FCU_Config.Instance.Delay01);
                }

                yield return new WaitForSecondsRealtime(FCU_Config.Instance.Delay01);

                gen.GenerateAtlas();

                yield return new WaitForSecondsRealtime(FCU_Config.Instance.Delay01);

                while (true)
                {
                    if (gen.ConvertationDone)
                    {
                        break;
                    }

                    yield return new WaitForSecondsRealtime(FCU_Config.Instance.Delay01);
                }

                yield return new WaitForSecondsRealtime(FCU_Config.Instance.Delay01);

                try
                {
                    gen.SaveCurrentFont();
                }
                catch (TargetInvocationException)
                {
                    errorsCount++;
                    Console.LogError(LocKey.log_reopen_font_asset_creator.Localize());
                    continue;
                }
                catch (System.Exception ex)
                {
                    errorsCount++;
                    Console.LogError(LocKey.log_unknown_error.Localize(ex));
                    continue;
                }

                convertedCount++;
                Console.WriteLine(LocKey.log_converted_fonts.Localize(i + 1, sourceCount));

                yield return new WaitForSecondsRealtime(FCU_Config.Instance.Delay01);
            }

            window.Close();

            Console.Success(LocKey.log_font_conversion_complete.Localize(sourceCount, convertedCount, skipedCount, errorsCount));
#endif
            yield return null;
        }

        public static IEnumerator AddToUnityFontsList(FigmaConverterUnity fcu)
        {
            Console.WriteLine(LocKey.log_start_adding_to_fonts_list.Localize());

            yield return fcu.Model.DynamicCoroutine(AddToList(
                fcu,
                fcu.Model.UnityTextSettings.Fonts,
                addedCount =>
                {
                    Console.WriteLine(LocKey.log_added_total.Localize(addedCount, fcu.Model.UnityTextSettings.Fonts.Count()));
                }));
        }
        public static IEnumerator AddToTextMeshFontsList(FigmaConverterUnity fcu)
        {
#if TMPRO_EXISTS
            Console.WriteLine(LocKey.log_start_adding_to_fonts_list.Localize());

            yield return fcu.Model.DynamicCoroutine(AddToList(
                fcu,
                fcu.Model.TextMeshSettings.Fonts,
                addedCount =>
                {
                    Console.WriteLine(LocKey.log_added_total.Localize(addedCount, fcu.Model.TextMeshSettings.Fonts.Count()));
                }));
#endif
            yield return null;
        }
        public static IEnumerator AddToList<T>(FigmaConverterUnity fcu, List<T> list, Action<int> adddedCount) where T : UnityEngine.Object
        {
            List<T> loadedAssets = new List<T>();
            yield return fcu.Model.DynamicCoroutine(LoadAssetFromFolder<T>(x => loadedAssets = x));

            int addedCount = 0;

            yield return SlowCycles.ForEach(loadedAssets, asset => 
            {
                if (list.Contains(asset) == false)
                {
                    addedCount++;
                    list.Add(asset);
                }
            }, FCU_Config.Instance.Delay001, 25);

            adddedCount.Invoke(addedCount);
        }
        public static IEnumerator LoadAssetFromFolder<T>(Action<List<T>> assets) where T : UnityEngine.Object
        {
            List<string> pathes = new List<string>();

            string selectedPath = EditorUtility.OpenFolderPanel(LocKey.label_select_fonts_folder.Localize(), "", "");

            if (selectedPath.IsPathInsideAssetsPath())
            {
                string[] guids = AssetDatabase.FindAssets($"t:{typeof(T).Name}", new string[] { selectedPath.ToRelativePath() });
                pathes = guids.Select(x => AssetDatabase.GUIDToAssetPath(x)).ToList();
            }
            else
            {
                Console.LogError(LocKey.label_inside_assets_folder.Localize());
            }

            List<T> loadedAssets = new List<T>();

            yield return SlowCycles.ForEach(pathes, path =>
            {
                T sourceFontFile = AssetDatabase.LoadAssetAtPath<T>(path);
                loadedAssets.Add(sourceFontFile);
            }, FCU_Config.Instance.Delay001, 25);

            assets.Invoke(loadedAssets);
        }
    }
}