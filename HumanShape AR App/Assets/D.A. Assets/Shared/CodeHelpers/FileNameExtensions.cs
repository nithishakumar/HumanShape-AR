using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;
using UnityEngine;

namespace DA_Assets.Shared.CodeHelpers
{
    public static class FileNameExtensions
    {
        public static bool IsPathInsideAssetsPath(this string path)
        {
            if (path.IndexOf(Application.dataPath, System.StringComparison.InvariantCultureIgnoreCase) == -1)
            {
                return false;
            }

            return true;
        }
        /// <summary>
        /// http://answers.unity.com/answers/787336/view.html
        /// </summary>
        public static string ToRelativePath(this string absolutePath)
        {
            if (absolutePath.StartsWith(Application.dataPath))
            {
                return "Assets" + absolutePath.Substring(Application.dataPath.Length);
            }

            return absolutePath;
        }
        private static char[] invalidFileNameChars = new char[] { '“', '”', '"', '^', '<', '>', ';', '|', '/', ',', '\\', ':', '=', '?', '\"', '*', '\'' };
        public static string GetInvalidFileNameChars(this string filename)
        {
            List<char> invalidChars = new List<char>();

            foreach (char c in filename)
            {
                if (invalidFileNameChars.Contains(c))
                {
                    invalidChars.Add(c);
                }
            }

            string result = "";

            if (invalidChars.Count() > 0)
            {
                result = string.Join(" ", invalidChars);
            }

            return result;
        }
        public static string ReplaceInvalidFileNameChars(this string fileName, char newChar = '_')
        {
            string newName = "";

            for (int i = 0; i < fileName.Length; i++)
            {
                if (invalidFileNameChars.Contains(fileName[i]))
                {
                    newName += newChar;
                }
                else
                {
                    newName += fileName[i];
                }
            }

            newName = Regex.Replace(newName, @"\t|\n|\r", newChar.ToString());
            return newName.TrimEnd();
        }
    }
}