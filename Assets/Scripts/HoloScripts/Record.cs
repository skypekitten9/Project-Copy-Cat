using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;

public class Record : MonoBehaviour
{
    private Stopwatch stopwatch;
    private List<HoloNode> holoNodes;
    private float nodeSpawnRate = 7; //times per second

    private bool recording = false;


    public void ToggleRecording()
    {
        if (!recording)
            StartRecording();
        else
            StopRecording();

        recording = !recording;
    }


    private void Update()
    {
        if (stopwatch != null)
        {
            if (stopwatch.ElapsedMilliseconds >= (1 / nodeSpawnRate * 1000) * holoNodes.Count)
            {
                holoNodes.Add(new HoloNode(PlayerManager.Instance.transform.position, stopwatch.ElapsedMilliseconds, Action.None));
            }
        }



        /*STUB*/
        if (Input.GetKeyDown(KeyCode.Q))
        {
            ToggleRecording();
        }

    }

    public void StartRecording()
    {
        UnityEngine.Debug.Log("Start record");

        stopwatch = new Stopwatch();
        holoNodes = new List<HoloNode>();
        stopwatch.Start();
    }

    public void StopRecording()
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
            for (int i = 0; i < holoNodes.Count; i++)
            {
                Gizmos.color = Color.red;
                Gizmos.DrawSphere(holoNodes[i].Position, 0.25f);

                if (i < holoNodes.Count - 1)
                    Gizmos.DrawLine(holoNodes[i].Position, holoNodes[i + 1].Position);
            }
        }
    }
}
