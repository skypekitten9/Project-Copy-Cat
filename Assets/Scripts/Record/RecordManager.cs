using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;
using UnityEngine.SceneManagement;

public enum RecordPhase { None, Recording, Rewinding, PlayingBack }
public enum ControlStates { Player, Holo }

public class RecordManager : MonoBehaviour
{
    public int RecordTime { get; } = 5000;    //ms
    public float RewindSpeed { get; } = 3.0f;  //multiplier (x times faster than normal speed)


    public RecordPhase recordPhase { get; set; } = RecordPhase.None;


    [SerializeField] private GameObject holoPrefab;
    public GameObject HoloInstance { get; private set; }
    private GameObject playerInstance;

    private RecordTransformHierarchy holoRecorder;
    private RecordTransformHierarchy[] objectRecorders;

    private Stopwatch stopwatch;

    private List<InteractionData> interactionData;
    private List<PickupData> pickupData;
    private SyncBar syncBar;


    private void Start()
    {
        playerInstance = PlayerManager.Instance.gameObject;

        syncBar = GameManager.Instance.GetComponentInChildren<SyncBar>();

        objectRecorders = UnityEngine.Object.FindObjectsOfType<RecordTransformHierarchy>();

        stopwatch = new Stopwatch();

        SceneManager.sceneLoaded += OnSceneLoaded;
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

    public void AddPickupNode(params GameObject[] gObj)
    {
        pickupData.Add(new PickupData(stopwatch.ElapsedMilliseconds, gObj));
    }


    private IEnumerator StartRecording()
    {
        interactionData = new List<InteractionData>();
        pickupData = new List<PickupData>();

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

        recordPhase = RecordPhase.Rewinding;

        holoRecorder.StopRecording();
        Array.ForEach(objectRecorders, element => element.StopRecording());
    }

    public void StartPlayback()
    {
        syncBar.Replay();

        recordPhase = RecordPhase.PlayingBack;
        ChangeControlState(ControlStates.Player);

        StartCoroutine(CallInteractions());
        StartCoroutine(CallPickups());
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

    private IEnumerator CallPickups()
    {
        stopwatch.Restart();

        for (int i = 0; i < pickupData.Count; i++)
        {
            yield return new WaitForSeconds((float)(pickupData[i].Time - stopwatch.ElapsedMilliseconds) / 1000);
            for (int j = 0; j < pickupData[i].PickupObject.Length; j++)
            {
                pickupData[i].PickupObject[j].GetComponent<PickUp>().tempParent = HoloInstance.GetComponent<Transform>().Find("Main Camera").Find("PickupPosition").gameObject;
            }
        }

        stopwatch.Stop();
    }

    public IEnumerator StopPlayback()
    {
        syncBar.Reset();

        float fadeValue = 1;
        while (fadeValue > 0)
        {
            fadeValue -= Time.deltaTime;
            HoloInstance.GetComponent<SkinnedMeshRenderer>().material.SetFloat("Vector1_DCDBC5A6", fadeValue);
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
                playerInstance.transform.GetChild(0).GetComponent<Camera>().enabled = true;
                playerInstance.transform.GetChild(0).GetComponent<AudioListener>().enabled = true;
                playerInstance.transform.GetChild(0).GetComponent<PlayerCamera>().enabled = true;
                playerInstance.transform.GetChild(0).GetChild(0).gameObject.SetActive(true);     //Enables the player's canvas

                if (HoloInstance)
                {
                    HoloInstance.GetComponent<PlayerMovement>().enabled = false;
                    HoloInstance.transform.GetChild(0).GetComponent<Camera>().enabled = false;
                    HoloInstance.transform.GetChild(0).GetComponent<AudioListener>().enabled = false;
                    HoloInstance.transform.GetChild(0).GetChild(0).gameObject.SetActive(false);     //Disables the hologram's canvas
                }
                break;

            case ControlStates.Holo:

                playerInstance.GetComponent<PlayerMovement>().enabled = false;
                playerInstance.transform.GetChild(0).GetComponent<Camera>().enabled = false;
                playerInstance.transform.GetChild(0).GetComponent<AudioListener>().enabled = false;
                playerInstance.transform.GetChild(0).GetComponent<PlayerCamera>().enabled = false;
                playerInstance.transform.GetChild(0).GetChild(0).gameObject.SetActive(false);     //Disables the player's canvas

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
