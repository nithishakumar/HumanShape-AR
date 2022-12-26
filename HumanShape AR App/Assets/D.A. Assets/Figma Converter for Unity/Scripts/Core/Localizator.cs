using DA_Assets.FCU.Config;
using DA_Assets.FCU.Model;
using DA_Assets.Shared;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using System.Text.RegularExpressions;
using UnityEngine;
using Console = DA_Assets.Shared.Console;

namespace DA_Assets.FCU.Core
{
    public class Localizator : StaticSingleton<Localizator>
    {
        private List<LocItem> localizations;

        private List<string[]> ParseCSV()
        {
            List<string[]> csv = new List<string[]>();

            string splitChar;

            #if UNITY_EDITOR_OSX
                splitChar = "\r";
            #elif UNITY_EDITOR_LINUX
                splitChar = "\n";
            #else
                splitChar = Environment.NewLine;
            #endif

            foreach (string line in Regex.Split(FCU_Config.Instance.Localizations.text, $";{splitChar}"))
            {
                string[] values = line.Split(';');
                values = values.Select(x => x.Trim('\"')).ToArray();
                csv.Add(values);
            }

            return csv.ToList();
        }

        public Localizator()
        {
            localizations = new List<LocItem>();

            List<string[]> csv = ParseCSV();

            for (int i = 1; i < csv.Count() - 1; i++)
            {
                LocItem item = new LocItem();

                for (int j = 0; j < csv[i].Length; j++)
                {
                    string columnName = csv[0][j];

                    PropertyInfo propertyInfo = item.GetType().GetProperty(columnName);

                    if (propertyInfo == null)
                    {
                        continue;
                    }

                    if (propertyInfo.PropertyType == typeof(LocKey))
                    {
                        bool parsed = Enum.TryParse(csv[i][j], out LocKey lc);

                        if (parsed)
                        {
                            propertyInfo.SetValue(item, lc);
                        }
                        else
                        {
                            Console.LogError($"Wrong localization line at [{i},{j}]: {csv[i][j]}");
                            break;
                        }
                    }
                    else
                    {
                        propertyInfo.SetValue(item, csv[i][j]);
                    }
                }

                localizations.Add(item);
            }
        }

        public List<LocItem> Localizations { get => localizations; set => localizations = value; }
    }
    public static class LocExtensions
    {
        public static string Localize(this LocKey key, params object[] args)
        {
            foreach (LocItem item in Localizator.Instance.Localizations)
            {
                if (item.key == key)
                {
                    string txt = "";


                    switch (FCU_Config.Instance.Language)
                    {
                        case AssetLanguage.en:
                            txt = item.en;
                            break;
                            /*case AssetLanguage.ua:
                                txt = item.ua;
                                break;
                            case AssetLanguage.cn:
                                txt = item.cn;
                                break;
                            case AssetLanguage.ja:
                                txt = item.ja;
                                break;
                            case AssetLanguage.ko:
                                txt = item.ko;
                                break;*/
                    }

                    try
                    {
                        return string.Format(txt, args);
                    }
                    catch
                    {
                        return txt;
                    }
                }
            }

            return "[missing localization]";
        }
    }

    public class LocItem
    {
        public LocKey key { get; set; }
        public string en { get; set; }
        public string ua { get; set; }
        public string cn { get; set; }
        public string ja { get; set; }
        public string ko { get; set; }
    }
    public enum AssetLanguage
    {
        en,
        /*ua,
        cn,
        ja,
        ko,*/
    }
}
