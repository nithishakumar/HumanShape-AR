using DA_Assets.FCU.Config;
using DA_Assets.FCU.Extensions;
using DA_Assets.FCU.Model;
using DA_Assets.Shared;
using System;
using System.Collections.Generic;
using System.Linq;
using UnityEditor;
using UnityEngine;

namespace DA_Assets.FCU
{
    [CustomEditor(typeof(FCU_Config))]
    internal class FCU_ConfigEditor : Editor
    {
        private FCU_Config fcuConfig;
        public void OnEnable()
        {
            fcuConfig = (FCU_Config)target;
        }
        public override void OnInspectorGUI()
        {
            serializedObject.Update();

            if (GUILayout.Button("Create an array of tags"))
            {
                IEnumerable<FCU_Tag> locKeys = Enum.GetValues(typeof(FCU_Tag)).Cast<FCU_Tag>();

                foreach (var item in locKeys)
                {
                    if (fcuConfig.TagConfigs.Select(x => x.FCU_Tag).Contains(item) == false)
                    {
                        fcuConfig.TagConfigs.Add(new TagConfig
                        {
                            Label = item.ToString(),
                            FCU_Tag = item
                        });
                    }
                }
            }

            if (GUILayout.Button("Fill aligment names"))
            {
                for (int i = 0; i < fcuConfig.AligmentConfigs.Count(); i++)
                {
                    FigmaAligment fa = fcuConfig.AligmentConfigs[i];
                    fa.Label = $"{fa.Anchor} | {fa.LayoutType}";
                    fcuConfig.AligmentConfigs[i] = fa;
                }
            }

            if (GUILayout.Button("Sort aligments"))
            {
                FCU_Config.Instance.AligmentConfigs = FCU_Config.Instance.AligmentConfigs
                    .OrderBy(x => x.Anchor)
                    .ThenBy(x => x.LayoutType)
                    .ThenBy(x => x.FigmaData)
                    .ToList();
            }

            serializedObject.ApplyModifiedProperties();

            base.OnInspectorGUI();
        }
    }
}