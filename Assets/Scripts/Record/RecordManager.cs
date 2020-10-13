using System;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;


public enum RecordPhase { None, Recording, PlayingBack }
public enum ControlStates { Player, Holo, Mimic, None }

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

        if (HoloInstance == null)
            HoloInstance = Instantiate(holoPrefab);

        objectRecorders = UnityEngine.Object.FindObjectsOfType<RecordTransformHierarchy>();

        stopwatch = new Stopwatch();

        ChangeControlState(ControlStates.Mimic);
    }


    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Q))
        {
            switch (recordPhase)
            {
                case RecordPhase.None:
                    StartRecording();
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


    private void StartRecording()
    {
        recordPhase = RecordPhase.Recording;

        stopwatch.Restart();
        ChangeControlState(ControlStates.Holo);

        holoRecorder = HoloInstance.GetComponent<RecordTransformHierarchy>();

        holoRecorder.StartRecording();
        Array.ForEach(objectRecorders, element => element.StartRecording());

    }

    private void StopRecording()
    {
        stopwatch.Stop();
        ChangeControlState(ControlStates.None);

        holoRecorder.StopRecording();
        Array.ForEach(objectRecorders, element => element.StopRecording());
    }

    public void StartPlayback()
    {
        recordPhase = RecordPhase.PlayingBack;
        ChangeControlState(ControlStates.Player);
    }

    public void EndPlayback()
    {
        recordPhase = RecordPhase.None;
        ChangeControlState(ControlStates.Mimic);
    }


    private void ChangeControlState(ControlStates controlState)
    {
        switch (controlState)
        {
            case ControlStates.Player:
                playerInstance.GetComponent<PlayerMovement>().enabled = true;
                playerInstance.transform.GetChild(0).gameObject.SetActive(true);    //Enables all the player's camera objects

                HoloInstance.GetComponent<PlayerMovement>().enabled = false;
                HoloInstance.transform.GetChild(0).gameObject.SetActive(false);     //Disables all the hologram's camera objects
                HoloInstance.GetComponent<MeshRenderer>().enabled = true;       //Shows the hologram
                break;

            case ControlStates.Holo:
                playerInstance.GetComponent<PlayerMovement>().enabled = false;
                playerInstance.transform.GetChild(0).gameObject.SetActive(false);    //Disables all the player's camera objects

                HoloInstance.GetComponent<PlayerMovement>().enabled = true;
                HoloInstance.transform.GetChild(0).gameObject.SetActive(true);     //Enables all the hologram's camera objects
                HoloInstance.GetComponentInChildren<Camera>().enabled = true;
                HoloInstance.GetComponentInChildren<AudioListener>().enabled = true;
                HoloInstance.transform.GetChild(0).GetChild(0).gameObject.SetActive(true);     //Shows the holo canvas (HUD)
                HoloInstance.GetComponent<MeshRenderer>().enabled = true;       //Shows the hologram
                break;

            case ControlStates.Mimic:
                ResetHolo();

                playerInstance.GetComponent<PlayerMovement>().enabled = true;
                playerInstance.transform.GetChild(0).gameObject.SetActive(true);    //Enables all the player's camera objects

                HoloInstance.GetComponent<PlayerMovement>().enabled = true;
                HoloInstance.transform.GetChild(0).gameObject.SetActive(true);      //Enables all the hologram's camera objects
                HoloInstance.GetComponentInChildren<Camera>().enabled = false;
                HoloInstance.GetComponentInChildren<AudioListener>().enabled = false;
                HoloInstance.transform.GetChild(0).GetChild(0).gameObject.SetActive(false);     //Hides the holo canvas (HUD)
                HoloInstance.GetComponent<MeshRenderer>().enabled = false;    //Hides the hologram
                break;
        }

        /*
        bool changeToPlayer = controlState == ControlStates.Player ? true : false;
        bool changeToHolo = controlState == ControlStates.Holo ? true : false;

        //playerInstance.GetComponent<MeshRenderer>().enabled = changeToPlayer;
        //HoloInstance.GetComponent<MeshRenderer>().enabled = changeToHolo;


        PlayerManager.Instance.GetComponent<PlayerMovement>().enabled = changeToPlayer;
        PlayerManager.Instance.GetComponent<Rigidbody>().useGravity = changeToPlayer;
        PlayerManager.Instance.GetComponent<Rigidbody>().velocity = Vector3.zero;

        if (controlState != ControlStates.None)
            PlayerManager.Instance.transform.GetChild(0).GetComponent<Camera>().enabled = changeToPlayer;
        //PlayerManager.Instance.transform.GetChild(0).GetComponent<PlayerCamera>().enabled = changeToPlayer;


        //HoloInstance.GetComponent<PlayerMovement>().enabled = changeToHolo;
        if (controlState != ControlStates.None)
            HoloInstance.transform.GetChild(0).GetComponent<Camera>().enabled = changeToHolo;
        //HoloInstance.transform.GetChild(0).GetComponent<PlayerCamera>().enabled = changeToHolo;
        */
    }

    private void ResetHolo()
    {
        HoloInstance.transform.position = playerInstance.transform.position;
        HoloInstance.transform.rotation = playerInstance.transform.rotation;
        HoloInstance.transform.GetChild(0).GetComponent<PlayerCamera>().MouseY = PlayerManager.Instance.transform.GetChild(0).GetComponent<PlayerCamera>().MouseY;
        HoloInstance.transform.GetChild(0).localRotation = PlayerManager.Instance.transform.GetChild(0).localRotation;
    }
}
