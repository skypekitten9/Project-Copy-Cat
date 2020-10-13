using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;


public enum RecordPhase { None, Recording, PlayingBack }
public enum ControlStates { Player, Holo }

public class RecordManager : MonoBehaviour
{
    public int RecordTime { get; } = 5000;    //ms
    public float NodeSpawnRate { get; } = 7.0f;    //s^-1
    public float RewindSpeed { get; } = 0.75f;

    public RecordPhase recordPhase { get; set; } = RecordPhase.None;


    [SerializeField] private GameObject holoPrefab;
    public GameObject HoloInstance { get; private set; }
    private GameObject playerInstance;

    private RecordTransformHierarchy holoRecorder;
    private RecordTransformHierarchy[] objectRecorders;

    private Stopwatch stopwatch;
    private List<InteractionData> interactionData = new List<InteractionData>();


    private void Start()
    {
        playerInstance = PlayerManager.Instance.gameObject;

        objectRecorders = UnityEngine.Object.FindObjectsOfType<RecordTransformHierarchy>();

        stopwatch = new Stopwatch();

        ChangeControlState(ControlStates.Player);
    }


    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Q))
        {
            switch (recordPhase)
            {
                case RecordPhase.None:
                    StartCoroutine(StartRecording());
                    break;

                case RecordPhase.Recording:
                    StopRecording();
                    break;
            }
        }
    }

    public void AddInteractionNode(params int[] id)
    {
        interactionData.Add(new InteractionData(stopwatch.ElapsedMilliseconds, id));
    }


    private IEnumerator StartRecording()
    {
        recordPhase = RecordPhase.Recording;

        stopwatch.Restart();
        ChangeControlState(ControlStates.Holo);

        holoRecorder = HoloInstance.GetComponent<RecordTransformHierarchy>();

        holoRecorder.StartRecording();
        Array.ForEach(objectRecorders, element => element.StartRecording());

        while (stopwatch.ElapsedMilliseconds < RecordTime)
            yield return new WaitForFixedUpdate();

        if (recordPhase == RecordPhase.Recording)
            StopRecording();
    }

    private void StopRecording()
    {
        stopwatch.Stop();

        holoRecorder.StopRecording();
        Array.ForEach(objectRecorders, element => element.StopRecording());
    }

    public void StartPlayback()
    {
        recordPhase = RecordPhase.PlayingBack;
        ChangeControlState(ControlStates.Player);
    }

    public IEnumerator EndPlayback()
    {
        float fadeValue = 1;
        while (fadeValue > 0)
        {
            fadeValue -= Time.deltaTime;
            HoloInstance.GetComponent<MeshRenderer>().material.SetFloat("Vector1_DCDBC5A6", fadeValue);
            yield return new WaitForFixedUpdate();
        }

        recordPhase = RecordPhase.None;
        Destroy(HoloInstance);
    }


    private void ChangeControlState(ControlStates controlState)
    {
        switch (controlState)
        {
            case ControlStates.Player:
                playerInstance.GetComponent<PlayerMovement>().enabled = true;
                playerInstance.transform.GetChild(0).gameObject.SetActive(true);    //Enables all the player's camera objects

                if (HoloInstance)
                {
                    HoloInstance.GetComponent<PlayerMovement>().enabled = false;
                    HoloInstance.transform.GetChild(0).gameObject.SetActive(false);     //Disables all the hologram's camera objects
                }
                break;

            case ControlStates.Holo:

                playerInstance.GetComponent<PlayerMovement>().enabled = false;
                playerInstance.transform.GetChild(0).gameObject.SetActive(false);    //Disables all the player's camera objects

                SpawnHolo();
                break;
        }
    }

    private void SpawnHolo()
    {
        HoloInstance = Instantiate(holoPrefab);
        HoloInstance.transform.position = playerInstance.transform.position;
        HoloInstance.transform.rotation = playerInstance.transform.rotation;
        HoloInstance.transform.GetChild(0).GetComponent<PlayerCamera>().MouseY = PlayerManager.Instance.transform.GetChild(0).GetComponent<PlayerCamera>().MouseY;
        HoloInstance.transform.GetChild(0).localRotation = PlayerManager.Instance.transform.GetChild(0).localRotation;
    }
}
