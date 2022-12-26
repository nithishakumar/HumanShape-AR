using DA_Assets.Shared.CodeHelpers;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace DA_Assets.Shared
{
    public class SlowCycles
    {
        public static IEnumerator ForEach<T>(IList<T> source, Action<T> body, float iterationTimeout = 0, int beforeWaitItersCount = 0)
        {
            if (source.IsEmpty())
            {
                yield break;
            }

            for (int i = 0; i < source.Count; i++)
            {
                if (iterationTimeout != 0 && 
                    beforeWaitItersCount != 0 && 
                    i % beforeWaitItersCount == 0)
                {
                    yield return new WaitForSecondsRealtime(iterationTimeout);
                }

                body.Invoke(source[i]);
            }
        }
    }
}