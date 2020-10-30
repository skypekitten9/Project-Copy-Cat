using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEditor;
using UnityEngine;

public class LevelObjectConnector : MonoBehaviour
{
    private Camera cam;


    public Dictionary<GameObject, List<int>> Connections { get; set; }


    private void Awake()
    {
        cam = Camera.main;
        Connections = new Dictionary<GameObject, List<int>>();
    }

    public void AddChannel()
    {
        GetComponent<Selector>().SetCursor(CursorModes.Select);
        GetComponent<Selector>().CanChangeCursor = false;

        GetComponent<EditorUI>().ClosePopupMenu();
        GetComponent<EditorUI>().CloseLevelsMenu();

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
                        Connect(to, from);
                    }
                    else if (reciever == false && to.GetComponent<DoorScript>())        //to is a reciever (door)
                    {
                        Connect(from, to);
                    }

                }

                GetComponent<Selector>().CanChangeCursor = true;
                break;
            }

            yield return new WaitForSeconds(Time.deltaTime);
        }
    }

    private void Connect(GameObject transmitter, GameObject reciever)
    {
        if (Connections[transmitter].Count == 0)
        {
            int newId = GetNewId();
            Connections[reciever].Add(newId);
            Connections[transmitter].Add(newId);
        }
        else
        {
            if (Connections[reciever].Contains(Connections[transmitter][0]) == false)
            {
                Connections[reciever].Add(Connections[transmitter][0]);
            }
        }
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

}
