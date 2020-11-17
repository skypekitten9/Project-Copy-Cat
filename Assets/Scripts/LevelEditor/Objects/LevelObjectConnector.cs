using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using TMPro;
using UnityEditor;
using UnityEngine;

public class LevelObjectConnector : MonoBehaviour
{
    private Camera cam;

    public Dictionary<GameObject, List<int>> Connections { get; set; }

    [SerializeField] private GameObject lineRendererPrefab;

    private Transform lineRendererParent;

    private List<VisualConnection> visualConnections;

    [SerializeField] private GameObject channelPrompt;
    public GameObject ChannelPrompt { get { return channelPrompt; } }

    [SerializeField] private TMP_InputField idField;

    private GameObject tempFrom, tempTo;



    private void Awake()
    {
        cam = Camera.main;
        ResetConnections();
    }

    public void ResetConnections()
    {
        if (lineRendererParent)
            Destroy(lineRendererParent.gameObject);
        lineRendererParent = new GameObject("LineRenderers").transform;

        Connections = new Dictionary<GameObject, List<int>>();
        visualConnections = new List<VisualConnection>();
    }

    public void SetLineRenderers()
    {
        for (int i = Connections.Count - 1; i >= 0; i--)
        {
            for (int j = Connections.Count - 1; j >= 0; j--)
            {
                if (i != j)
                {
                    if (Connections.ElementAt(i).Key.GetComponent<ButtonScript>() ||
                        Connections.ElementAt(i).Key.GetComponent<StandButton>() ||
                        Connections.ElementAt(i).Key.GetComponent<LeverScript>())
                    {
                        if (Connections.ElementAt(i).Value.Count > 0 && Connections.ElementAt(j).Value.Contains(Connections.ElementAt(i).Value[0]))
                        {
                            SetLineRenderer(Connections.ElementAt(i).Key, Connections.ElementAt(j).Key);
                        }
                    }
                }
            }
        }
    }

    private void SetLineRenderer(GameObject from, GameObject to)
    {
        GameObject lr = Instantiate(lineRendererPrefab, lineRendererParent);
        lr.GetComponent<VisualConnection>().From = from;
        lr.GetComponent<VisualConnection>().To = to;
    }

    public void AddChannel()
    {
        GetComponent<Selector>().SetCursor(CursorModes.Select);
        GetComponent<Selector>().CanChangeCursor = false;

        GetComponent<EditorUI>().CloseAllMenus();

        GameObject channelFrom = LevelEditor.Instance.selectedLevelObject.transform.parent.gameObject;
        bool reciever = LevelEditor.Instance.selectedLevelObject.GetComponentInParent<DoorScript>();

        StartCoroutine(SetChannelTo(channelFrom, reciever));
    }


    private IEnumerator SetChannelTo(GameObject from, bool reciever)
    {
        while (true)
        {
            if (Input.GetMouseButtonDown(0))
            {
                Ray ray = cam.ScreenPointToRay(Input.mousePosition);
                RaycastHit hit;

                if (Physics.Raycast(ray, out hit, Mathf.Infinity, GetComponent<Selector>().SelectionMask))
                {
                    GameObject to = hit.transform.parent.gameObject;

                    //Debug.Log($"From: {from.name}  -->  To: {to.name}");
                    if (reciever == true && (to.GetComponent<ButtonScript>() ||     //to is a transmitter (button)
                                             to.GetComponent<StandButton>() ||
                                             to.GetComponent<LeverScript>()))
                    {
                        tempFrom = to;
                        tempTo = from;

                        if (Connections[to].Count == 0)
                        {
                            channelPrompt.transform.position = Input.mousePosition;
                            channelPrompt.SetActive(true);
                        }
                    }
                    else if (reciever == false && to.GetComponent<DoorScript>())        //to is a reciever (door)
                    {
                        tempFrom = from;
                        tempTo = to;

                        if (Connections[from].Count == 0)
                        {
                            channelPrompt.transform.position = Input.mousePosition;
                            channelPrompt.SetActive(true);
                        }
                    }
                }

                GetComponent<Selector>().CanChangeCursor = true;
                break;
            }
            yield return new WaitForSeconds(Time.deltaTime);
        }
    }

    public void Connect()
    {
        if (Connections[tempFrom].Count == 0)
        {
            int newId;

            if (idField.text != "")
                newId = Convert.ToInt32(idField.text);
            else
                newId = GetNewId();

            Connections[tempTo].Add(newId);
            Connections[tempFrom].Add(newId);
        }
        else
        {
            if (Connections[tempTo].Contains(Connections[tempFrom][0]) == false)
            {
                Connections[tempTo].Add(Connections[tempFrom][0]);
            }
        }
        SetLineRenderer(tempFrom, tempTo);

        tempFrom = null;
        tempTo = null;
        channelPrompt.SetActive(false);
    }

    public void RemoveChannels(int channelId)
    {
        foreach (var connection in Connections)
        {
            for (int i = connection.Value.Count - 1; i >= 0; i--)
            {
                if (connection.Value[i] == channelId)
                {
                    connection.Value.RemoveAt(i);
                }
            }
        }
    }

    private int GetNewId()
    {
        int largestId = -1;

        foreach (var connection in Connections)
        {
            if (connection.Value.Count > 0)
            {
                int c_id = connection.Value[0];
                if (c_id > largestId)
                {
                    largestId = c_id;
                }
            }
        }

        int newId = largestId + 1;
        //Debug.Log($"New id: {newId}");
        return newId;
    }

#if UNITY_EDITOR
    private void OnDrawGizmos()
    {
        if (Connections != null)
        {
            for (int i = Connections.Count - 1; i >= 0; i--)
            {
                GUIStyle style = new GUIStyle();
                style.normal.textColor = Color.green;
                style.fontSize = 18;
                Handles.Label(Connections.ElementAt(i).Key.transform.position, string.Join(",", Connections.ElementAt(i).Value), style);

                Gizmos.color = Color.green;
                for (int j = Connections.Count - 1; j >= 0; j--)
                {
                    if (i != j)
                    {
                        if (Connections.ElementAt(i).Key.GetComponent<ButtonScript>() ||
                            Connections.ElementAt(i).Key.GetComponent<StandButton>() ||
                            Connections.ElementAt(i).Key.GetComponent<LeverScript>())
                        {
                            if (Connections.ElementAt(i).Value.Count > 0 && Connections.ElementAt(j).Value.Contains(Connections.ElementAt(i).Value[0]))
                            {
                                Gizmos.DrawLine(Connections.ElementAt(i).Key.transform.position, Connections.ElementAt(j).Key.transform.position);
                            }
                        }

                    }
                }
            }
        }
    }
#endif
}