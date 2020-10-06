using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StandButton : MonoBehaviour
{

    [SerializeField] private int id;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.GetComponent<PlayerMovement>() != null)
        {
            SignalChannel(true);
        }
    }

    private void OnTriggerExit(Collider other)
    {
        SignalChannel(false);
    }
    
    private void SignalChannel(bool status)
    {
        TestLevelManager.Instance.interactablesArray[id] = status;
        TestLevelManager.Instance.UpdateChannels();
    }


}
