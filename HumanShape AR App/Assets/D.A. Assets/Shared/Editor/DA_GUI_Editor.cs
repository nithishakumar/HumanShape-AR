using DA_Assets.FCU.Model;
using DA_Assets.Shared.CodeHelpers;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Linq.Expressions;
using System.Text.RegularExpressions;
using UnityEditor;
using UnityEngine;

namespace DA_Assets.Shared
{
    public class DA_GUI_Editor : Editor
    {
        public GUISkin guiSkin;

        public Texture2D imgLogo;
        public Texture2D imgViewRecent;
        public Texture2D imgExpandClosed;
        public Texture2D imgExpandOpened;
        public Texture2D iconFAQ;
        public Texture2D iconSupport;
        public int SMALL_SPACE = 5, FIELD_SPACE2 = 6, NORMAL_SPACE = 15, BIG_SPACE = 30;
        #region BASE_GUI_COMPONENTS
        /// <summary>
        /// Method to simplify work with GUI-groups.
        /// </summary>
        public void DrawGroup(Group group)
        {
            switch (group.GroupType)
            {
                case GroupType.Horizontal:
                    if (group.Style != CustomStyle.None)
                    {
                        GUILayout.BeginHorizontal(GetStyle(group.Style));
                    }
                    else
                    {
                        GUILayout.BeginHorizontal();
                    }

                    group.Body.Invoke();
                    GUILayout.EndHorizontal();
                    break;
                case GroupType.Vertical:
                    if (group.Style != CustomStyle.None)
                    {
                        GUILayout.BeginVertical(GetStyle(group.Style));
                    }
                    else
                    {
                        GUILayout.BeginVertical();
                    }

                    group.Body.Invoke();
                    GUILayout.EndVertical();
                    break;
            }
        }
        public bool CheckBox(GUIContent label, bool value, int checkBoxOffset)
        {
            bool _value = false;

            DrawGroup(new Group
            {
                Style = CustomStyle.BOX_NO_FRAME1,
                GroupType = GroupType.Horizontal,
                Body = () =>
                {
                    GUILayout.Label(label, GetStyle(CustomStyle.HCB_LABEL));

                    GUILayout.FlexibleSpace();

                    Rect rect = GUILayoutUtility.GetRect(width: 25, height: 25);

                    _value = EditorGUI.Toggle(
                        rect,
                        value,
                        EditorStyles.toggle);
                }
            });

            return _value;
        }

