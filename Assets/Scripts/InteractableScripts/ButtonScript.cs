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
        //if (Input.GetKeyDown(KeyCode.E))
        //{
        //    float range = 1f;
        //    ray = new Ray(transform.position, transform.up);

        //    RaycastHit hit;
        //    if (Physics.Raycast(ray, out hit))
        //    {
        //        if (hit.distance < range)
        //        {
        //            SignalChannel();
        //        }
        //    }
        //}
    }
    public void SignalChannel()
    {
        TestLevelManager.Instance.interactablesArray[id] = !TestLevelManager.Instance.interactablesArray[id];
        TestLevelManager.Instance.UpdateChannels();
    }

}
