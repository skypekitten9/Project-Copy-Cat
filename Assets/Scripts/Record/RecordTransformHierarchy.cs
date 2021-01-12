using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;



public class RecordTransformHierarchy : MonoBehaviour
{
    [SerializeField] private bool isHolo = false;

    private List<RecordData> snapshots;
    private bool recording = false;

    private Transform parent;


    private Transform[] transforms;

    private RecordManager recordManager;


    int tickRate = 30000;


    public void StartRecording()
    {
        recordManager = GameManager.Instance.GetComponent<RecordManager>();

        snapshots = new List<RecordData>();
        transforms = GetComponentsInChildren<Transform>();
        recording = true;

        StartCoroutine(Tick());
    }


    private IEnumerator Tick()
    {
        while (recording == true)
        {
            yield return new WaitForSeconds(1.0f / (tickRate * Time.deltaTime));
            parent = transform.parent;
            transform.parent = null;
            transform.parent = parent;

            /*Take snapshot*/
            Transform[] transforms = GetComponentsInChildren<Transform>();
            snapshots.Add(new RecordData(Array.ConvertAll(transforms, t => t.position), Array.ConvertAll(transforms, t => t.rotation)));
        }
    }

    public void StopRecording()
    {
        recording = false;

        if (GetComponentInChildren<PickUp>())
            GetComponentInChildren<PickUp>().SetToNotHeld();

        StartCoroutine(Rewind());
    }


    private IEnumerator Rewind()
    {
        int i = snapshots.Count;
        while (--i >= 0)
        {
            for (int t = 0; t < transforms.Length; t++)
            {
                transforms[t].position = snapshots[i].Positions[t];
                transforms[t].rotation = snapshots[i].Rotations[t];
            }
            yield return new WaitForSeconds(1.0f / (tickRate * Time.deltaTime * recordManager.RewindSpeed));
        }

        StartCoroutine(Playback());
    }

    private IEnumerator Playback()
    {
        if (isHolo)
            recordManager.StartPlayback();

        int i = -1;
        bool hasHadHoloInteraction = false;

        for (int j = 0; j < snapshots.Count; j++)
        {
            for (int k = 0; k < transforms.Length; k++)
            {
                if (transforms[k].position != snapshots[j].Positions[k])
                {
                    hasHadHoloInteraction = true;
                }
            }
        }

        while (++i < snapshots.Count)
        {
            for (int t = 0; t < transforms.Length; t++)
            {
                if (gameObject.tag == "Pickupable")
                {
                    if (!hasHadHoloInteraction)
                    {
                        yield break;
                    }
                }
                transforms[t].position = snapshots[i].Positions[t];
                transforms[t].rotation = snapshots[i].Rotations[t];
            }

            if (recordManager.recordPhase != RecordPhase.PlayingBack)
                break;

            yield return new WaitForSeconds(1.0f / (tickRate * Time.deltaTime));
        }

        if (isHolo)
            StartCoroutine(recordManager.StopPlayback());

        this.transform.parent = null;   //parent;
    }
}


public class RecordData
{
    public RecordData(Vector3[] positions, Quaternion[] rotations)
    {
        this.Positions = positions;
        this.Rotations = rotations;
    }

    public Vector3[] Positions { get; private set; }
    public Quaternion[] Rotations { get; private set; }
}