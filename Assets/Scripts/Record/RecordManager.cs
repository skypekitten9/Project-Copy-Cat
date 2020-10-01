using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public enum RecordPhase { None, Recording, Rewinding, PlayingBack }

public class RecordManager : MonoBehaviour
{
    public int RecordTime { get; } = 5000;    //ms
    public float NodeSpawnRate { get; } = 7.0f;    //s^-1
    public float RewindSpeed { get; } = 0.75f;

    public RecordPhase recordPhase { get; set; } = RecordPhase.None;


    private ObjectRecRewPlay[] recordableObjects;


    private void Start()
    {
        recordableObjects = Object.FindObjectsOfType<ObjectRecRewPlay>();
    }


    private void Update()
    {
        /*Stub - let InputManager call this*/
        if (Input.GetKeyDown(KeyCode.Q))
        {
            if (recordPhase == RecordPhase.None)
            {
                StartCoroutine(GetComponent<RecordPlayback>().SpawnHolo());
                foreach (var recObj in Object.FindObjectsOfType<ObjectRecRewPlay>())
                    StartCoroutine(recObj.Record());

            }
        }
    }
}
