using System;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEditor.UIElements;
using UnityEngine;
using UnityEngine.UIElements;


public enum ControlStates { Player, Holo, None }

public class RecordPlayback : MonoBehaviour
{
    [SerializeField] private GameObject holoPrefab;
    public GameObject HoloInstance { get; private set; }

    private Stopwatch stopwatch;
    private List<TranslationData> translationData;
    private List<InteractionData> interactionData;
    private Quaternion startCameraRotation;

    [SerializeField] private float nodeSpawnRate = 7;      //How often to spawn a node (times per second)
    [SerializeField] private float recordTime = 5000;       //The timeframe for recording (milliseconds)
    [SerializeField] private float rewindSpeed = 0.75f;     //The player's speed duing the rewind-phase


    private void Start()
    {
        ChangeControlState(ControlStates.Player);
    }

    public void AddInteractionNode(params int[] id)
    {
        interactionData.Add(new InteractionData(stopwatch.ElapsedMilliseconds, id));
    }


    /// <summary>
    /// Changes which character can be controlled
    /// </summary>
    /// <param name="controlState">None = no character can be controlled</param>
    private void ChangeControlState(ControlStates controlState)
    {
        bool changeToPlayer = controlState == ControlStates.Player ? true : false;
        bool changeToHolo = controlState == ControlStates.Holo ? true : false;

        if (PlayerManager.Instance != null)
        {
            PlayerManager.Instance.GetComponent<PlayerMovement>().enabled = changeToPlayer;
            PlayerManager.Instance.GetComponent<Rigidbody>().useGravity = changeToPlayer;
            PlayerManager.Instance.GetComponent<Rigidbody>().velocity = Vector3.zero;

            if (controlState != ControlStates.None)
                PlayerManager.Instance.transform.GetChild(0).gameObject.SetActive(changeToPlayer);
        }

        if (HoloInstance != null)
        {
            HoloInstance.GetComponent<PlayerMovement>().enabled = changeToHolo;
            if (controlState != ControlStates.None)
                HoloInstance.transform.GetChild(0).gameObject.SetActive(changeToHolo);
        }
    }


    public System.Collections.IEnumerator SpawnHolo()
    {
        //Sync Bar logic start
        GameObject.Find("SyncBar").GetComponent<SyncBar>().StartBar();
        //Sync Bar logic stop
        UnityEngine.Debug.Log("Spawning Holo");

        HoloInstance = Instantiate(holoPrefab);
        ChangeControlState(ControlStates.None);

        HoloInstance.transform.position = PlayerManager.Instance.transform.position;
        HoloInstance.transform.rotation = PlayerManager.Instance.transform.rotation;

        HoloInstance.transform.GetChild(0).GetComponent<PlayerCamera>().MouseY = PlayerManager.Instance.transform.GetChild(0).GetComponent<PlayerCamera>().MouseY;
        HoloInstance.transform.GetChild(0).localRotation = PlayerManager.Instance.transform.GetChild(0).localRotation;

        startCameraRotation = HoloInstance.transform.GetChild(0).localRotation;

        HoloInstance.GetComponent<MeshRenderer>().material.SetFloat("Vector1_DCDBC5A6", 1);

        //yield return new WaitForSeconds(0.1f);
        ChangeControlState(ControlStates.Holo);

        StartCoroutine(Record());
        yield break;
    }

    private System.Collections.IEnumerator Record()
    {
        UnityEngine.Debug.Log("Recording");
        GetComponent<RecordManager>().recordPhase = RecordPhase.Recording;

        translationData = new List<TranslationData>();
        interactionData = new List<InteractionData>();
        stopwatch = new Stopwatch();
        stopwatch.Start();

        while (stopwatch.ElapsedMilliseconds < recordTime)
        {
            if (stopwatch.ElapsedMilliseconds >= (1 / nodeSpawnRate * 1000) * translationData.Count)
            {
                translationData.Add(new TranslationData(stopwatch.ElapsedMilliseconds, HoloInstance.transform.position, HoloInstance.transform.rotation));
            }

            yield return new WaitForFixedUpdate();
        }


        if (GetComponent<RecordManager>().recordPhase == RecordPhase.Recording)
        {
            StopRecord();
        }
    }

    public void StopRecord()
    {
        stopwatch.Stop();
        //Sync Bar logic start
        GameObject.Find("SyncBar").GetComponent<SyncBar>().StopBar();
        //Sync Bar logic stop
        StartCoroutine(Rewind());
    }

