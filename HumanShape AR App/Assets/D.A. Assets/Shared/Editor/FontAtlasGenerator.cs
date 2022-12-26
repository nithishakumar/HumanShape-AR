#if TMPRO_EXISTS

using DA_Assets.Shared.CodeHelpers;
using System.Collections.Generic;
using System.Diagnostics;
using System.Globalization;
using System.IO;
using System.Threading;
using TMPro;
using TMPro.EditorUtilities;
using UnityEditor;
using UnityEngine;
using UnityEngine.TextCore;
using UnityEngine.TextCore.LowLevel;
using Debug = UnityEngine.Debug;

namespace DA_Assets.Shared
{
    /// <summary>
    /// https://gitlab.com/-/snippets/2077829
    /// </summary>
    public class FontAtlasGenerator
    {
        public FontAtlasGenerator(TMPro_FontAssetCreatorWindow window)
        {
            this.window = window;

            m_AvailableGlyphsToAdd = new ProxyList<uint, TMPro_FontAssetCreatorWindow>(nameof(m_AvailableGlyphsToAdd), window);
            m_MissingCharacters = new ProxyList<uint, TMPro_FontAssetCreatorWindow>(nameof(m_MissingCharacters), window);
            m_GlyphsToPack = new ProxyList<Glyph, TMPro_FontAssetCreatorWindow>(nameof(m_GlyphsToPack), window);
            m_GlyphsPacked = new ProxyList<Glyph, TMPro_FontAssetCreatorWindow>(nameof(m_GlyphsPacked), window);
            m_FreeGlyphRects = new ProxyList<GlyphRect, TMPro_FontAssetCreatorWindow>(nameof(m_FreeGlyphRects), window);
            m_UsedGlyphRects = new ProxyList<GlyphRect, TMPro_FontAssetCreatorWindow>(nameof(m_UsedGlyphRects), window);
            m_FontGlyphTable = new ProxyList<Glyph, TMPro_FontAssetCreatorWindow>(nameof(m_FontGlyphTable), window);
            m_GlyphsToRender = new ProxyList<Glyph, TMPro_FontAssetCreatorWindow>(nameof(m_GlyphsToRender), window);
            m_FontCharacterTable = new ProxyList<TMP_Character, TMPro_FontAssetCreatorWindow>(nameof(m_FontCharacterTable), window);
            m_ExcludedCharacters = new ProxyList<uint, TMPro_FontAssetCreatorWindow>(nameof(m_ExcludedCharacters), window);
            m_CharacterLookupMap = new ProxyDictionary<uint, uint, TMPro_FontAssetCreatorWindow>(nameof(m_CharacterLookupMap), window);
            m_GlyphLookupMap = new ProxyDictionary<uint, List<uint>, TMPro_FontAssetCreatorWindow>(nameof(m_GlyphLookupMap), window);
        }
        public void SaveCurrentFont()
        {
            SaveNewFontAsset(m_SourceFontFile);
        }
        public string GetNewFontPath(Object sourceObject)
        {
            string filePath;

            string saveDirectory = new FileInfo(AssetDatabase.GetAssetPath(sourceObject)).DirectoryName;

            if (((GlyphRasterModes)m_GlyphRenderMode & GlyphRasterModes.RASTER_MODE_BITMAP) == GlyphRasterModes.RASTER_MODE_BITMAP)
            {
                filePath = Path.Combine(saveDirectory, sourceObject.name) + ".asset";
                filePath = filePath.Replace("\\", "/");
            }
            else
            {
                filePath = Path.Combine(saveDirectory, sourceObject.name) + " SDF" + ".asset";
                filePath = filePath.Replace("\\", "/");
            }

            return filePath;
        }
        private void SaveNewFontAsset(Object sourceObject)
        {
            if (((GlyphRasterModes)m_GlyphRenderMode & GlyphRasterModes.RASTER_MODE_BITMAP) == GlyphRasterModes.RASTER_MODE_BITMAP)
            {
                window.Invoke("Save_Bitmap_FontAsset", GetNewFontPath(sourceObject));
            }
            else
            {
                window.Invoke("Save_SDF_FontAsset", GetNewFontPath(sourceObject));
            }
        }

        #region FIELDS
        private TMPro_FontAssetCreatorWindow window;
        private bool convertationDone = false;
        private Stopwatch m_StopWatch;

