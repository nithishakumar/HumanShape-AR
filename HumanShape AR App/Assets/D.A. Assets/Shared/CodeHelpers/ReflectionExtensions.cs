using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using UnityEditor;
using UnityEngine;

namespace DA_Assets.Shared.CodeHelpers
{
    /// <summary>
    /// https://stackoverflow.com/a/1565766
    /// </summary>
    public static class ReflectionExtensions
    {
        public static void FindAndInvoke(this Type type, string name, params object[] parameters)
        {
            MethodInfo[] minfos = type.GetMethods(
                BindingFlags.Static | BindingFlags.NonPublic
            );

            MethodInfo find = null;

            foreach (MethodInfo minfo in minfos)
            {
                if (minfo.Name != name)
                    continue;

                Type[] ftypes = minfo.GetParameters().Select(x => x.ParameterType).ToArray();
                Type[] ptypes = parameters.Select(x => x.GetType()).ToArray();

                if (ftypes.ContainsAll(ptypes))
                {
                    find = minfo;
                    break;
                }
            }

            find?.Invoke(null, parameters);
        }
        public static void Invoke(this Type type, string name, params object[] parameters)
        {
            type.GetMethod(
                name,
                BindingFlags.Static | BindingFlags.NonPublic
            ).Invoke(null, parameters);
        }
        public static void Invoke<T>(this object obj, string name, params object[] parameters)
        {
            typeof(T).GetMethod(
                name,
                BindingFlags.NonPublic | BindingFlags.Instance
            ).Invoke(obj, parameters);
        }
        public static T2 InvokeAndReturn<T1, T2>(this T1 obj, string name, params object[] parameters)
        {
            return (T2)typeof(T1).GetMethod(
                 name,
                 BindingFlags.NonPublic | BindingFlags.Instance
             ).Invoke(obj, parameters);
        }
        public static void Invoke<T>(this T obj, string methodName, params object[] parameters)
        {
            typeof(T).InvokeMember(methodName, BindingFlags.Instance | BindingFlags.NonPublic | BindingFlags.InvokeMethod, null, obj, parameters);
        }
        /// <summary>
        /// Returns a _private_ Property Value from a given Object. Uses Reflection.
        /// Throws a ArgumentOutOfRangeException if the Property is not found.
        /// </summary>
        /// <typeparam name="T">Type of the Property</typeparam>
        /// <param name="obj">Object from where the Property Value is returned</param>
        /// <param name="propName">Propertyname as string.</param>
        /// <returns>PropertyValue</returns>
        public static T GetPrivatePropertyValue<T>(this object obj, string propName)
        {
            if (obj == null) throw new ArgumentNullException("obj");
            PropertyInfo pi = obj.GetType().GetProperty(propName, BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance);
            if (pi == null) throw new ArgumentOutOfRangeException("propName", string.Format("Property {0} was not found in Type {1}", propName, obj.GetType().FullName));
            return (T)pi.GetValue(obj, null);
        }

        /// <summary>
        /// Returns a private Property Value from a given Object. Uses Reflection.
        /// Throws a ArgumentOutOfRangeException if the Property is not found.
        /// </summary>
        /// <typeparam name="T">Type of the Property</typeparam>
        /// <param name="obj">Object from where the Property Value is returned</param>
        /// <param name="propName">Propertyname as string.</param>
        /// <returns>PropertyValue</returns>
        public static T GetFieldValue<T>(this object obj, string propName)
        {
            if (obj == null)
                throw new ArgumentNullException("obj");

            Type t = obj.GetType();
            FieldInfo fi = t.GetField(propName, BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance);

            if (fi == null)
                throw new ArgumentOutOfRangeException(propName, string.Format("Field {0} was not found in Type {1}", propName, obj.GetType().FullName));

            return (T)fi.GetValue(obj);
        }

