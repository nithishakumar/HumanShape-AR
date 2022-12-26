using DA_Assets.FCU.Config;
using DA_Assets.FCU.Extensions;
using DA_Assets.FCU.Model;
using DA_Assets.Shared;
using DA_Assets.Shared.CodeHelpers;
using System;
using System.Collections;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Threading.Tasks;
using UnityEngine;

namespace DA_Assets.FCU.Core
{
    [Serializable]
    public class ProjectParser : ControllerHolder<FigmaConverterUnity>
    {
        [SerializeField] List<GameObject> lastImportedFrames = new List<GameObject>();
        [SerializeField] FCU_Meta[] fcuMetas = new FCU_Meta[] { };
        public List<GameObject> LastImportedFrames { get => lastImportedFrames; set => SetValue(ref lastImportedFrames, value); }
        public FCU_Meta[] FcuMetas { get => fcuMetas; set => fcuMetas = value; }

        public IEnumerator SetTags(FObject page)
        {
            UpdateMetasArray();
            SetTags1(page);
            SetTags2(page);
            yield return null;
        }
        public IEnumerator DestroyMissing(List<FObject> fobjects)
        {
            UpdateMetasArray();

            ConcurrentBag<FCU_Meta> toDestroy = new ConcurrentBag<FCU_Meta>();

            Parallel.ForEach(fcuMetas, (meta) =>
            {
                bool find = false;

                foreach (FObject fobject in fobjects)
                {
                    if (meta.Id == fobject.GetMetaId(controller))
                    {
                        find = true;
                        break;
                    }
                }

                if (find == false)
                {
                    toDestroy.Add(meta);
                }
            });

            foreach (FCU_Meta meta in toDestroy)
            {
                meta.gameObject?.Destroy();
            }

            yield return null;
        }
        private void SetTags1(FObject parent)
        {
            foreach (FObject child in parent.Children)
            {
                child.SetFixedName();

                child.Tags = new List<FCU_Tag>();

                FindedTag manualTag = GetManualTag(child);

                if (manualTag.Tag != FCU_Tag.None)
                {
                    child.AddTag(manualTag.Tag);
                    child.ManualTagExists = true;
                }

                if (parent.ContainsTag(FCU_Tag.Page))
                {
                    child.AddTag(FCU_Tag.Frame);
                    child.AddTag(FCU_Tag.Mask);
                }

                if (child.LayoutMode == "VERTICAL")
                {
                    child.AddTag(FCU_Tag.VertLayoutGroup);
                }
                else if (child.LayoutMode == "HORIZONTAL")
                {
                    child.AddTag(FCU_Tag.HorLayoutGroup);
                }

                if (parent.ContainsTag(FCU_Tag.HorLayoutGroup) ||
                    parent.ContainsTag(FCU_Tag.VertLayoutGroup) ||
                    parent.ContainsTag(FCU_Tag.GridLayoutGroup))
                {
                    child.AddTag(FCU_Tag.LayoutElement);
                }

                if (child.IsMask || child.ClipsContent.ToBool() || child.ContainsTag(FCU_Tag.Frame))
                {
                    child.AddTag(FCU_Tag.Mask);
                }

                if (child.Type == "TEXT")
                {
                    child.AddTag(FCU_Tag.Text);
                }
                else if (child.Type == "VECTOR")
                {
                    child.AddTag(FCU_Tag.Vector);
                }
                else if (child.Fills.IsEmpty() == false)
                {
                    child.AddTag(FCU_Tag.Image);
                }
                else if (child.Strokes.IsEmpty() == false)
                {
                    child.AddTag(FCU_Tag.Image);
                }

                foreach (Effect effect in child.Effects)
                {
                    if (effect.Type.Contains("SHADOW"))
                    {
                        child.AddTag(FCU_Tag.Shadow);
                        break;
                    }
                }

                if (child.Opacity != null && child.Opacity != 1)
                {
                    child.AddTag(FCU_Tag.CanvasGroup);
                }

                if (child.Children.IsEmpty())
                {
                    continue;
                }

                SetTags1(child);
            }
        }
        private void SetTags2(FObject parent, bool findRawTag = false)
        {
            foreach (FObject child in parent.Children)
            {
                findRawTag = false;

                if (child.ManualTagExists)
                {
                    if (child.ContainsTag(FCU_Tag.Container))
                    {
                        findRawTag = true;
                    }

                    controller.Log($"GetFigmaType | ManualTagExists | Name: {child.FixedName}", FCU_LogType.SetTag);
                }

                bool renderBoundsIsNull = child.AbsoluteRenderBounds.Width == null || child.AbsoluteRenderBounds.Height == null;

                bool isContainsVectorsOnly = IsContainsVectorsOnly(child);

                if (isContainsVectorsOnly)
                {
                    controller.Log($"GetFigmaType | isContainsVectorsOnly true | Name: {child.FixedName}", FCU_LogType.SetTag);
                    child.AddTag(FCU_Tag.Image);
                }
                else
                {
                    controller.Log($"GetFigmaType | isContainsVectorsOnly false | Name: {child.FixedName}", FCU_LogType.SetTag);
                }

                bool isRootVector = false;

                if (child.Tags.Contains(FCU_Tag.Vector))
                {
                    if (parent.ContainsTag(FCU_Tag.Frame))
                    {
                        child.AddTag(FCU_Tag.Image);
                        isRootVector = true;
                    }
                }

                if (findRawTag == false && (isContainsVectorsOnly || isRootVector))
                {
                    controller.Log($"GetFigmaType | can't be parent: {isContainsVectorsOnly} {isRootVector}", FCU_LogType.SetTag);
                }
                else
                {
                    if (child.Children.IsEmpty() == false)
                    {
                        child.AddTag(FCU_Tag.Container);
                    }
                }

                if (child.Children.IsEmpty())
                {
                    continue;
                }

                SetTags2(child, findRawTag);
            }
        }
        public void InstantiateGameObjects(FObject parent, List<FObject> list, FCU_Meta rootFrame)
        {
            if (parent.Hierarchy == null)
            {
                parent.Hierarchy = parent.FixedName;
            }

            foreach (FObject child in parent.Children)
            {
                child.Hierarchy = $"{parent.Hierarchy}/{child.FixedName}";
                child.Parent = parent;

                bool exists = IsExistsOnScene(child, out FCU_Meta meta);

                if (exists)
                {
                    child.Meta = meta;
                    child.GameObject = meta.gameObject;
                    //controller.Log($"InstantiateGameObjects | exists | {child.Name}");
                }
                else
                {
                    child.GameObject = UnityCodeHelpers.CreateEmptyGameObject();
                    child.Meta = child.GameObject.AddComponent<FCU_Meta>();
                    //controller.Log($"InstantiateGameObjects | {child.Name}");
                }

                child.GameObject.TryAddComponent(out RectTransform img);

                RectTransform rect = child.GameObject.GetComponent<RectTransform>();

                if (child.ContainsTag(FCU_Tag.Frame))
                {
                    rootFrame = child.Meta;
                    child.GameObject.transform.transform.SetParent(controller.transform);
                    lastImportedFrames.Add(child.GameObject);
                }
                else
                {
                    child.GameObject.transform.transform.SetParent(parent.GameObject.transform);
                }

                child.Meta.RootFrame = rootFrame;
                child.GameObject.name = child.FixedName;
                child.Meta.SetData(child, controller);

                list.Add(child);

                if (child.Children.IsEmpty())
                    continue;

                if (child.HasParentTag() == false)
                    continue;

                InstantiateGameObjects(child, list, rootFrame);
            }
        }