        private ProxyDictionary<uint, uint, TMPro_FontAssetCreatorWindow> m_CharacterLookupMap;
        private ProxyDictionary<uint, List<uint>, TMPro_FontAssetCreatorWindow> m_GlyphLookupMap;
        private ProxyList<uint, TMPro_FontAssetCreatorWindow> m_AvailableGlyphsToAdd;
        private ProxyList<uint, TMPro_FontAssetCreatorWindow> m_MissingCharacters;
        private ProxyList<Glyph, TMPro_FontAssetCreatorWindow> m_GlyphsToPack;
        private ProxyList<Glyph, TMPro_FontAssetCreatorWindow> m_GlyphsPacked;
        private ProxyList<GlyphRect, TMPro_FontAssetCreatorWindow> m_FreeGlyphRects;
        private ProxyList<GlyphRect, TMPro_FontAssetCreatorWindow> m_UsedGlyphRects;
        private ProxyList<Glyph, TMPro_FontAssetCreatorWindow> m_FontGlyphTable;
        private ProxyList<Glyph, TMPro_FontAssetCreatorWindow> m_GlyphsToRender;
        private ProxyList<TMP_Character, TMPro_FontAssetCreatorWindow> m_FontCharacterTable;
        private ProxyList<uint, TMPro_FontAssetCreatorWindow> m_ExcludedCharacters;
        #endregion
        #region PROPERTIES
        private float m_AtlasGenerationProgress
        {
            get { return window.GetFieldValue<float>(nameof(m_AtlasGenerationProgress)); }
            set { window.SetFieldValue(nameof(m_AtlasGenerationProgress), value); }
        }
        private bool m_IsProcessing
        {
            get { return window.GetFieldValue<bool>(nameof(m_IsProcessing)); }
            set { window.SetFieldValue(nameof(m_IsProcessing), value); }
        }
        public UnityEngine.Object m_SourceFontFile
        {
            get { return window.GetFieldValue<UnityEngine.Object>(nameof(m_SourceFontFile)); }
            set { window.SetFieldValue(nameof(m_SourceFontFile), value); }
        }
        private Texture2D m_FontAtlasTexture
        {
            get { return window.GetFieldValue<Texture2D>(nameof(m_FontAtlasTexture)); }
            set { window.SetFieldValue(nameof(m_FontAtlasTexture), value); }
        }
        private Texture2D m_SavedFontAtlas
        {
            get { return window.GetFieldValue<Texture2D>(nameof(m_SavedFontAtlas)); }
            set { window.SetFieldValue(nameof(m_SavedFontAtlas), value); }
        }
        private string m_OutputFeedback
        {
            get { return window.GetFieldValue<string>(nameof(m_OutputFeedback)); }
            set { window.SetFieldValue(nameof(m_OutputFeedback), value); }
        }
        private int m_CharacterSetSelectionMode
        {
            get { return window.GetFieldValue<int>(nameof(m_CharacterSetSelectionMode)); }
            set { window.SetFieldValue(nameof(m_CharacterSetSelectionMode), value); }
        }
        private string m_CharacterSequence
        {
            get { return window.GetFieldValue<string>(nameof(m_CharacterSequence)); }
            set { window.SetFieldValue(nameof(m_CharacterSequence), value); }
        }
        private Texture2D m_GlyphRectPreviewTexture
        {
            get { return window.GetFieldValue<Texture2D>(nameof(m_GlyphRectPreviewTexture)); }
            set { window.SetFieldValue(nameof(m_GlyphRectPreviewTexture), value); }
        }
        private int m_CharacterCount
        {
            get { return window.GetFieldValue<int>(nameof(m_CharacterCount)); }
            set { window.SetFieldValue(nameof(m_CharacterCount), value); }
        }
        public bool m_IsGenerationCancelled
        {
            get { return window.GetFieldValue<bool>(nameof(m_IsGenerationCancelled)); }
            set { window.SetFieldValue(nameof(m_IsGenerationCancelled), value); }
        }
        private GlyphRenderMode m_GlyphRenderMode
        {
            get { return window.GetFieldValue<GlyphRenderMode>(nameof(m_GlyphRenderMode)); }
            set { window.SetFieldValue(nameof(m_GlyphRenderMode), value); }
        }
        private int m_PointSizeSamplingMode
        {
            get { return window.GetFieldValue<int>(nameof(m_PointSizeSamplingMode)); }
            set { window.SetFieldValue(nameof(m_PointSizeSamplingMode), value); }
        }
        private int m_AtlasWidth
        {
            get { return window.GetFieldValue<int>(nameof(m_AtlasWidth)); }
            set { window.SetFieldValue(nameof(m_AtlasWidth), value); }
        }
        private int m_AtlasHeight
        {
            get { return window.GetFieldValue<int>(nameof(m_AtlasHeight)); }
            set { window.SetFieldValue(nameof(m_AtlasHeight), value); }
        }
        private int m_PointSize
        {
            get { return window.GetFieldValue<int>(nameof(m_PointSize)); }
            set { window.SetFieldValue(nameof(m_PointSize), value); }
        }
        private string m_AtlasGenerationProgressLabel
        {
            get { return window.GetFieldValue<string>(nameof(m_AtlasGenerationProgressLabel)); }
            set { window.SetFieldValue(nameof(m_AtlasGenerationProgressLabel), value); }
        }
        private int m_Padding
        {
            get { return window.GetFieldValue<int>(nameof(m_Padding)); }
            set { window.SetFieldValue(nameof(m_Padding), value); }
        }
        private int m_PackingMode
        {
            get { return window.GetFieldValue<int>(nameof(m_PackingMode)); }
            set { window.SetFieldValue(nameof(m_PackingMode), value); }
        }
        private double m_GlyphPackingGenerationTime
        {
            get { return window.GetFieldValue<double>(nameof(m_GlyphPackingGenerationTime)); }
            set { window.SetFieldValue(nameof(m_GlyphPackingGenerationTime), value); }
        }
        private bool m_IsGlyphPackingDone
        {
            get { return window.GetFieldValue<bool>(nameof(m_IsGlyphPackingDone)); }
            set { window.SetFieldValue(nameof(m_IsGlyphPackingDone), value); }
        }
        public bool m_IsRenderingDone
        {
            get { return window.GetFieldValue<bool>(nameof(m_IsRenderingDone)); }
            set { window.SetFieldValue(nameof(m_IsRenderingDone), value); }
        }
        private FaceInfo m_FaceInfo
        {
            get { return window.GetFieldValue<FaceInfo>(nameof(m_FaceInfo)); }
            set { window.SetFieldValue(nameof(m_FaceInfo), value); }
        }
        private byte[] m_AtlasTextureBuffer
        {
            get { return window.GetFieldValue<byte[]>(nameof(m_AtlasTextureBuffer)); }
            set { window.SetFieldValue(nameof(m_AtlasTextureBuffer), value); }
        }
        private double m_GlyphRenderingGenerationTime
        {
            get { return window.GetFieldValue<double>(nameof(m_GlyphRenderingGenerationTime)); }
            set { window.SetFieldValue(nameof(m_GlyphRenderingGenerationTime), value); }
        }
        public bool m_IsGlyphRenderingDone
        {
            get { return window.GetFieldValue<bool>(nameof(m_IsGlyphRenderingDone)); }
            set { window.SetFieldValue(nameof(m_IsGlyphRenderingDone), value); }
        }
        public bool ConvertationDone 
        { 
            get => convertationDone; 
            set => convertationDone = value; 
        }
        #endregion
        #region MEHTODS
        public void GenerateAtlas()
        {
            convertationDone = false;

            if (!m_IsProcessing && m_SourceFontFile != null)
            {
                m_FontAtlasTexture.Destroy();
                m_GlyphRectPreviewTexture.Destroy();
                m_FontAtlasTexture = null;
                m_SavedFontAtlas = null;
                m_OutputFeedback = string.Empty;

                // Initialize font engine
                FontEngineError errorCode = FontEngine.InitializeFontEngine();
                if (errorCode != FontEngineError.Success)
                {
                    UnityEngine.Debug.Log(
                        "Font Asset Creator - Error ["
                            + errorCode
                            + "] has occurred while Initializing the FreeType Library."
                    );
                }

                // Get file path of the source font file.
                string fontPath = AssetDatabase.GetAssetPath(m_SourceFontFile);

                if (errorCode == FontEngineError.Success)
                {
                    errorCode = FontEngine.LoadFontFace(fontPath);

                    if (errorCode != FontEngineError.Success)
                    {
                        UnityEngine.Debug.Log(
                            "Font Asset Creator - Error Code ["
                                + errorCode
                                + "] has occurred trying to load the ["
                                + m_SourceFontFile.name
                                + "] font file. This typically results from the use of an incompatible or corrupted font file.",
                            m_SourceFontFile
                        );
                    }
                }

                // Define an array containing the characters we will render.
                if (errorCode == FontEngineError.Success)
                {
                    uint[] characterSet = null;

                    // Get list of characters that need to be packed and rendered to the atlas texture.
                    if (m_CharacterSetSelectionMode == 7 || m_CharacterSetSelectionMode == 8)
                    {
                        List<uint> char_List = new List<uint>();

                        for (int i = 0; i < m_CharacterSequence.Length; i++)
                        {
                            uint unicode = m_CharacterSequence[i];

                            // Handle surrogate pairs
                            if (
                                i < m_CharacterSequence.Length - 1
                                && char.IsHighSurrogate((char)unicode)
                                && char.IsLowSurrogate(m_CharacterSequence[i + 1])
                            )
                            {
                                unicode = (uint)char.ConvertToUtf32(
                                    m_CharacterSequence[i],
                                    m_CharacterSequence[i + 1]
                                );
                                i += 1;
                            }

                            // Check to make sure we don't include duplicates
                            if (char_List.FindIndex(item => item == unicode) == -1)
                                char_List.Add(unicode);
                        }

                        characterSet = char_List.ToArray();
                    }
                    else if (m_CharacterSetSelectionMode == 6)
                    {
                        characterSet = ParseHexNumberSequence(m_CharacterSequence);
                    }
                    else
                    {
                        characterSet = ParseNumberSequence(m_CharacterSequence);
                    }

                    m_CharacterCount = characterSet.Length;

                    m_AtlasGenerationProgress = 0;
                    m_IsProcessing = true;
                    m_IsGenerationCancelled = false;

                    GlyphLoadFlags glyphLoadFlags =
                        ((GlyphRasterModes)m_GlyphRenderMode & GlyphRasterModes.RASTER_MODE_HINTED)
                        == GlyphRasterModes.RASTER_MODE_HINTED
                            ? GlyphLoadFlags.LOAD_RENDER
                            : GlyphLoadFlags.LOAD_RENDER | GlyphLoadFlags.LOAD_NO_HINTING;

                    glyphLoadFlags =
                        ((GlyphRasterModes)m_GlyphRenderMode & GlyphRasterModes.RASTER_MODE_MONO)
                        == GlyphRasterModes.RASTER_MODE_MONO
                            ? glyphLoadFlags | GlyphLoadFlags.LOAD_MONOCHROME
                            : glyphLoadFlags;

                    //
                    AutoResetEvent autoEvent = new AutoResetEvent(false);

                    // Worker thread to pack glyphs in the given texture space.
                    ThreadPool.QueueUserWorkItem(
                        PackGlyphs =>
                        {
                            // Start Stop Watch
                            m_StopWatch = System.Diagnostics.Stopwatch.StartNew();

                            // Clear the various lists used in the generation process.
                            m_AvailableGlyphsToAdd.Clear();
                            m_MissingCharacters.Clear();
                            m_ExcludedCharacters.Clear();
                            m_CharacterLookupMap.Clear();
                            m_GlyphLookupMap.Clear();
                            m_GlyphsToPack.Clear();
                            m_GlyphsPacked.Clear();

                            // Check if requested characters are available in the source font file.
                            for (int i = 0; i < characterSet.Length; i++)
                            {
                                uint unicode = characterSet[i];
                                uint glyphIndex;

                                if (FontEngine.TryGetGlyphIndex(unicode, out glyphIndex))
                                {
                                    // Skip over potential duplicate characters.
                                    if (m_CharacterLookupMap.ContainsKey(unicode))
                                        continue;

                                    // Add character to character lookup map.
                                    m_CharacterLookupMap.Add(unicode, glyphIndex);

                                    // Skip over potential duplicate glyph references.
                                    if (m_GlyphLookupMap.ContainsKey(glyphIndex))
                                    {
                                        // Add additional glyph reference for this character.
                                        m_GlyphLookupMap[glyphIndex].Add(unicode);
                                        continue;
                                    }

                                    // Add glyph reference to glyph lookup map.
                                    m_GlyphLookupMap.Add(glyphIndex, new List<uint>() { unicode });

                                    // Add glyph index to list of glyphs to add to texture.
                                    m_AvailableGlyphsToAdd.Add(glyphIndex);
                                }
                                else
                                {
                                    // Add Unicode to list of missing characters.
                                    m_MissingCharacters.Add(unicode);
                                }
                            }

                            // Pack available glyphs in the provided texture space.
                            if (m_AvailableGlyphsToAdd.Count > 0)
                            {
                                int packingModifier =
                                    (
                                        (GlyphRasterModes)m_GlyphRenderMode
                                        & GlyphRasterModes.RASTER_MODE_BITMAP
                                    ) == GlyphRasterModes.RASTER_MODE_BITMAP
                                        ? 0
                                        : 1;

                                if (m_PointSizeSamplingMode == 0) // Auto-Sizing Point Size Mode
                                {
                                    // Estimate min / max range for auto sizing of point size.
                                    int minPointSize = 0;
                                    int maxPointSize =
                                        (int)Mathf.Sqrt(
                                            (m_AtlasWidth * m_AtlasHeight)
                                                / m_AvailableGlyphsToAdd.Count
                                        ) * 3;

                                    m_PointSize = (maxPointSize + minPointSize) / 2;

                                    bool optimumPointSizeFound = false;
                                    for (
                                        int iteration = 0;
                                        iteration < 15 && optimumPointSizeFound == false;
                                        iteration++
                                    )
                                    {
                                        m_AtlasGenerationProgressLabel =
                                            "Packing glyphs - Pass (" + iteration + ")";

                                        FontEngine.SetFaceSize(m_PointSize);

                                        m_GlyphsToPack.Clear();
                                        m_GlyphsPacked.Clear();

                                        m_FreeGlyphRects.Clear();
                                        m_FreeGlyphRects.Add(
                                            new GlyphRect(
                                                0,
                                                0,
                                                m_AtlasWidth - packingModifier,
                                                m_AtlasHeight - packingModifier
                                            )
                                        );
                                        m_UsedGlyphRects.Clear();

                                        for (int i = 0; i < m_AvailableGlyphsToAdd.Count; i++)
                                        {
                                            uint glyphIndex = m_AvailableGlyphsToAdd[i];
                                            Glyph glyph;

                                            if (
                                                FontEngine.TryGetGlyphWithIndexValue(
                                                    glyphIndex,
                                                    glyphLoadFlags,
                                                    out glyph
                                                )
                                            )
                                            {
                                                if (
                                                    glyph.glyphRect.width > 0
                                                    && glyph.glyphRect.height > 0
                                                )
                                                {
                                                    m_GlyphsToPack.Add(glyph);
                                                }
                                                else
                                                {
                                                    m_GlyphsPacked.Add(glyph);
                                                }
                                            }
                                        }

                                        TryPackGlyphsInAtlas(
                                            m_GlyphsToPack.GetList(),
                                            m_GlyphsPacked.GetList(),
                                            m_Padding,
                                            (GlyphPackingMode)m_PackingMode,
                                            m_GlyphRenderMode,
                                            m_AtlasWidth,
                                            m_AtlasHeight,
                                            m_FreeGlyphRects.GetList(),
                                            m_UsedGlyphRects.GetList()
                                        );
                                        m_GlyphsToPack.UpdateValue();
                                        m_GlyphsPacked.UpdateValue();
                                        m_FreeGlyphRects.UpdateValue();
                                        m_UsedGlyphRects.UpdateValue();

                                        if (m_IsGenerationCancelled)
                                        {
                                            m_FontAtlasTexture.Destroy();
                                            m_FontAtlasTexture = null;
                                            return;
                                        }

                                        //Debug.Log("Glyphs remaining to add [" + m_GlyphsToAdd.Count + "]. Glyphs added [" + m_GlyphsAdded.Count + "].");

                                        if (m_GlyphsToPack.Count > 0)
                                        {
                                            if (m_PointSize > minPointSize)
                                            {
                                                maxPointSize = m_PointSize;
                                                m_PointSize = (m_PointSize + minPointSize) / 2;
                                                //Debug.Log("Decreasing point size from [" + maxPointSize + "] to [" + m_PointSize + "].");
                                            }
                                        }
                                        else
                                        {
                                            if (
                                                maxPointSize - minPointSize > 1
                                                && m_PointSize < maxPointSize
                                            )
                                            {
                                                minPointSize = m_PointSize;
                                                m_PointSize = (m_PointSize + maxPointSize) / 2;
                                                //Debug.Log("Increasing point size from [" + minPointSize + "] to [" + m_PointSize + "].");
                                            }
                                            else
                                            {
                                                //Debug.Log("[" + iteration + "] iterations to find the optimum point size of : [" + m_PointSize + "].");
                                                optimumPointSizeFound = true;
                                            }
                                        }
                                    }
                                }
                                else // Custom Point Size Mode
                                {
                                    m_AtlasGenerationProgressLabel = "Packing glyphs...";

                                    // Set point size
                                    FontEngine.SetFaceSize(m_PointSize);

                                    m_GlyphsToPack.Clear();
                                    m_GlyphsPacked.Clear();

                                    m_FreeGlyphRects.Clear();
                                    m_FreeGlyphRects.Add(
                                        new GlyphRect(
                                            0,
                                            0,
                                            m_AtlasWidth - packingModifier,
                                            m_AtlasHeight - packingModifier
                                        )
                                    );
                                    m_UsedGlyphRects.Clear();

                                    for (int i = 0; i < m_AvailableGlyphsToAdd.Count; i++)
                                    {
                                        uint glyphIndex = m_AvailableGlyphsToAdd[i];
                                        Glyph glyph;

                                        if (
                                            FontEngine.TryGetGlyphWithIndexValue(
                                                glyphIndex,
                                                glyphLoadFlags,
                                                out glyph
                                            )
                                        )
                                        {
                                            if (
                                                glyph.glyphRect.width > 0
                                                && glyph.glyphRect.height > 0
                                            )
                                            {
                                                m_GlyphsToPack.Add(glyph);
                                            }
                                            else
                                            {
                                                m_GlyphsPacked.Add(glyph);
                                            }
                                        }
                                    }

                                    TryPackGlyphsInAtlas(
                                        m_GlyphsToPack.GetList(),
                                        m_GlyphsPacked.GetList(),
                                        m_Padding,
                                        (GlyphPackingMode)m_PackingMode,
                                        m_GlyphRenderMode,
                                        m_AtlasWidth,
                                        m_AtlasHeight,
                                        m_FreeGlyphRects.GetList(),
                                        m_UsedGlyphRects.GetList()
                                    );
                                    m_GlyphsToPack.UpdateValue();
                                    m_GlyphsPacked.UpdateValue();
                                    m_FreeGlyphRects.UpdateValue();
                                    m_UsedGlyphRects.UpdateValue();

                                    if (m_IsGenerationCancelled)
                                    {
                                        m_FontAtlasTexture.Destroy();
                                        m_FontAtlasTexture = null;
                                        return;
                                    }
                                    //Debug.Log("Glyphs remaining to add [" + m_GlyphsToAdd.Count + "]. Glyphs added [" + m_GlyphsAdded.Count + "].");
                                }
                            }
                            else
                            {
                                int packingModifier =
                                    (
                                        (GlyphRasterModes)m_GlyphRenderMode
                                        & GlyphRasterModes.RASTER_MODE_BITMAP
                                    ) == GlyphRasterModes.RASTER_MODE_BITMAP
                                        ? 0
                                        : 1;

                                FontEngine.SetFaceSize(m_PointSize);

                                m_GlyphsToPack.Clear();
                                m_GlyphsPacked.Clear();

                                m_FreeGlyphRects.Clear();
                                m_FreeGlyphRects.Add(
                                    new GlyphRect(
                                        0,
                                        0,
                                        m_AtlasWidth - packingModifier,
                                        m_AtlasHeight - packingModifier
                                    )
                                );
                                m_UsedGlyphRects.Clear();
                            }

                            //Stop StopWatch
                            m_StopWatch.Stop();
                            m_GlyphPackingGenerationTime = m_StopWatch.Elapsed.TotalMilliseconds;
                            m_IsGlyphPackingDone = true;
                            m_StopWatch.Reset();

                            m_FontCharacterTable.Clear();
                            m_FontGlyphTable.Clear();
                            m_GlyphsToRender.Clear();

                            // Handle Results and potential cancellation of glyph rendering
                            if (
                                m_GlyphRenderMode == GlyphRenderMode.SDF32 && m_PointSize > 512
                                || m_GlyphRenderMode == GlyphRenderMode.SDF16 && m_PointSize > 1024
                                || m_GlyphRenderMode == GlyphRenderMode.SDF8 && m_PointSize > 2048
                            )
                            {
                                int upSampling = 1;
                                switch (m_GlyphRenderMode)
                                {
                                    case GlyphRenderMode.SDF8:
                                        upSampling = 8;
                                        break;
                                    case GlyphRenderMode.SDF16:
                                        upSampling = 16;
                                        break;
                                    case GlyphRenderMode.SDF32:
                                        upSampling = 32;
                                        break;
                                }

                                UnityEngine.Debug.Log(
                                    "Glyph rendering has been aborted due to sampling point size of ["
                                        + m_PointSize
                                        + "] x SDF ["
                                        + upSampling
                                        + "] up sampling exceeds 16,384 point size. Please revise your generation settings to make sure the sampling point size x SDF up sampling mode does not exceed 16,384."
                                );

                                m_IsRenderingDone = true;
                                m_AtlasGenerationProgress = 0;
                                m_IsGenerationCancelled = true;
                            }

                            // Add glyphs and characters successfully added to texture to their respective font tables.
                            foreach (Glyph glyph in m_GlyphsPacked.GetList())
                            {
                                uint glyphIndex = glyph.index;

                                m_FontGlyphTable.Add(glyph);

                                // Add glyphs to list of glyphs that need to be rendered.
                                if (glyph.glyphRect.width > 0 && glyph.glyphRect.height > 0)
                                    m_GlyphsToRender.Add(glyph);

                                foreach (uint unicode in m_GlyphLookupMap[glyphIndex])
                                {
                                    // Create new Character
                                    m_FontCharacterTable.Add(new TMP_Character(unicode, glyph));
                                }
                            }

                            //
                            foreach (Glyph glyph in m_GlyphsToPack.GetList())
                            {
                                foreach (uint unicode in m_GlyphLookupMap[glyph.index])
                                {
                                    m_ExcludedCharacters.Add(unicode);
                                }
                            }

                            // Get the face info for the current sampling point size.
                            m_FaceInfo = FontEngine.GetFaceInfo();

                            autoEvent.Set();
                        }
                    );

                    // Worker thread to render glyphs in texture buffer.
                    ThreadPool.QueueUserWorkItem(
                        RenderGlyphs =>
                        {
                            autoEvent.WaitOne();

                            if (m_IsGenerationCancelled == false)
                            {
                                // Start Stop Watch
                                m_StopWatch = System.Diagnostics.Stopwatch.StartNew();

                                m_IsRenderingDone = false;

                                // Allocate texture data
                                m_AtlasTextureBuffer = new byte[m_AtlasWidth * m_AtlasHeight];

                                m_AtlasGenerationProgressLabel = "Rendering glyphs...";

                                // Render and add glyphs to the given atlas texture.
                                if (m_GlyphsToRender.Count > 0)
                                {
                                    RenderGlyphsToTexture(
                                        m_GlyphsToRender.GetList(),
                                        m_Padding,
                                        m_GlyphRenderMode,
                                        m_AtlasTextureBuffer,
                                        m_AtlasWidth,
                                        m_AtlasHeight
                                    );
                                    m_GlyphsToRender.UpdateValue();
                                }

                                m_IsRenderingDone = true;

                                // Stop StopWatch
                                m_StopWatch.Stop();
                                m_GlyphRenderingGenerationTime =
                                    m_StopWatch.Elapsed.TotalMilliseconds;
                                m_IsGlyphRenderingDone = true;
                                m_StopWatch.Reset();
                            }
                        }
                    );
                }

                SaveCreationSettingsToEditorPrefs(SaveFontCreationSettings());
            }

            convertationDone = true;
        }
        /// <summary>
        /// Method which returns the character (decimal value) from a hex sequence.
        /// </summary>
        /// <param name="sequence"></param>
        /// <returns></returns>
        private static uint[] ParseHexNumberSequence(string sequence)
        {
            List<uint> unicodeList = new List<uint>();
            string[] sequences = sequence.Split(',');

            foreach (string seq in sequences)
            {
                string[] s1 = seq.Split('-');

                if (s1.Length == 1)
                {
                    try
                    {
                        unicodeList.Add(uint.Parse(s1[0], NumberStyles.AllowHexSpecifier));
                    }
                    catch
                    {
                        Debug.Log("No characters selected or invalid format.");
                    }
                }
                else
                {
                    uint a1 = uint.Parse(s1[0], NumberStyles.AllowHexSpecifier);
                    uint a2 = uint.Parse(s1[1], NumberStyles.AllowHexSpecifier) + 1;

                    for (uint j = a1; j < a2; j++)
                    {
                        unicodeList.Add(j);
                    }
                }
            }

            return unicodeList.ToArray();
        }

