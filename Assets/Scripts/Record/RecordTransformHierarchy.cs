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



    public void StartRecording()
    {
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
            yield return new WaitForSeconds(Time.fixedDeltaTime / GameManager.Instance.GetComponent<RecordManager>().RewindSpeed);
        }

        StartCoroutine(Playback());
    }

    private IEnumerator Playback()
    {
        if (isHolo)
            GameManager.Instance.GetComponent<RecordManager>().StartPlayback();

        int i = -1;
        while (++i < snapshots.Count)
        {
            for (int t = 0; t < transforms.Length; t++)
            {
                transforms[t].position = snapshots[i].Positions[t];
                transforms[t].rotation = snapshots[i].Rotations[t];
            }
            yield return new WaitForFixedUpdate();
        }


        if (isHolo)
            StartCoroutine(GameManager.Instance.GetComponent<RecordManager>().StopPlayback());

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