using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;
using UnityEngine.SceneManagement;

public enum RecordPhase { None, Recording, PlayingBack }
public enum ControlStates { Player, Holo }

public class RecordManager : MonoBehaviour
{
    public int RecordTime { get; } = 5000;    //ms
    public float RewindSpeed { get; } = 3.0f;  //multiplier (x times faster than normal speed)
    public float AfterImageFadeTime { get; } = 3000;    //ms

    public RecordPhase recordPhase { get; set; } = RecordPhase.None;


    [SerializeField] private GameObject holoPrefab;
    public GameObject HoloInstance { get; private set; }
    private GameObject playerInstance;

    private RecordTransformHierarchy holoRecorder;
    private RecordTransformHierarchy[] objectRecorders;

    private Stopwatch stopwatch;

    private List<InteractionData> interactionData;
    private SyncBar syncBar;

    private void OnEnable()
    {
        SceneManager.sceneLoaded += OnSceneLoaded;
    }


    private void Start()
    {
        playerInstance = PlayerManager.Instance.gameObject;
        syncBar = GameManager.Instance.GetComponentInChildren<SyncBar>();

        objectRecorders = UnityEngine.Object.FindObjectsOfType<RecordTransformHierarchy>();

        stopwatch = new Stopwatch();

        ChangeControlState(ControlStates.Player);
    }

    private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        ChangeControlState(ControlStates.Player);
        recordPhase = RecordPhase.None;
        syncBar.Reset();
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
        interactionData = new List<InteractionData>();

        recordPhase = RecordPhase.Recording;

        syncBar.StartBar();

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
        stopwatch.Stop();   //SyncBar logic stop

        syncBar.StopBar();

        holoRecorder.StopRecording();
        Array.ForEach(objectRecorders, element => element.StopRecording());
    }

    public void StartPlayback()
    {
        syncBar.Replay();

        recordPhase = RecordPhase.PlayingBack;
        ChangeControlState(ControlStates.Player);

        StartCoroutine(CallInteractions());
    }

    private IEnumerator CallInteractions()
    {
        stopwatch.Restart();

        for (int i = 0; i < interactionData.Count; i++)
        {
            yield return new WaitForSeconds((float)(interactionData[i].Time - stopwatch.ElapsedMilliseconds) / 1000);
            for (int j = 0; j < interactionData[i].InteractionChannels.Length; j++)
            {
                TestLevelManager.Instance.interactablesArray[interactionData[i].InteractionChannels[j]] =
                    !TestLevelManager.Instance.interactablesArray[interactionData[i].InteractionChannels[j]];
            }

            TestLevelManager.Instance.NotifyDoors();
            //UnityEngine.Debug.Log($"Interact_{i}");
        }

        stopwatch.Stop();
    }

    public IEnumerator EndPlayback()
    {
        syncBar.Reset();

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
