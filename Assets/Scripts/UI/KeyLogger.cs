using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using TMPro;
using UnityEngine;

public class KeyLogger : MonoBehaviour
{
    List<string> keysLogged;
    string path = "Assets/KeyLogs";
    public bool enable;
    void Start()
    {
        if (!enable) gameObject.SetActive(false);
        keysLogged = new List<string>();
        keysLogged.Add("Key:\tTimestamp:\n");
    }

    // Update is called once per frame
    void OnGUI()
    {
        if (Event.current.isKey && Event.current.type == EventType.KeyDown && Event.current.keyCode != KeyCode.None)
        {
            Debug.Log(Event.current.keyCode);
            keysLogged.Add(Event.current.keyCode.ToString() + "\t" + Time.time + "s\n");
        }
    }

    void OnApplicationQuit()
    {
        string fileToWrite = "";
        foreach(string key in keysLogged)
        {
            fileToWrite += key;
        }
        ReadWriteFileManager.WriteToFile(fileToWrite, path + "/" + DateTime.Now.ToString("d-MMM-yyyy, HH mm ss") + ".txt");
    }
}
