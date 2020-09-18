using System;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;

public class RecordPlayback : MonoBehaviour
{
    [SerializeField] private GameObject holo;

    private Stopwatch stopwatch;
    private List<HoloNode> holoNodes;
    private float nodeSpawnRate = 10; //times per second

    private float recordTime = 5000; //ms

    private bool recording = false;
    private bool rewinding = false;
    private int nodeCounter;

    private float rewindSpeed = 0.75f;


    private void Update()
    {
        if (recording)
        {
            if (stopwatch.ElapsedMilliseconds >= recordTime)
            {
                StopRecording();
                nodeCounter = holoNodes.Count - 1;
                StartCoroutine(Rewind());
            }
            else if (stopwatch.ElapsedMilliseconds >= (1 / nodeSpawnRate * 1000) * holoNodes.Count)
            {
                holoNodes.Add(new HoloNode(PlayerManager.Instance.transform.position, PlayerManager.Instance.transform.rotation, stopwatch.ElapsedMilliseconds, Action.None));
            }
        }


        /*STUB*/
        if (Input.GetKeyDown(KeyCode.Q))
        {
            if (!recording && !rewinding)
                StartRecording();
        }

    }

    public void StartRecording()
    {
        UnityEngine.Debug.Log("Start record");

        stopwatch = new Stopwatch();
        holoNodes = new List<HoloNode>();
        recording = true;
        stopwatch.Start();
    }

    public void StopRecording()
    {
        UnityEngine.Debug.Log("End record");
        recording = false;
        if (stopwatch != null)
        {
            stopwatch.Stop();
            stopwatch = null;
        }
    }


    System.Collections.IEnumerator Rewind()
    {
        rewinding = true;
        float tolerance = rewindSpeed;

        PlayerManager.Instance.GetComponent<CharacterController>().enabled = false;
        PlayerManager.Instance.GetComponentInChildren<PlayerCamera>().enabled = false;

        while (nodeCounter > 0)
        {
            while (Vector3.Distance(PlayerManager.Instance.transform.position, holoNodes[nodeCounter - 1].Position) >= tolerance)
            {
                Vector3 direction = Vector3.Normalize(holoNodes[nodeCounter - 1].Position - PlayerManager.Instance.transform.position);
                float t = -(Vector3.Distance(PlayerManager.Instance.transform.position, holoNodes[0].Position) / Vector3.Distance(holoNodes[holoNodes.Count - 1].Position, holoNodes[0].Position)) + 1;

                PlayerManager.Instance.transform.position = PlayerManager.Instance.transform.position + direction * rewindSpeed;
                PlayerManager.Instance.transform.rotation = Quaternion.Lerp(holoNodes[holoNodes.Count - 1].Rotation, holoNodes[0].Rotation, t);
                yield return new WaitForSeconds(Time.deltaTime);
            }
            nodeCounter--;
        }

        PlayerManager.Instance.GetComponent<CharacterController>().enabled = true;
        PlayerManager.Instance.GetComponentInChildren<PlayerCamera>().enabled = true;

        rewinding = false;
        yield break;
    }

    //System.Collections.IEnumerator Playback()
    //{
    //    Instantiate(holo);
    //}

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
                    Gizmos.DrawLine(holoNodes[i].Position, holoNodes[i].Position + holoNodes[i].Rotation * Vector3.forward);
            }
        }
    }
}
