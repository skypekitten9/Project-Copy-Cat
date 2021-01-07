using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;
using UnityEngine.SceneManagement;

public enum RecordPhase { None, Recording, Rewinding, PlayingBack, StoppingPlayback }
public enum ControlStates { Player, Holo, Dead }

public class RecordManager : MonoBehaviour
{
    public int RecordTime { get; } = 6000;    //ms
    public float RewindSpeed { get; } = 200.0f;  //multiplier


    public RecordPhase recordPhase { get; set; } = RecordPhase.None;


    [SerializeField] private GameObject holoPrefab;
    public GameObject HoloInstance { get; private set; }
    private GameObject playerInstance;

    private RecordTransformHierarchy holoRecorder;
    private RecordTransformHierarchy[] objectRecorders;

    private bool alive = true;

    private Stopwatch stopwatch;

    private List<InteractionData> interactionData;
    private List<PickupData> pickupData;
    private SyncBar syncBar;


    private void Start()
    {
        try
        {
            playerInstance = PlayerManager.Instance.gameObject;

            syncBar = GameManager.Instance.GetComponentInChildren<SyncBar>();

            objectRecorders = UnityEngine.Object.FindObjectsOfType<RecordTransformHierarchy>();

            stopwatch = new Stopwatch();

            SceneManager.sceneLoaded += OnSceneLoaded;
        }
        catch (Exception)
        {
        }
    }

    private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        ChangeControlState(ControlStates.Player);
        recordPhase = RecordPhase.None;