        private bool IsExistsOnScene(FObject fobject, out FCU_Meta meta)
        {
            FCU_Meta result = null;

            int instanceId = controller.GetInstanceID();

            foreach (FCU_Meta fcuMeta in fcuMetas)
            {
                if (fcuMeta == null)
                    continue;

                if (fcuMeta.FigmaConverterUnity == null)
                    continue;

                if (fcuMeta.FigmaConverterUnity.GetInstanceID() != instanceId)
                    continue;

                if (fcuMeta.Id == fobject.GetMetaId(controller))
                {
                    result = fcuMeta;
                    break;
                }
            }

            meta = result;
            return result != null;
        }

        private void UpdateMetasArray()
        {
#if UNITY_2020_1_OR_NEWER
            fcuMetas = MonoBehaviour.FindObjectsOfType<FCU_Meta>(true);
#else
            fcuMetas = Resources.FindObjectsOfTypeAll<FCU_Meta>();
#endif
        }
        private FindedTag GetManualTag(FObject fobject)
        {
            if (fobject.FixedName.Contains(FCU_Config.Instance.RealTagSeparator) == false)
                return default;

            IEnumerable<FCU_Tag> fcuTags = Enum.GetValues(typeof(FCU_Tag))
               .Cast<FCU_Tag>()
               .Where(x => x != FCU_Tag.None);

            string splited = fobject.FixedName.Split(FCU_Config.Instance.RealTagSeparator)[0];
            string noSpaces = splited.Replace(" ", "");

            foreach (FCU_Tag fcuTag in fcuTags)
            {
                bool tagFind = controller.ProjectParser.CheckForTag(noSpaces, fcuTag.GetTagConfig().FigmaTag);

                if (tagFind)
                {
                    return new FindedTag
                    {
                        Tag = fcuTag
                    };
                }
            }

            return default;
        }
        private bool CheckForTag(string fobjectName, string figmaTag)
        {
            if (string.IsNullOrWhiteSpace(figmaTag))
            {
                return false;
            }

            string[] nameParts = fobjectName.ToLower().Replace(" ", "").Split(FCU_Config.Instance.RealTagSeparator);

            if (nameParts.Length >= 1)
            {
                string tagPart = nameParts[0];

                if (tagPart == figmaTag)
                {
                    controller.Log($"CheckForTag | GetFigmaType | fobject.Name: {fobjectName.SubstringSafe(Config.FCU_Config.Instance.GameObjectMaxNameLenght)} | tag: {figmaTag}", FCU_LogType.SetTag);
                    return true;
                }

                float sim = tagPart.CalculateSimilarity(figmaTag);

                if (sim >= FCU_Config.Instance.ProbabilityMatchingNames)
                {
                    controller.Log($"CheckForTag | GetFigmaType | ProbabilityMatchingNames | fobject.Name: {fobjectName.SubstringSafe(Config.FCU_Config.Instance.GameObjectMaxNameLenght)} | tag: {figmaTag}", FCU_LogType.SetTag);
                    return true;
                }
            }

            return false;
        }
        private bool IsContainsVectorsOnly(FObject fobject)
        {
            List<bool> values = new List<bool>();

            IsContainsVectorsOnlyRecursive(fobject, values);

            if (values.Contains(false))
            {
                return false;
            }
            else
            {
                return true;
            }
        }
        private void IsContainsVectorsOnlyRecursive(FObject fobject, List<bool> values)
        {
            if (fobject.CantBeInsideSingleImage())
            {
                values.Add(false);
                return;
            }

            if (fobject.Children.IsEmpty())
            {
                return;
            }

            foreach (FObject child in fobject.Children)
            {
                if (child.Tags.Contains(FCU_Tag.Vector))
                {
                    values.Add(true);
                }

                IsContainsVectorsOnlyRecursive(child, values);
            }
        }