        public void DrawMenu(ref List<HamburgerItem> buffer, HamburgerItem menu)
        {
            int index = buffer.FindIndex(x => x.Id == menu.Id);

            if (index < 0)
            {
                buffer.Add(menu);
                index = 0;
            }

            bool value;

            GUILayout.BeginHorizontal(GetStyle(CustomStyle.BOX_FRAME2));

            Texture2D t2d;

            if (buffer[index].State)
            {
                t2d = imgExpandClosed;
            }
            else
            {
                t2d = imgExpandOpened;
            }

            Rect boxRect = GUILayoutUtility.GetRect(new GUIContent(), GUI.skin.box);
            boxRect.width = 20;
            boxRect.height = 20;

            GUI.Box(boxRect, t2d);

            Rect btnRect = GUILayoutUtility.GetRect(menu.GUIContent, GetStyle(CustomStyle.HCB_BUTTON), GUILayout.ExpandWidth(true));
            btnRect.x += 15;

            if (menu.CheckBoxValueChanged != null)
            {
                btnRect.width -= 50;
            }
            else
            {
                btnRect.width -= 16;
            }

            bool btn = GUI.Button(btnRect, menu.GUIContent, GetStyle(CustomStyle.HCB_BUTTON));

            if (btn)
            {
                buffer[index].State = !buffer[index].State;
            }

            if (menu.CheckBoxValueChanged != null)
            {
                Rect rect2 = btnRect;
                rect2.x += rect2.width + 10;

                buffer[index].CheckBoxValue = EditorGUI.Toggle(
                    rect2,
                    buffer[index].CheckBoxValue,
                    EditorStyles.toggle);

                if (menu.CheckBoxValueChanged != null)
                {
                    if (buffer[index].CheckBoxValue != buffer[index].CheckBoxValueTemp)
                    {
                        buffer[index].CheckBoxValueTemp = buffer[index].CheckBoxValue;
                        menu.CheckBoxValueChanged.Invoke(menu.Id, buffer[index].CheckBoxValue);
                    }
                }
            }

            GUILayout.EndHorizontal();

            value = buffer[index].State;

            DrawGroup(new Group
            {
                GroupType = GroupType.Horizontal,
                Body = () =>
                {
                    GUILayout.Space(NORMAL_SPACE);
                    DrawGroup(new Group
                    {
                        GroupType = GroupType.Vertical,
                        Body = () =>
                        {
                            if (value)
                            {
                                GUILayout.Space(NORMAL_SPACE);
                                menu.Body.Invoke();
                                GUILayout.Space(NORMAL_SPACE);
                            }
                        }
                    });
                    GUILayout.Space(NORMAL_SPACE);
                }
            });
        }
        public void TopProgressBar(float value)
        {
            Rect position = GUILayoutUtility.GetRect(0, SMALL_SPACE, GUILayout.ExpandWidth(true));
            position.y -= NORMAL_SPACE;
            position.x -= (NORMAL_SPACE + 4);

            GUIStyle pbarBG = GetStyle(CustomStyle.BOX_NO_FRAME);
            GUIStyle pbarBody = GetStyle(CustomStyle.PBAR_BAR);

            int controlId = GUIUtility.GetControlID(nameof(TopProgressBar).GetHashCode(), FocusType.Keyboard);

            if (Event.current.GetTypeForControl(controlId) == EventType.Repaint)
            {
                if (value > 0.0f)
                {
                    Rect barRect = new Rect(position);
                    barRect.width *= value;
                    pbarBody.Draw(barRect, false, false, false, false);
                }
            }
        }
        public T EnumField<T>(GUIContent label, T @enum, bool uppercase = true, string[] itemNames = null)
        {
            if (itemNames == null)
            {
                itemNames = Enum.GetNames(@enum.GetType());
            }

            if (uppercase)
            {
                for (int i = 0; i < itemNames.Length; i++)
                {
                    itemNames[i] = Regex.Replace(itemNames[i], "(\\B[A-Z])", "$1").ToUpper();
                }
            }
            else
            {
                for (int i = 0; i < itemNames.Length; i++)
                {
                    itemNames[i] = itemNames[i].Replace("_", " ");
                }
            }

            int result = 0;

            GUILayout.Space(FIELD_SPACE2);

            DrawGroup(new Group
            {
                GroupType = GroupType.Horizontal,
                Body = () =>
                {
                    if (label != null)
                    {
                        Label(label);
                    }

                    int _result = EditorGUILayout.Popup(System.Convert.ToInt32(@enum), itemNames, GetStyle(CustomStyle.ENUM));
                    result = _result;
                }
            });

            GUILayout.Space(FIELD_SPACE2);

            return (T)(object)result;
        }
        public bool Toggle(GUIContent label, bool toggleValue, GUIContent btnLabel = null, Action buttonClick = null)
        {
            int option = toggleValue ? 1 : 0;

            GUILayout.Space(FIELD_SPACE2);

            DrawGroup(new Group
            {
                GroupType = GroupType.Horizontal,
                Body = () =>
                {
                    Label(label);

                    option = EditorGUILayout.Popup(option, new string[]
                    {
                        "DISABLED",
                        "ENABLED"
                    }, GetStyle(CustomStyle.TOGGLE));

                    if (buttonClick != null)
                    {
                        GUILayout.Space(SMALL_SPACE * 2);

                        if (GUILayout.Button(btnLabel, GetStyle(CustomStyle.SMALL_BUTTON_WITH_TEXT)))
                        {
                            buttonClick.Invoke();
                        }
                    }
                }
            });

            GUILayout.Space(FIELD_SPACE2);

            return option == 1;
        }
        public string TextField(GUIContent label, string currentValue, GUIContent btnLabel = null, Action buttonClick = null)
        {
            GUILayout.Space(FIELD_SPACE2);

            DrawGroup(new Group
            {
                GroupType = GroupType.Horizontal,
                Body = () =>
                {
                    Label(label);
                    currentValue = EditorGUILayout.TextField(currentValue, GetStyle(CustomStyle.TEXT_FIELD));

                    if (buttonClick != null)
                    {
                        GUILayout.Space(NORMAL_SPACE - 5);

                        GUIStyle style;

                        if (btnLabel.image == null)
                        {
                            style = GetStyle(CustomStyle.SMALL_BUTTON_WITH_TEXT);
                        }
                        else
                        {
                            style = GetStyle(CustomStyle.SMALL_BUTTON_WITH_IMG);
                        }

                        if (GUILayout.Button(btnLabel, style))
                        {
                            buttonClick.Invoke();
                        }
                    }
                }
            });

            GUILayout.Space(FIELD_SPACE2);

            return currentValue;
        }
        public void Label(GUIContent label, int customSize = 0, LabelWidthType labelWidthType = LabelWidthType.Default)
        {
            GUIStyle style = GetStyle(CustomStyle.LABEL);

            int oldSize = 12;

            if (customSize != 0)
            {
                style.fontSize = customSize;
            }

            switch (labelWidthType)
            {
                case LabelWidthType.Default:
                    GUILayout.Label(label, style, GUILayout.Width(EditorGUIUtility.labelWidth));
                    break;
                case LabelWidthType.Option:
                    GUILayout.Label(label, style);
                    break;
                case LabelWidthType.Expand:
                    GUILayout.Label(label, style, GUILayout.ExpandWidth(true));
                    break;
            }

            style.fontSize = oldSize;
        }
        public float FloatField(GUIContent label, float currentValue)
        {
            GUILayout.Space(FIELD_SPACE2);

            DrawGroup(new Group
            {
                GroupType = GroupType.Horizontal,
                Body = () =>
                {
                    Label(label);
                    currentValue = EditorGUILayout.FloatField(currentValue, GetStyle(CustomStyle.FLOAT));
                }
            });

            GUILayout.Space(FIELD_SPACE2);

            return currentValue;
        }
        public bool Button(GUIContent label, CustomStyle customStyle = CustomStyle.BOX_FRAME, int customFontSize = 0)
        {
            bool clicked = false;

            DrawGroup(new Group
            {
                GroupType = GroupType.Horizontal,
                Body = () =>
                {
                    GUIStyle style = GetStyle(customStyle);

                    int oldSize = style.fontSize;

                    if (customFontSize != 0)
                    {
                        style.fontSize = customFontSize;
                    }

                    Rect btnRect = GUILayoutUtility.GetRect(label, style, GUILayout.ExpandWidth(true));

                    if (btnRect.width > 300)
                    {
                        btnRect.width /= 2;
                        btnRect.x += btnRect.width / 2;
                    }

                    clicked = GUI.Button(btnRect, label, style);

                    style.fontSize = oldSize;
                }
            });

            return clicked;
        }
        public void SerializedPropertyField<T>(SerializedObject so, Expression<Func<T, object>> pathExpression)
        {
            string[] fields = UnityCodeHelpers.GetFieldsArray(pathExpression);

            DrawGroup(new Group
            {
                GroupType = GroupType.Horizontal,
                Body = () =>
                {
                    GUILayout.Space(NORMAL_SPACE - 1);

                    DrawGroup(new Group
                    {
                        GroupType = GroupType.Vertical,
                        Body = () =>
                        {
                            GUI.backgroundColor = Color.gray;

                            SerializedProperty property = so.FindProperty(fields[0]);

                            if (fields.Length > 1)
                            {
                                for (int i = 1; i < fields.Length; i++)
                                {
                                    SerializedProperty rprop = property.FindPropertyRelative(fields[i]);

                                    if (rprop != null)
                                    {

                                        property = rprop;
                                    }
                                    else
                                    {

                                        break;
                                    }
                                }
                            }

                            so.Update();
                            EditorGUILayout.PropertyField(property, true);
                            so.ApplyModifiedProperties();

                            GUI.backgroundColor = Color.white;
                        }
                    });
                }
            });
        }
        #endregion
        public GUIStyle GetStyle(CustomStyle customStyle)
        {
            GUIStyle style;

            switch (customStyle)
            {
                case CustomStyle.TEXT_FIELD:
                case CustomStyle.TOGGLE:
                case CustomStyle.ENUM:
                case CustomStyle.FLOAT:
                    style = GetCustomStyle(CustomStyle.TEXT_FIELD.ToString());
                    break;
                default:
                    style = GetCustomStyle(customStyle.ToString());
                    break;
            }

            return style;
        }
        private GUIStyle GetCustomStyle(string styleName)
        {
            foreach (GUIStyle style in guiSkin.customStyles)
            {
                if (style.name == styleName)
                {
                    return style;
                }
            }

            Debug.Log("Custom style not found");
            return guiSkin.button;
        }
    }
    public enum CustomStyle
    {
        None,
        BG,
        LABEL,
        BOX_FRAME,
        BOX_FRAME2,
        BOX_NO_FRAME,
        BOX_NO_FRAME1,
        PBAR_BAR,
        TEXT_FIELD,
        TOGGLE,
        ENUM,
        FLOAT,
        SMALL_BUTTON_WITH_IMG,
        HCB_BUTTON,
        SMALL_BUTTON_WITH_TEXT,
        HCB_LABEL
    }
    public enum GroupType
    {
        Horizontal,
        Vertical,
    }
    public struct Group
    {
        public GroupType GroupType { get; set; }
        public Action Body { get; set; }
        public CustomStyle Style { get; set; }
    }

    public enum LabelWidthType
    {
        Default,
        Option,
        Expand
    }
}