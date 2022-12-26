using System.Collections.Generic;
using UnityEngine;

namespace DA_Assets.FCU.Model
{
    public class FObjectExtra
    {
        public bool IsEmptyMask { get; set; }
        public string Hash { get; set; }
        public string Hierarchy { get; set; }
        public string FixedName { get; set; }
        public FCU_Meta Meta { get; set; }
        public FObject Parent { get; set; }
        public bool IsMutual { get; set; }
        public GameObject GameObject { get; set; }
        public List<FCU_Tag> Tags { get; set; }
        public string FilePath { get; set; }
        public bool NeedDownloadFile { get; set; }
        public string AssetPath { get; set; }
        public string Link { get; set; }
        public bool ManualTagExists { get; set; }
    }
}