        /// <summary>
        /// Prevents duplication of downloaded sprites.
        /// </summary>
        public IEnumerator SetMutualFlag(List<FObject> fobjects)
        {
            foreach (FObject item in fobjects)
            {
                item.Hash = item.GetHash();
            }

            var fobjectsByFrame = fobjects.GroupBy(x => x.Meta.RootFrame);

            Dictionary<FCU_Meta, List<string>> hashedNoDubsInFrames = new Dictionary<FCU_Meta, List<string>>();

            foreach (var item in fobjectsByFrame)
            {
                var noDubsInFrame = item
                    .GroupBy(x => x.Hash)
                    .Select(x => x.First().Hash);

                hashedNoDubsInFrames.Add(item.Key, noDubsInFrame.ToList());
            }

            List<string> hashesDuplicates = hashedNoDubsInFrames.GetDuplicates().ToList();

            foreach (FObject item in fobjects)
            {
                if (hashesDuplicates.Contains(item.Hash))
                {
                    item.IsMutual = true;
                }
            }

            yield break;
        }

        private string GetAssetPath(FObject fobject, bool full)
        {
            string name = $"{fobject.FixedName} {fobject.Hash}.{controller.Model.MainSettings.ImageFormat.ToLower()}";
            string spriteDir;

            if (fobject.IsMutual)
            {
                spriteDir = "Mutual";
            }
            else
            {
                spriteDir = fobject.Meta.RootFrame.FixedName;
            }

            string spritesPath = Path.Combine(Application.dataPath, "Sprites", spriteDir);

            DirectoryInfo dinfo = Directory.CreateDirectory(spritesPath);

            string fullPath = Path.Combine(dinfo.FullName, name);
            string shortPath = Path.Combine("Assets", "Sprites", spriteDir, name);

            if (full)
            {
                return fullPath;
            }
            else
            {
                return shortPath;
            }
        }
        public IEnumerator SetAssetPaths(List<FObject> fobjects)
        {
            for (int i = 0; i < fobjects.Count(); i++)
            {
                string assetPath = GetAssetPath(fobjects[i], false);
                string filePath = GetAssetPath(fobjects[i], true);

                if (fobjects[i].Meta.IsDownloadable)
                {
                    if (controller.Model.MainSettings.RedownloadSprites)
                    {
                        fobjects[i].NeedDownloadFile = true;
                    }
                    else
                    {
                        bool imageFileExists = File.Exists(filePath);

                        if (imageFileExists)
                        {
                            fobjects[i].NeedDownloadFile = false;
                        }
                        else
                        {
                            fobjects[i].NeedDownloadFile = true;
                        }
                    }
                }
                else
                {
                    fobjects[i].NeedDownloadFile = false;
                }

                fobjects[i].AssetPath = assetPath;
                fobjects[i].FilePath = filePath;
            }

            yield return null;
        }
        public bool IsDownloadable(FObject fobject)
        {
            if (fobject.IsEmpty(controller))
            {
                return false;
            }

            if (fobject.IsImageOnly())
            {
                return IsDownloadableImage(fobject);
            }

            List<string> dTags = new List<string>();
            List<string> ndTags = new List<string>();

            foreach (FCU_Tag fcuTag in fobject.Tags)
            {
                TagConfig tc = fcuTag.GetTagConfig();

                if (tc.IsDownloadable)
                {
                    dTags.Add(tc.FCU_Tag.ToString());
                }
                else
                {
                    ndTags.Add(tc.FCU_Tag.ToString());
                }
            }

            if (ndTags.Count() > 0)
            {
                controller.Log($"IsDownloadable | false | (ndCount > 0) | {fobject.FixedName} | {fobject.Hierarchy}\nndTags: {string.Join(", ", ndTags)}\ndTags: {string.Join(", ", dTags)}", FCU_LogType.IsDownloadable);
                return false;
            }
            else
            {
                controller.Log($"IsDownloadable | true | {fobject.FixedName} | {fobject.Hierarchy}\nndTags: {string.Join(", ", ndTags)}\ndTags: {string.Join(", ", dTags)}", FCU_LogType.IsDownloadable);
                return true;
            }
        }
        private bool IsDownloadableImage(FObject fobject)
        {
            if (fobject.IsEmptyImage(controller))
            {
                return false;
            }

            if (fobject.IsArcDataFilled())
            {
                controller.Log($"IsDownloadableImage | true | {fobject.FixedName} | {fobject.Hierarchy} | (fobject.IsFilled())", FCU_LogType.IsDownloadable);
                return true;
            }

            bool solidFills = fobject.Fills.IsSolidFillsOnly();
            bool linearFills = fobject.Fills.ContainsLinearGradients();

            if (linearFills)
            {
                controller.Log($"IsDownloadableImage | true | {fobject.FixedName} | {fobject.Hierarchy} | linearFills", FCU_LogType.IsDownloadable);
                return true;
            }

            if (solidFills == false)
            {
                controller.Log($"IsDownloadableImage | true | {fobject.FixedName} | {fobject.Hierarchy} | (solidFills == false)", FCU_LogType.IsDownloadable);
                return true;
            }

            if (controller.Model.MainSettings.ShadowComponent == ShadowComponent.Figma && fobject.Tags.Contains(FCU_Tag.Shadow))
            {
                controller.Log($"IsDownloadableImage | true | {fobject.FixedName} | {fobject.Hierarchy} | (fobject.Tags.Contains(FCU_Tag.Shadow))", FCU_LogType.IsDownloadable);
                return true;
            }

            if (controller.UsingUnityImage())
            {
                if (fobject.Fills.IsEmpty())
                {
                    controller.Log($"IsDownloadableImage | true | Image | {fobject.FixedName} | {fobject.Hierarchy} | fobject.Fills.IsEmpty()", FCU_LogType.IsDownloadable);
                    return true;
                }

                if (fobject.Type != "RECTANGLE")
                {
                    controller.Log($"IsDownloadableImage | true | Image | {fobject.FixedName} | {fobject.Hierarchy} | (fobject.Type != 'RECTANGLE')", FCU_LogType.IsDownloadable);
                    return true;
                }

                if (fobject.CornerRadius > 0 || (fobject.RectangleCornerRadius?.Any(radius => radius > 0)).ToBool())
                {
                    controller.Log($"IsDownloadableImage | true | Image | {fobject.FixedName} | {fobject.Hierarchy} | has cornerRadius", FCU_LogType.IsDownloadable);
                    return true;
                }

                controller.Log($"IsDownloadableImage | false | Image | {fobject.FixedName} | {fobject.Hierarchy}", FCU_LogType.IsDownloadable);
                return false;
            }
            else if (controller.UsingShapes2D())
            {
                if (fobject.Fills.IsEmpty() && fobject.Strokes.IsEmpty())
                {
                    controller.Log($"IsDownloadableImage | true | MPImage | {fobject.FixedName} | {fobject.Hierarchy} | fobject.Fills.IsEmpty()", FCU_LogType.IsDownloadable);
                    return true;
                }

                if (fobject.Type != "RECTANGLE" && fobject.Type != "ELLIPSE")
                {
                    controller.Log($"IsDownloadableImage | true | MPImage | {fobject.FixedName} | {fobject.Hierarchy} | (fobject.Type != 'RECTANGLE' && fobject.Type != 'ELLIPSE')", FCU_LogType.IsDownloadable);
                    return true;
                }

                controller.Log($"IsDownloadableImage | false | MPImage | {fobject.FixedName} | {fobject.Hierarchy}", FCU_LogType.IsDownloadable);
                return false;
            }
            else if (controller.UsingMPUIKit())
            {
                if (fobject.Fills.IsEmpty() && fobject.Strokes.IsEmpty())
                {
                    controller.Log($"IsDownloadableImage | true | MPImage | {fobject.FixedName} | {fobject.Hierarchy} | fobject.Fills.IsEmpty()", FCU_LogType.IsDownloadable);
                    return true;
                }

                if (fobject.Type != "RECTANGLE" && fobject.Type != "ELLIPSE")
                {
                    controller.Log($"IsDownloadableImage | true | MPImage | {fobject.FixedName} | {fobject.Hierarchy} | (fobject.Type != 'RECTANGLE' && fobject.Type != 'ELLIPSE')", FCU_LogType.IsDownloadable);
                    return true;
                }

                controller.Log($"IsDownloadableImage | false | MPImage | {fobject.FixedName} | {fobject.Hierarchy}", FCU_LogType.IsDownloadable);
                return false;
            }
            else if (controller.UsingProceduralUI_Image())
            {
                if (fobject.Fills.IsEmpty())
                {
                    controller.Log($"IsDownloadableImage | true | ProceduralImage | {fobject.FixedName} | {fobject.Hierarchy} | fobject.Fills.IsEmpty()", FCU_LogType.IsDownloadable);
                    return true;
                }

                if (fobject.Strokes.IsEmpty() == false)
                {
                    controller.Log($"IsDownloadableImage | true | ProceduralImage | {fobject.FixedName} | {fobject.Hierarchy} | (fobject.Strokes.IsEmpty() == false)", FCU_LogType.IsDownloadable);
                    return true;
                }

                if (fobject.Type != "RECTANGLE" && fobject.Type != "ELLIPSE")
                {
                    controller.Log($"IsDownloadableImage | true | ProceduralImage | {fobject.FixedName} | {fobject.Hierarchy} | (fobject.Type != 'RECTANGLE' && fobject.Type != 'ELLIPSE')", FCU_LogType.IsDownloadable);
                    return true;
                }

                controller.Log($"IsDownloadableImage | false | ProceduralImage | {fobject.FixedName} | {fobject.Hierarchy} | else", FCU_LogType.IsDownloadable);
                return false;
            }

            controller.Log($"IsDownloadableImage | true | unknown | {fobject.FixedName} | {fobject.Hierarchy}", FCU_LogType.IsDownloadable);
            return true;
        }
    }
}