        /// <summary>
        /// Sets a _private_ Property Value from a given Object. Uses Reflection.
        /// Throws a ArgumentOutOfRangeException if the Property is not found.
        /// </summary>
        /// <typeparam name="T">Type of the Property</typeparam>
        /// <param name="obj">Object from where the Property Value is set</param>
        /// <param name="propName">Propertyname as string.</param>
        /// <param name="val">Value to set.</param>
        /// <returns>PropertyValue</returns>
        public static void SetPrivatePropertyValue<T>(this object obj, string propName, T val)
        {
            Type t = obj.GetType();
            if (t.GetProperty(propName, BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance) == null)
                throw new ArgumentOutOfRangeException("propName", string.Format("Property {0} was not found in Type {1}", propName, obj.GetType().FullName));
            t.InvokeMember(propName, BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.SetProperty | BindingFlags.Instance, null, obj, new object[] { val });
        }

        /// <summary>
        /// Set a private Property Value on a given Object. Uses Reflection.
        /// </summary>
        /// <typeparam name="T">Type of the Property</typeparam>
        /// <param name="obj">Object from where the Property Value is returned</param>
        /// <param name="propName">Propertyname as string.</param>
        /// <param name="val">the value to set</param>
        /// <exception cref="ArgumentOutOfRangeException">if the Property is not found</exception>
        public static void SetFieldValue<T>(this object obj, string propName, T val)
        {
            if (obj == null) throw new ArgumentNullException("obj");
            Type t = obj.GetType();
            FieldInfo fi = t.GetField(propName, BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance);
            if (fi == null) throw new ArgumentOutOfRangeException("propName", string.Format("Field {0} was not found in Type {1}", propName, obj.GetType().FullName));
            fi.SetValue(obj, val);
        }
    }
    /// <summary>
    /// https://gitlab.com/-/snippets/2077829
    /// </summary>
    public class ProxyList<T1, T2>
    {
        List<T1> list;
        FieldInfo fieldInfo;
        T2 source;

        public T1 this[int index]
        {
            get
            {
                RefreshValue();
                return list[index];
            }
            set
            {
                RefreshValue();
                list[index] = value;
                UpdateValue();
            }
        }

        public int Count
        {
            get
            {
                RefreshValue();
                return list.Count;
            }
        }

        void RefreshValue()
        {
            list = (List<T1>)fieldInfo.GetValue(source);
        }

        public void UpdateValue()
        {
            fieldInfo.SetValue(source, list);
        }

        public ProxyList(string name, T2 window)
        {
            this.source = window;
            fieldInfo = typeof(T2).GetField(
                name,
                BindingFlags.NonPublic | BindingFlags.Instance
            );
            RefreshValue();
        }

        public void Add(T1 value)
        {
            RefreshValue();
            list.Add(value);
            UpdateValue();
        }

        public void Clear()
        {
            list.Clear();
            UpdateValue();
        }

        public List<T1> GetList()
        {
            RefreshValue();
            return list;
        }
    }
    /// <summary>
    /// https://gitlab.com/-/snippets/2077829
    /// </summary>
    public class ProxyDictionary<K, V, T>
    {
        Dictionary<K, V> dict;
        T source;
        FieldInfo fieldInfo;

        public V this[K key]
        {
            get
            {
                RefreshValue();
                return dict[key];
            }
            set
            {
                RefreshValue();
                dict[key] = value;
                UpdateValue();
            }
        }

        public ProxyDictionary(string name, T window)
        {
            this.source = window;
            fieldInfo = typeof(T).GetField(
                name,
                BindingFlags.NonPublic | BindingFlags.Instance
            );
            RefreshValue();
        }

        void RefreshValue()
        {
            dict = (Dictionary<K, V>)fieldInfo.GetValue(source);
        }

        public void UpdateValue()
        {
            fieldInfo.SetValue(source, dict);
        }

        public void Clear()
        {
            dict.Clear();
            UpdateValue();
        }

        public bool ContainsKey(K key)
        {
            RefreshValue();
            return dict.ContainsKey(key);
        }

        public void Add(K key, V value)
        {
            RefreshValue();
            dict[key] = value;
            UpdateValue();
        }
    }
}