        syncBar.Reset();
    }

    private void Update()
    {
        if (Follower.Following)
            return;

        if (alive && !GameObject.Find("Player(Clone)").GetComponent<PlayerInteraction>().isLookingThroughNewCamera)
        {
            if (Input.GetKeyDown(KeyCode.Q))
            {
                switch (recordPhase)
                {
                    case RecordPhase.None:
                        if (GameObject.Find("Player(Clone)").GetComponent<PlayerInteraction>().isHolding)
                        {
                            GameObject.Find("Player(Clone)").GetComponent<PlayerInteraction>().hit.collider.gameObject.GetComponent<PickUp>().SetToNotHeld();
                            GameObject.Find("Player(Clone)").GetComponent<PlayerInteraction>().isHolding = false;
                        }

                        StartCoroutine(StartRecording());
                        break;

                    case RecordPhase.Recording:
                        StopRecording();
                        break;

                    case RecordPhase.PlayingBack:
                        StartCoroutine(StopPlayback());
                        break;
                }
            }
        }
    }

    public void AddInteractionNode(params GameObject[] id)
    {
        interactionData.Add(new InteractionData(stopwatch.ElapsedMilliseconds, id));
    }

    //public void AddPickupNode(params GameObject[] gObj)
    //{
    //    pickupData.Add(new PickupData(stopwatch.ElapsedMilliseconds, gObj));
    //}


    private IEnumerator StartRecording()
    {
        interactionData = new List<InteractionData>();
        //pickupData = new List<PickupData>();

        recordPhase = RecordPhase.Recording;

        syncBar.StartBar();
        GameObject.Find("LevelManager").GetComponent<TestLevelManager>().SaveDoorStates();
        GameObject.Find("LevelManager").GetComponent<TestLevelManager>().SaveLeverStates();

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
        SFXManager.Instance.PlaySound(HoloInstance.GetComponentInChildren<Camera>().GetComponent<AudioSource>(), SFXManager.Sound.rewindSound, 1f);
        holoRecorder.StopRecording();
        Array.ForEach(objectRecorders, element => element.StopRecording());
    }
    
    public void StartPlayback()
    {
        syncBar.Replay();
        GameObject.Find("LevelManager").GetComponent<TestLevelManager>().RewindDoors();
        GameObject.Find("LevelManager").GetComponent<TestLevelManager>().RewindLevers();

        recordPhase = RecordPhase.PlayingBack;
        ChangeControlState(ControlStates.Player);

        StartCoroutine(CallInteractions());
        //StartCoroutine(CallPickups());
    }

    private IEnumerator CallInteractions()
    {
        stopwatch.Restart();

        for (int i = 0; i < interactionData.Count; i++)
        {
            yield return new WaitForSeconds((float)(interactionData[i].Time - stopwatch.ElapsedMilliseconds) / 1000);
            for (int j = 0; j < interactionData[i].InteractionObjects.Length; j++)
            {
                if (interactionData[i].InteractionObjects[j].GetComponent<ButtonScript>() != null) interactionData[i].InteractionObjects[j].GetComponent<ButtonScript>().SignalChannel();
                if (interactionData[i].InteractionObjects[j].GetComponent<LeverScript>() != null) interactionData[i].InteractionObjects[j].GetComponent<LeverScript>().SignalChannel();
            }

            //UnityEngine.Debug.Log($"Interact_{i}");
        }

        stopwatch.Stop();
    }

    /*
    private IEnumerator CallPickups()
    {
        stopwatch.Restart();

        for (int i = 0; i < pickupData.Count; i++)
        {
            yield return new WaitForSeconds((float)(pickupData[i].Time - stopwatch.ElapsedMilliseconds) / 1000);
            for (int j = 0; j < pickupData[i].PickupObject.Length; j++)
            {
                
                pickupData[i].PickupObject[j].GetComponent<PickUp>().tempParent = HoloInstance.GetComponentInChildren<Camera>().transform.Find("PickupPosition").gameObject;
                pickupData[i].PickupObject[j].GetComponent<PickUp>().SetToHeld();
            }
        }

        stopwatch.Stop();
    }
    */

    public IEnumerator StopPlayback()
    {
        recordPhase = RecordPhase.StoppingPlayback;

        syncBar.Reset();

        HoloInstance.GetComponentInChildren<Camera>().GetComponent<AudioSource>().Stop();

        float fadeValue = 1;
        while (fadeValue > 0)
        {
            fadeValue -= 0.08f;
            HoloInstance.GetComponentInChildren<SkinnedMeshRenderer>().material.SetFloat("Vector1_DCDBC5A6", fadeValue);
            yield return new WaitForFixedUpdate();
        }
        HoloInstance.transform.position = new Vector3(1000, 1000, 1000);
        //dances
        yield return new WaitForSeconds(0.25f);
        //for (int i = 0; i < pickupData.Count; i++)
        //{
        //    for (int j = 0; j < pickupData[i].PickupObject.Length; j++)
        //    {
        //        pickupData[i].PickupObject[j].GetComponent<PickUp>().SetToNotHeld();
        //    }
        //}

        recordPhase = RecordPhase.None;
        Destroy(HoloInstance);
    }


    public void ChangeControlState(ControlStates controlState)
    {
        switch (controlState)
        {
            case ControlStates.Player:
                alive = true;
                playerInstance.GetComponentInChildren<PlayerMovement>().enabled = true;
                playerInstance.transform.GetComponentInChildren<Camera>().enabled = true;
                playerInstance.transform.GetComponentInChildren<AudioListener>().enabled = true;
                playerInstance.transform.GetComponentInChildren<PlayerCamera>().enabled = true;
                playerInstance.transform.GetChild(0).GetChild(0).GetChild(0).gameObject.SetActive(true);     //Enables the player's canvas

                if (HoloInstance)
                {
                    HoloInstance.GetComponentInChildren<PlayerMovement>().enabled = false;
                    HoloInstance.transform.GetComponentInChildren<Camera>().enabled = false;
                    HoloInstance.transform.GetComponentInChildren<AudioListener>().enabled = false;
                    HoloInstance.transform.GetChild(0).GetChild(0).GetChild(0).gameObject.SetActive(false);     //Disables the hologram's canvas
                }
                break;

            case ControlStates.Holo:

                playerInstance.GetComponentInChildren<PlayerMovement>().enabled = false;
                playerInstance.transform.GetComponentInChildren<Camera>().enabled = false;
                playerInstance.transform.GetComponentInChildren<AudioListener>().enabled = false;
                playerInstance.transform.GetComponentInChildren<PlayerCamera>().enabled = false;
                playerInstance.transform.GetChild(0).GetChild(0).GetChild(0).gameObject.SetActive(false);     //Disables the player's canvas

                SpawnHolo();
                break;

            case ControlStates.Dead:

                playerInstance.GetComponent<PlayerMovement>().enabled = false;
                playerInstance.transform.GetComponentInChildren<PlayerCamera>().enabled = false;
                playerInstance.transform.GetChild(0).GetChild(0).GetChild(0).gameObject.SetActive(false);    //Disables the player's canvas
                alive = false;
                break;
        }
    }

    private void SpawnHolo()
    {
        HoloInstance = Instantiate(holoPrefab);
        HoloInstance.transform.position = playerInstance.transform.position;
        HoloInstance.transform.rotation = playerInstance.transform.rotation;
        HoloInstance.transform.GetComponentInChildren<PlayerCamera>().MouseY = PlayerManager.Instance.transform.GetComponentInChildren<PlayerCamera>().MouseY;
        HoloInstance.transform.GetChild(0).GetChild(0).GetChild(0).localRotation = PlayerManager.Instance.transform.GetChild(0).GetChild(0).localRotation;
    }
}
