using DA_Assets.FCU.Core;
using System;
using UnityEngine;

namespace DA_Assets.FCU.Model
{
    [Serializable]
    public class MPUIKIT_Settings : ControllerHolder<FigmaConverterUnity>
    {
        [SerializeField] UnityEngine.UI.Image.Type type = UnityEngine.UI.Image.Type.Simple;
        [SerializeField] bool raycastTarget = true;
        [SerializeField] float falloffDistance = 0.5f;
        public UnityEngine.UI.Image.Type Type { get => type; set => SetValue(ref type, value); }
        public bool RaycastTarget { get => raycastTarget; set => SetValue(ref raycastTarget, value); }
        public float FalloffDistance { get => falloffDistance; set => SetValue(ref falloffDistance, value); }
    }
}