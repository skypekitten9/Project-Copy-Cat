using System;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEditor.UIElements;
using UnityEngine;
using UnityEngine.UIElements;

public enum RecordPhase { None, Recording, Rewinding, SpawningHolo, PlayingBack, KillingHolo }
public enum ControlStates { Player, Holo, None }

public class RecordPlayback : MonoBehaviour
{
    [SerializeField] private GameObject holoPrefab;
    public GameObject HoloInstance { get; private set; }

    private Stopwatch stopwatch;
    private List<HoloNode> holoPositionNodes;
    private List<HoloNode> holoInteractNodes;
    private Quaternion startCameraRotation;

    [SerializeField] private float nodeSpawnRate = 7;      //How often to spawn a node (times per second)
    [SerializeField] private float recordTime = 5000;       //The timeframe for recording (milliseconds)
    [SerializeField] private float rewindSpeed = 0.75f;     //The player's speed duing the rewind-phase

    private RecordPhase recordPhase = RecordPhase.None;



    private void Start()
    {
        ChangeControlState(ControlStates.Player);
    }



    private void Update()
    {
        /*Stub - let InputManager call this*/
        if (recordPhase == RecordPhase.Recording && Input.GetKeyDown(KeyCode.E))
        {
            holoInteractNodes.Add(new HoloNode(HoloInstance.transform.position, HoloInstance.transform.rotation, stopwatch.ElapsedMilliseconds, Action.Interact));
        }

        /*Stub - let InputManager call this*/
        if (Input.GetKeyDown(KeyCode.Q))
        {
            if (recordPhase == RecordPhase.None)
            {
                StartCoroutine(SpawnHolo());
            }
        }
    }


    /// <summary>
    /// Changes which character can be controlled
    /// </summary>
    /// <param name="controlState">None = no character can be controlled</param>
    private void ChangeControlState(ControlStates controlState)
    {
        bool changeToPlayer = controlState == ControlStates.Player ? true : false;
        bool changeToHolo = controlState == ControlStates.Holo ? true : false;

        PlayerManager.Instance.GetComponent<PlayerMovement>().enabled = changeToPlayer;
        if (controlState != ControlStates.None)
            PlayerManager.Instance.transform.GetChild(0).gameObject.SetActive(changeToPlayer);

        if (HoloInstance != null)
        {
            HoloInstance.GetComponent<PlayerMovement>().enabled = changeToHolo;
            if (controlState != ControlStates.None)
                HoloInstance.transform.GetChild(0).gameObject.SetActive(changeToHolo);
        }
    }


    private System.Collections.IEnumerator SpawnHolo()
    {
        UnityEngine.Debug.Log("Spawning Holo");
        recordPhase = RecordPhase.SpawningHolo;

        HoloInstance = Instantiate(holoPrefab);
        ChangeControlState(ControlStates.None);

        HoloInstance.transform.position = PlayerManager.Instance.transform.position;
        HoloInstance.transform.rotation = PlayerManager.Instance.transform.rotation;
        HoloInstance.transform.GetChild(0).localRotation = PlayerManager.Instance.transform.GetChild(0).localRotation;
        startCameraRotation = HoloInstance.transform.GetChild(0).localRotation;

        HoloInstance.GetComponent<MeshRenderer>().material.SetFloat("Vector1_DCDBC5A6", 1);

        yield return new WaitForSeconds(0.1f);
        ChangeControlState(ControlStates.Holo);

        StartCoroutine(Record());
    }

    System.Collections.IEnumerator Record()
    {
        UnityEngine.Debug.Log("Recording");
        recordPhase = RecordPhase.Recording;

        holoPositionNodes = new List<HoloNode>();
        holoInteractNodes = new List<HoloNode>();
        stopwatch = new Stopwatch();
        stopwatch.Start();

        while (stopwatch.ElapsedMilliseconds < recordTime)
        {
            if (stopwatch.ElapsedMilliseconds >= (1 / nodeSpawnRate * 1000) * holoPositionNodes.Count)
            {
                holoPositionNodes.Add(new HoloNode(HoloInstance.transform.position, HoloInstance.transform.rotation, stopwatch.ElapsedMilliseconds, Action.None));
            }

            yield return new WaitForFixedUpdate();
        }

        stopwatch.Stop();


        StartCoroutine(Rewind());
    }

