using DA_Assets.FCU.Model;
using UnityEditor;
using DA_Assets.Shared.CodeHelpers;
using DA_Assets.Shared;
using UnityEngine;
using DA_Assets.FCU.Core;

#pragma warning disable IDE0003

namespace DA_Assets.FCU
{
    [CustomEditor(typeof(FCU_Meta)), CanEditMultipleObjects]
    internal class FCU_MetaEditor : Editor
    {
        private DA_GUI_Editor gui;
        private FigmaConverterUnity fcu;
        private void OnEnable()
        {
            var meta = (FCU_Meta)target;
            fcu = meta.FigmaConverterUnity;

            if (gui == null)
            {
                gui = CreateInstance<DA_GUI_Editor>();
            }
        }
        public override void OnInspectorGUI()
        {
            gui.DrawGroup(new Group
            {
                GroupType = GroupType.Vertical,
                Style = CustomStyle.BG,
                Body = () =>
                {
                    gui.Label(new GUIContent(LocKey.label_dont_remove_fcu_meta.Localize()), labelWidthType: LabelWidthType.Expand);
                    gui.Label(new GUIContent(LocKey.label_more_about_layout_updating.Localize()), 10, LabelWidthType.Expand);
                }
            });

            if ((fcu?.Model.MainSettings.DebugMode).ToBool())
            {
                GUILayout.Space(gui.NORMAL_SPACE);
                base.OnInspectorGUI();
            }

        }
    }
}