using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;



public class RecordTransformHierarchy : MonoBehaviour
{
    [SerializeField] private bool isHolo = false;

    private List<RecordData> snapshots;
    private bool recording = false;

    private Transform parent;


    private Transform[] transforms;

    private RecordManager recordManager;

    int counter = 0;


    public void StartRecording()
    {
        recordManager = GameManager.Instance.GetComponent<RecordManager>();

        snapshots = new List<RecordData>();
        transforms = GetComponentsInChildren<Transform>();
        recording = true;

    }

    private void FixedUpdate()
    {
        if (recording == true)
        {
            parent = transform.parent;
            transform.parent = null;
            transform.parent = parent;
            counter = ++counter % 2;

            /*Take snapshot*/
            if (counter == 0)
            {
                Transform[] transforms = GetComponentsInChildren<Transform>();
                snapshots.Add(new RecordData(Array.ConvertAll(transforms, t => t.position), Array.ConvertAll(transforms, t => t.rotation)));
            }
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
            yield return new WaitForSeconds(recordManager.RewindDelay / Time.deltaTime);
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

            yield return new WaitForFixedUpdate();
            yield return new WaitForFixedUpdate();
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