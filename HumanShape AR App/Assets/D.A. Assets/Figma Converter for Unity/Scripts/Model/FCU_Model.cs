using DA_Assets.FCU.Core;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace DA_Assets.FCU.Model
{
    [Serializable]
    public struct hierarchy_aligment
    {
        public string hierarchy;
        public string aligment;
    }
    [Serializable]
    public class FCU_Model : ControllerHolder<FigmaConverterUnity>
    {
        public List<hierarchy_aligment> aligmentRaw = new List<hierarchy_aligment>();
        public List<hierarchy_aligment> aligments = new List<hierarchy_aligment>();

        [SerializeField] MainSettings mainSettings;
        [SerializeField] PUI_Settings puiSettings;
        [SerializeField] MPUIKIT_Settings mpuikitSettings;
        [SerializeField] UnityImageSettings unityImageSettings;
        [SerializeField] Shapes2D_Settings shapes2D_Settings;
        [SerializeField] DebugModeSettings debugModeSettings;
        [SerializeField] string guid;
        [SerializeField] List<SelectableItem> selectableFrames = new List<SelectableItem>();

        public TextMeshSettings textMeshSettings;
        public UnityTextSettings unityTextSettings;
        public List<HamburgerItem> SelectableHamburgerItems = new List<HamburgerItem>();

        public List<SelectableItem> SelectableFrames { get => selectableFrames; set => SetValue(ref selectableFrames, value); }
        #region SETTINGS
        public MainSettings MainSettings { get => mainSettings.SetController(controller); }
        public PUI_Settings PUI_Settings { get => puiSettings.SetController(controller); }
        public MPUIKIT_Settings MPUIKIT_Settings { get => mpuikitSettings.SetController(controller); }
        public UnityImageSettings UnityImageSettings { get => unityImageSettings.SetController(controller); }
        public Shapes2D_Settings Shapes2D_Settings { get => shapes2D_Settings.SetController(controller); }
        public TextMeshSettings TextMeshSettings { get => textMeshSettings.SetController(controller); }
        public UnityTextSettings UnityTextSettings { get => unityTextSettings.SetController(controller); }
        public DebugModeSettings DebugModeSettings { get => debugModeSettings.SetController(controller); }
        #endregion

        /// <summary>
        /// Allows running coroutines in playmode/build using 'MonoBehaviour.StartCoroutine' method,
        /// and in editor using 'EditorCoroutine.StartCoroutine' method.
        /// </summary>
        public DynamicCoroutine DynamicCoroutine { get; set; }
        public SetGameViewSize SetGameViewSize { get; set; }
        public GetGameViewSize GetGameViewSize { get; set; }
        /// <summary>
        /// It's necessary that when adding a DEFINE, after reloading the editor, 
        /// if something went wrong, re-add or remove the DEFINE. 
        /// The event will be executed until the DEFINE is added or removed.
        /// </summary>
        public object AssetRepainter { get; set; }
        public object EditorGUI { get; set; }
        public FigmaProject CurrentProject { get; set; }
        public List<object> CoroutinesPool = new List<object>();
        public IEnumerator StopAllCoroutines { get; set; }
        public string Guid
        {
            get
            {
                if (string.IsNullOrWhiteSpace(guid))
                {
                    SetValue(ref guid, System.Guid.NewGuid().ToString().Split('-')[0]);
                }

                return guid;
            }
        }
    }
}