        /// <summary>
        /// Method which returns the character corresponding to a decimal value.
        /// </summary>
        /// <param name="sequence"></param>
        /// <returns></returns>
        private static uint[] ParseNumberSequence(string sequence)
        {
            List<uint> unicodeList = new List<uint>();
            string[] sequences = sequence.Split(',');

            foreach (string seq in sequences)
            {
                string[] s1 = seq.Split('-');

                if (s1.Length == 1)
                {
                    try
                    {
                        unicodeList.Add(uint.Parse(s1[0]));
                    }
                    catch
                    {
                        Debug.Log("No characters selected or invalid format.");
                    }
                }
                else
                {
                    uint a1 = uint.Parse(s1[0]);
                    uint a2 = uint.Parse(s1[1]) + 1;

                    for (uint j = a1; j < a2; j++)
                    {
                        unicodeList.Add(j);
                    }
                }
            }

            return unicodeList.ToArray();
        }

        private void TryPackGlyphsInAtlas(
            List<Glyph> m_GlyphsToPack,
            List<Glyph> m_GlyphsPacked,
            int m_Padding,
            GlyphPackingMode m_PackingMode,
            GlyphRenderMode m_GlyphRenderMode,
            int m_AtlasWidth,
            int m_AtlasHeight,
            List<GlyphRect> m_FreeGlyphRects,
            List<GlyphRect> m_UsedGlyphRects)
        {
            typeof(FontEngine).Invoke(nameof(TryPackGlyphsInAtlas), new object[]
            {
                m_GlyphsToPack,
                m_GlyphsPacked,
                m_Padding,
                m_PackingMode,
                m_GlyphRenderMode,
                m_AtlasWidth,
                m_AtlasHeight,
                m_FreeGlyphRects,
                m_UsedGlyphRects
            });
        }
        private void RenderGlyphsToTexture(
            List<Glyph> m_GlyphsToRender,
            int m_Padding,
            GlyphRenderMode m_GlyphRenderMode,
            byte[] m_AtlasTextureBuffer,
            int m_AtlasWidth,
            int m_AtlasHeight)
        {
            typeof(FontEngine).FindAndInvoke(nameof(RenderGlyphsToTexture), new object[]
            {
                m_GlyphsToRender,
                m_Padding,
                m_GlyphRenderMode,
                m_AtlasTextureBuffer,
                m_AtlasWidth,
                m_AtlasHeight
            });
        }


        private void SaveCreationSettingsToEditorPrefs(FontAssetCreationSettings settings)
        {
            window.Invoke(nameof(SaveCreationSettingsToEditorPrefs), new object[] { settings });
        }
        private FontAssetCreationSettings SaveFontCreationSettings()
        {
            return window.InvokeAndReturn<TMPro_FontAssetCreatorWindow, FontAssetCreationSettings>(nameof(SaveFontCreationSettings), new object[0]);
        }
        #endregion

        enum GlyphRasterModes
        {
            RASTER_MODE_8BIT = 1,
            RASTER_MODE_MONO = 2,
            RASTER_MODE_NO_HINTING = 4,
            RASTER_MODE_HINTED = 8,
            RASTER_MODE_BITMAP = 16,
            RASTER_MODE_SDF = 32,
            RASTER_MODE_SDFAA = 64,
            RASTER_MODE_MSDF = 256,
            RASTER_MODE_MSDFA = 512,
            RASTER_MODE_1X = 4096,
            RASTER_MODE_8X = 8192,
            RASTER_MODE_16X = 16384,
            RASTER_MODE_32X = 32768
        }
    }
}
#endif