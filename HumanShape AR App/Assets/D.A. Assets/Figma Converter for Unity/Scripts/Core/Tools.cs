using DA_Assets.FCU.Config;
using DA_Assets.FCU.Extensions;
using DA_Assets.FCU.Model;
using DA_Assets.Shared;
using DA_Assets.Shared.CodeHelpers;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;
using Console = DA_Assets.Shared.Console;

namespace DA_Assets.FCU.Core
{
    [Serializable]
    public class Tools : ControllerHolder<FigmaConverterUnity>
    {
        [SerializeField] string spritesPath = "Assets\\Sprites";
        [SerializeField] string fontsPath = "Assets\\Fonts";
        [SerializeField] ResolutionData resolutionData;
        public ResolutionData ResolutionData { get => resolutionData; set => SetValue(ref resolutionData, value); }
        public string SpritesPath { get => spritesPath; set => SetValue(ref spritesPath, value); }
        public string FontsPath { get => fontsPath; set => SetValue(ref fontsPath, value); }
        public void CacheResolutionData()
        {
            bool received = controller.Model.GetGameViewSize(out Vector2 gameViewSize);

            this.ResolutionData = new ResolutionData
            {
                GameViewSizeReceived = received,
                GameViewSize = gameViewSize
            };
        }
        public void RestoreResolutionData()
        {
            if (this.ResolutionData.GameViewSizeReceived)
            {
                controller.Model.SetGameViewSize(this.ResolutionData.GameViewSize);
            }
        }
        public IEnumerator DestroyCurrentCanvasMetas_OnClick()
        {
#if UNITY_2020_1_OR_NEWER
            var fcuMetas = MonoBehaviour.FindObjectsOfType<FCU_Meta>(true);
#else
           var fcuMetas = Resources.FindObjectsOfTypeAll<FCU_Meta>();
#endif

            int count = 0;

            for (int i = 0; i < fcuMetas.Length; i++)
            {
                if (fcuMetas[i].FigmaConverterUnity.GetInstanceID() == controller.GetInstanceID())
                {
                    count++;
                    fcuMetas[i].Destroy();
                }

                yield return null;
            }

            Console.WriteLine(LocKey.log_current_canvas_metas_destroy.Localize(
                controller.GetInstanceID(),
                count,
                nameof(FCU_Meta)));
        }

