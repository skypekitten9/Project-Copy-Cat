using System;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEditor.UIElements;
using UnityEngine;

public enum RecordPhase { None, Recording, Rewinding, SpawningHolo, PlayingBack, KillingHolo }

public class RecordPlayback : MonoBehaviour
{
    [SerializeField] private GameObject holoPrefab;
    private GameObject holoInstance;

    private Stopwatch stopwatch;
    private List<HoloNode> holoPositionNodes;
    private List<HoloNode> holoInteractNodes;

    [SerializeField] private float nodeSpawnRate = 10;      //How often to spawn a node (times per second)
    [SerializeField] private float recordTime = 5000;       //The timeframe for recording (milliseconds)
    [SerializeField] private float rewindSpeed = 0.75f;     //The player's speed duing the rewind-phase

    private RecordPhase recordPhase = RecordPhase.None;

    private void Update()
    {
        /*Stub - let InputManager call this*/
        if (recordPhase == RecordPhase.Recording && Input.GetKeyDown(KeyCode.E))
        {
            holoInteractNodes.Add(new HoloNode(PlayerManager.Instance.transform.position, PlayerManager.Instance.transform.rotation, stopwatch.ElapsedMilliseconds, Action.Interact));
        }

        /*Stub - let InputManager call this*/
        if (Input.GetKeyDown(KeyCode.Q))
        {
            if (recordPhase == RecordPhase.None)
            {
                StartCoroutine(Record());
            }
        }
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
                holoPositionNodes.Add(new HoloNode(PlayerManager.Instance.transform.position, PlayerManager.Instance.transform.rotation, stopwatch.ElapsedMilliseconds, Action.None));
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


        PlayerManager.Instance.GetComponent<PlayerMovement>().enabled = false;
        PlayerManager.Instance.GetComponentInChildren<PlayerCamera>().enabled = false;
        PlayerManager.Instance.GetComponent<CharacterController>().enabled = false;

        float tolerance = rewindSpeed;
        int nodeCounter = holoPositionNodes.Count - 1;

        while (nodeCounter > 0)
        {
            while (Vector3.Distance(PlayerManager.Instance.transform.position, holoPositionNodes[nodeCounter - 1].Position) >= tolerance)
            {
                Vector3 direction = Vector3.Normalize(holoPositionNodes[nodeCounter - 1].Position - PlayerManager.Instance.transform.position);
                float t = -(Vector3.Distance(PlayerManager.Instance.transform.position, holoPositionNodes[0].Position) / Vector3.Distance(holoPositionNodes[holoPositionNodes.Count - 1].Position, holoPositionNodes[0].Position)) + 1;

                PlayerManager.Instance.transform.position = PlayerManager.Instance.transform.position + direction * rewindSpeed;
                PlayerManager.Instance.transform.rotation = Quaternion.Lerp(holoPositionNodes[holoPositionNodes.Count - 1].Rotation, holoPositionNodes[0].Rotation, t);
                yield return new WaitForSeconds(Time.deltaTime);
            }
            nodeCounter--;
        }

        PlayerManager.Instance.GetComponent<CharacterController>().enabled = true;
        PlayerManager.Instance.GetComponentInChildren<PlayerCamera>().enabled = true;
        PlayerManager.Instance.GetComponent<PlayerMovement>().enabled = true;

        StartCoroutine(SpawnHolo());
    }

    System.Collections.IEnumerator SpawnHolo()
    {
        UnityEngine.Debug.Log("Spawning Holo");
        recordPhase = RecordPhase.SpawningHolo;


        holoInstance = Instantiate(holoPrefab);
        holoInstance.transform.position = holoPositionNodes[0].Position;

        float fadeValue = 0;
        holoInstance.GetComponent<MeshRenderer>().material.SetFloat("Vector1_DCDBC5A6", 0);
        while (fadeValue < 1)
        {
            fadeValue += Time.deltaTime;
            holoInstance.GetComponent<MeshRenderer>().material.SetFloat("Vector1_DCDBC5A6", fadeValue);
            yield return new WaitForFixedUpdate();
        }

        StartCoroutine(Playback());
    }

    System.Collections.IEnumerator Playback()
    {
        UnityEngine.Debug.Log("Playing back");
        recordPhase = RecordPhase.PlayingBack;


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

                holoInstance.transform.position += distance * Time.deltaTime * nodeSpawnRate;
                holoInstance.transform.rotation = Quaternion.Lerp(holoPositionNodes[i + 1].Rotation, holoPositionNodes[i].Rotation,
                    Time.time / holoPositionNodes[i].Time);
                yield return new WaitForFixedUpdate();
            }
            timeCorrection += (stopwatch.ElapsedMilliseconds - holoPositionNodes[i].Time);
        }
        stopwatch.Stop();

        StartCoroutine(KillHolo());
    }

    System.Collections.IEnumerator KillHolo()
    {
        UnityEngine.Debug.Log("Killing Holo");
        recordPhase = RecordPhase.KillingHolo;


        float fadeValue = 1;
        holoInstance.GetComponent<MeshRenderer>().material.SetFloat("Vector1_DCDBC5A6", 1);
        while (fadeValue > 0)
        {
            fadeValue -= Time.deltaTime;
            holoInstance.GetComponent<MeshRenderer>().material.SetFloat("Vector1_DCDBC5A6", fadeValue);
            yield return new WaitForFixedUpdate();
        }

        Destroy(holoInstance);

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
