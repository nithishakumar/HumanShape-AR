using DA_Assets.Shared;
using System;
using System.Collections.Generic;

namespace DA_Assets.FCU.Model
{
    [Serializable]
    public struct AssemblyConfig
    {
        public string Name;
        public AssetType AssetType;
        public string ScriptingDefineName;
        public UpdateBool Enabled;
        public List<string> Data;
    }
    public enum AssetType
    {
        JsonNET = 0,
        TextMeshPro = 1,
        TrueShadow = 2,
        MPUIKit = 3,
        ProceduralUIImage = 4,
        I2Localization = 5,
        Shapes2D = 6,
    }
}