        public void DestroyCurrentCanvasChilds_OnClick()
        {
            int count = controller.transform.ClearChilds();
            Console.WriteLine(LocKey.log_current_canvas_childs_destroy.Localize(controller.GetInstanceID(), count));
        }
#if UNITY_EDITOR
        public IEnumerator SetImgTypeSprite(FObject fobject, Action callback)
        {
            while (true)
            {
                bool success = SetTextureSettings(fobject);

                if (success)
                {
                    callback.Invoke();
                    break;
                }

                yield return new WaitForSecondsRealtime(FCU_Config.Instance.Delay01);
            }
        }
        private bool SetTextureSettings(FObject fobject)
        {
            try
            {
                UnityEditor.TextureImporter importer = UnityEditor.AssetImporter.GetAtPath(fobject.AssetPath) as UnityEditor.TextureImporter;

                if (importer.isReadable == true &&
                    importer.textureType == FCU_Config.Instance.TextureImporterType &&
                    importer.crunchedCompression == FCU_Config.Instance.CrunchedCompression)
                {
                    if (importer.crunchedCompression)
                    {
                        if (importer.compressionQuality == FCU_Config.Instance.CrunchedCompressionQuality)
                        {
                            return true;
                        }
                        else
                        {
                            return false;
                        }
                    }
                    else
                    {
                        return true;
                    }
                }

                importer.isReadable = true;
                importer.textureType = FCU_Config.Instance.TextureImporterType;
                importer.crunchedCompression = FCU_Config.Instance.CrunchedCompression;
                importer.textureCompression = FCU_Config.Instance.TextureImporterCompression;

                if (importer.crunchedCompression)
                {
                    importer.compressionQuality = FCU_Config.Instance.CrunchedCompressionQuality;
                }

                importer.FixTextureSize();

                UnityEditor.AssetDatabase.WriteImportSettingsIfDirty(fobject.AssetPath);
                UnityEditor.AssetDatabase.Refresh();

                return false;
            }
            catch (Exception ex)
            {
                controller.Log(fobject.AssetPath);
                return true;
            }
        }
#endif
        public IEnumerator MarkAsSprites(List<FObject> fobjects)
        {
#if UNITY_EDITOR
            List<FObject> fobjectWithSprite = fobjects.Where(x => x.Meta.IsDownloadable).ToList();

            int allCount = fobjectWithSprite.Count();
            int count = 0;

            controller.Model.DynamicCoroutine(SlowCycles.ForEach(fobjectWithSprite, fobject =>
            {
                controller.Model.DynamicCoroutine(SetImgTypeSprite(fobject, () =>
                {
                    count++;
                }));
            }, FCU_Config.Instance.Delay001, 100));

            while (true)
            {
                Console.WriteLine(LocKey.log_mark_as_sprite.Localize(count, allCount));

                if (count >= allCount)
                    break;

                yield return new WaitForSecondsRealtime(FCU_Config.Instance.Delay1);
            }
#endif
            yield return null;
        }
        public IEnumerator GetSprite(FObject fobject, Return<Sprite> @return)
        {
#if UNITY_EDITOR
            Sprite sprite = (Sprite)UnityEditor.AssetDatabase.LoadAssetAtPath(fobject.AssetPath, typeof(Sprite));

            @return.Invoke(new CoroutineResult<Sprite>
            {
                Result = sprite
            });
#endif
            yield return null;
        }

        private bool breakPointActive;

        public IEnumerator BreakPoint()
        {
            if (controller.Model.MainSettings.DebugMode == false)
            {
                yield break;
            }

            breakPointActive = true;

            while (true)
            {
                if (breakPointActive == false)
                {
                    break;
                }

                yield return new WaitForSecondsRealtime(FCU_Config.Instance.Delay01);
            }
        }
        public void NextBreakPoint()
        {
            Debug.LogWarning("NextBreakPoint();");
            breakPointActive = false;
        }

        public void DestroyLastImportedFrames_OnClick()
        {
            foreach (var item in controller.ProjectParser.LastImportedFrames)
            {
                item.Destroy();
            }

            ClearLastImportedFrames();
        }
        public void ClearLastImportedFrames()
        {
            controller.ProjectParser.LastImportedFrames = new List<GameObject>();
        }
        public void RemoveUnusedSprites_OnClick()
        {
            controller.Model.DynamicCoroutine(RemoveUnusedSprites());
        }
        private IEnumerator RemoveUnusedSprites()
        {
#if UNITY_EDITOR
            Image[] images = MonoBehaviour.FindObjectsOfType<Image>();

            var sceneSpritePathes = images
                .Where(x => x.sprite != null)
                .Select(x => AssetDatabase.GetAssetPath(x.sprite));

            var assetSpritePathes = AssetDatabase.FindAssets($"t:{typeof(Sprite).Name}", new string[] { spritesPath })
                .Select(x => AssetDatabase.GUIDToAssetPath(x));

            var result = assetSpritePathes.Where(x1 => sceneSpritePathes.All(x2 => x2 != x1));

            foreach (var filePath in result)
            {
                File.Delete(filePath.GetFullAssetPath());
            }

            Console.WriteLine(LocKey.log_sprites_removed.Localize(), result.Count());

            AssetDatabase.Refresh();
#endif
            yield return null;
        }
    }
    public struct ResolutionData
    {
        public bool GameViewSizeReceived;
        public Vector2 GameViewSize;
    }
}