using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonScript : MonoBehaviour
{
    private Ray ray;
    [SerializeField] public int id;
    
    void Start()
    {
        
    }

    void Update()
    {
        

    }
    public void SignalChannel(bool status)
    {

        TestLevelManager.Instance.interactablesArray[id] = status;
        TestLevelManager.Instance.UpdateChannels();
    }

}
