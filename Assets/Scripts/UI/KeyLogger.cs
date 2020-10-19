using System.Collections;
using System.Collections.Generic;
using System.Linq;
using TMPro;
using UnityEngine;

public class KeyLogger : MonoBehaviour
{
    List<string> keysLogged;
    void Start()
    {
        keysLogged = new List<string>();
    }

    // Update is called once per frame
    void OnGUI()
    {
        if (Event.current.isKey && Event.current.type == EventType.KeyDown && Event.current.keyCode != KeyCode.None)
        {
            Debug.Log(Event.current.keyCode);
        }
    }

    void OnApplicationQuit()
    {
        //System.IO.File.WriteAllLines(@"C:\Users\Victor\Desktop\Git Projects\Project-Copy-Cat\Assets\KeyLogs", keysLogged);
    }
}
