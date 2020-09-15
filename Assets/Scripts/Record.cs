using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;

public class Record : MonoBehaviour
{
    private Stopwatch stopwatch;
    private List<HoloNode> holoNodes;
    private float nodeSpawnRate = 2; //times per second

    public void StartRecording()
    {
        UnityEngine.Debug.Log("Start record");

        stopwatch = new Stopwatch();
        holoNodes = new List<HoloNode>();
        stopwatch.Start();
    }


    private void Update()
    {
        if (stopwatch != null)
        {
            if (stopwatch.ElapsedMilliseconds >= (1 / nodeSpawnRate * 1000) * holoNodes.Count)
            {
                holoNodes.Add(new HoloNode(Vector3.zero, stopwatch.ElapsedMilliseconds, Action.None));
            }
        }



        /*STUB*/
        if (Input.GetKeyDown(KeyCode.Q))
        {
            StartRecording();
        }
        if (Input.GetKeyDown(KeyCode.E))
        {
            EndRecording();
        }

    }

    public void EndRecording()
    {
        UnityEngine.Debug.Log("End record");
        if (stopwatch != null)
        {
            stopwatch.Stop();
            stopwatch = null;
        }
    }


    /// <summary>
    /// Debug to visualize holo nodes
    /// </summary>
    private void OnDrawGizmos()
    {
        if (holoNodes != null)
        {
            foreach (var node in holoNodes)
            {
                Gizmos.color = Color.red;
                Gizmos.DrawWireSphere(node.Position, 0.5f);
            }
        }
    }
}