    public System.Collections.IEnumerator Rewind()
    {
        UnityEngine.Debug.Log("Rewinding");
        GetComponent<RecordManager>().recordPhase = RecordPhase.Rewinding;

        ChangeControlState(ControlStates.None);

        Quaternion endCameraRotation = HoloInstance.transform.GetChild(0).localRotation;

        float tolerance = rewindSpeed;
        int nodeCounter = translationData.Count - 1;

        while (nodeCounter > 0)
        {
            while (Vector3.Distance(HoloInstance.transform.position, translationData[nodeCounter - 1].Position) >= tolerance)
            {
                Vector3 direction = Vector3.Normalize(translationData[nodeCounter - 1].Position - HoloInstance.transform.position);
                float t = -(Vector3.Distance(HoloInstance.transform.position, translationData[0].Position) / Vector3.Distance(translationData[translationData.Count - 1].Position, translationData[0].Position)) + 1;

                HoloInstance.transform.position = HoloInstance.transform.position + direction * rewindSpeed;
                HoloInstance.transform.rotation = Quaternion.Lerp(translationData[translationData.Count - 1].Rotation, translationData[0].Rotation, t);
                HoloInstance.transform.GetChild(0).localRotation = Quaternion.Lerp(endCameraRotation, startCameraRotation, t);
                yield return new WaitForSeconds(Time.deltaTime);
            }
            nodeCounter--;
        }
        HoloInstance.transform.position = translationData[0].Position;
        HoloInstance.GetComponent<Rigidbody>().useGravity = false;
        HoloInstance.GetComponent<Rigidbody>().velocity = Vector3.zero;

        ChangeControlState(ControlStates.Player);


        StartCoroutine(Playback());
    }

    private System.Collections.IEnumerator Playback()
    {

        UnityEngine.Debug.Log("Playing back");
        GetComponent<RecordManager>().recordPhase = RecordPhase.PlayingBack;
        float timeCorrection = 0.0f;
        Stopwatch stopwatch = new Stopwatch();
        stopwatch.Start();
        //Sync Bar logic start
        GameObject.Find("SyncBar").GetComponent<SyncBar>().Replay();
        //Sync Bar logic stop
        int interactNodesCounter = 0;


        for (int i = 0; i < translationData.Count - 1; i++)
        {
            if (interactNodesCounter < interactionData.Count)
            {
                if (stopwatch.ElapsedMilliseconds >= interactionData[interactNodesCounter].Time)
                {
                    for (int j = 0; j < interactionData[interactNodesCounter].InteractionChannels.Length; j++)
                    {
                        TestLevelManager.Instance.interactablesArray[interactionData[interactNodesCounter].InteractionChannels[j]] =
                            !TestLevelManager.Instance.interactablesArray[interactionData[interactNodesCounter].InteractionChannels[j]];
                    }

                    TestLevelManager.Instance.NotifyDoors();
                    //Interaction happened
                    UnityEngine.Debug.Log($"Interact_{interactNodesCounter}");
                    interactNodesCounter++;
                }
            }

            while (stopwatch.ElapsedMilliseconds + timeCorrection < translationData[i].Time)
            {
                Vector3 distance = translationData[i + 1].Position - translationData[i].Position;

                if (HoloInstance == null)
                {
                    GetComponent<RecordManager>().recordPhase = RecordPhase.None;
                    yield break;
                }

                HoloInstance.transform.position += distance * Time.deltaTime * nodeSpawnRate;
                HoloInstance.transform.rotation = Quaternion.Lerp(translationData[i + 1].Rotation, translationData[i].Rotation,
                    Time.time / translationData[i].Time);
                yield return new WaitForFixedUpdate();
            }
            timeCorrection += (stopwatch.ElapsedMilliseconds - translationData[i + 1].Time);
        }
        stopwatch.Stop();

        //Sync Bar logic start
        GameObject.Find("SyncBar").GetComponent<SyncBar>().Reset();
        //Sync Bar logic stop

        StartCoroutine(DestroyHolo());
    }

    private System.Collections.IEnumerator DestroyHolo()
    {
        UnityEngine.Debug.Log("Destroying Holo");

        float fadeValue = 1;
        HoloInstance.GetComponent<MeshRenderer>().material.SetFloat("Vector1_DCDBC5A6", 1);
        while (fadeValue > 0)
        {
            fadeValue -= Time.deltaTime;
            HoloInstance.GetComponent<MeshRenderer>().material.SetFloat("Vector1_DCDBC5A6", fadeValue);
            yield return new WaitForFixedUpdate();
        }

        HoloInstance.transform.position = new Vector3(float.MaxValue, float.MaxValue, float.MaxValue);
        yield return new WaitForSeconds(0.25f);
        Destroy(HoloInstance);

        GetComponent<RecordManager>().recordPhase = RecordPhase.None;
    }


    /// <summary>
    /// Debug to visualize holo nodes
    /// </summary>
    private void OnDrawGizmos()
    {
        if (translationData != null)
        {
            for (int i = 0; i < translationData.Count; i++)
            {
                Gizmos.color = Color.red;
                Gizmos.DrawSphere(translationData[i].Position, 0.25f);

                if (i < translationData.Count - 1)
                    Gizmos.DrawLine(translationData[i].Position, translationData[i].Position + translationData[i].Rotation * Vector3.forward);
            }

        }
    }

}