    System.Collections.IEnumerator Rewind()
    {
        UnityEngine.Debug.Log("Rewinding");
        recordPhase = RecordPhase.Rewinding;

        ChangeControlState(ControlStates.None);

        Quaternion endCameraRotation = HoloInstance.transform.GetChild(0).localRotation;

        float tolerance = rewindSpeed;
        int nodeCounter = holoPositionNodes.Count - 1;

        while (nodeCounter > 0)
        {
            while (Vector3.Distance(HoloInstance.transform.position, holoPositionNodes[nodeCounter - 1].Position) >= tolerance)
            {
                Vector3 direction = Vector3.Normalize(holoPositionNodes[nodeCounter - 1].Position - HoloInstance.transform.position);
                float t = -(Vector3.Distance(HoloInstance.transform.position, holoPositionNodes[0].Position) / Vector3.Distance(holoPositionNodes[holoPositionNodes.Count - 1].Position, holoPositionNodes[0].Position)) + 1;

                HoloInstance.transform.position = HoloInstance.transform.position + direction * rewindSpeed;
                HoloInstance.transform.rotation = Quaternion.Lerp(holoPositionNodes[holoPositionNodes.Count - 1].Rotation, holoPositionNodes[0].Rotation, t);
                HoloInstance.transform.GetChild(0).localRotation = Quaternion.Lerp(endCameraRotation, startCameraRotation, t);
                yield return new WaitForSeconds(Time.deltaTime);
            }
            nodeCounter--;
        }
        HoloInstance.transform.position = holoPositionNodes[0].Position;

        ChangeControlState(ControlStates.Player);


        StartCoroutine(Playback());
    }

    System.Collections.IEnumerator Playback()
    {
        UnityEngine.Debug.Log("Playing back");
        recordPhase = RecordPhase.PlayingBack;

        yield return new WaitForSeconds(1.0f);

        float timeCorrection = 0.0f;
        Stopwatch stopwatch = new Stopwatch();
        stopwatch.Start();

        int interactNodesCounter = 0;

        for (int i = 0; i < holoPositionNodes.Count - 1; i++)
        {
            if (interactNodesCounter < holoInteractNodes.Count)
            {
                if (stopwatch.ElapsedMilliseconds >= holoInteractNodes[interactNodesCounter].Time)
                {
                    //Interaction happened
                    UnityEngine.Debug.Log($"Interact_{interactNodesCounter}");
                    interactNodesCounter++;
                }
            }

            while (stopwatch.ElapsedMilliseconds + timeCorrection < holoPositionNodes[i].Time)
            {
                Vector3 distance = holoPositionNodes[i + 1].Position - holoPositionNodes[i].Position;

                HoloInstance.transform.position += distance * Time.deltaTime * nodeSpawnRate;
                HoloInstance.transform.rotation = Quaternion.Lerp(holoPositionNodes[i + 1].Rotation, holoPositionNodes[i].Rotation,
                    Time.time / holoPositionNodes[i].Time);
                yield return new WaitForFixedUpdate();
            }
            timeCorrection += (stopwatch.ElapsedMilliseconds - holoPositionNodes[i + 1].Time);
        }
        stopwatch.Stop();


        StartCoroutine(DestroyHolo());
    }

    System.Collections.IEnumerator DestroyHolo()
    {
        UnityEngine.Debug.Log("Destroying Holo");
        recordPhase = RecordPhase.KillingHolo;


        float fadeValue = 1;
        HoloInstance.GetComponent<MeshRenderer>().material.SetFloat("Vector1_DCDBC5A6", 1);
        while (fadeValue > 0)
        {
            fadeValue -= Time.deltaTime;
            HoloInstance.GetComponent<MeshRenderer>().material.SetFloat("Vector1_DCDBC5A6", fadeValue);
            yield return new WaitForFixedUpdate();
        }

        Destroy(HoloInstance);

        recordPhase = RecordPhase.None;
    }



    /// <summary>
    /// Debug to visualize holo nodes
    /// </summary>
    private void OnDrawGizmos()
    {
        if (holoPositionNodes != null)
        {
            for (int i = 0; i < holoPositionNodes.Count; i++)
            {
                Gizmos.color = Color.red;
                Gizmos.DrawSphere(holoPositionNodes[i].Position, 0.25f);

                if (i < holoPositionNodes.Count - 1)
                    Gizmos.DrawLine(holoPositionNodes[i].Position, holoPositionNodes[i].Position + holoPositionNodes[i].Rotation * Vector3.forward);
            }

            for (int i = 0; i < holoInteractNodes.Count; i++)
            {
                Gizmos.color = Color.green;
                Gizmos.DrawSphere(holoInteractNodes[i].Position, 0.20f);
            }

        }
    }

}
