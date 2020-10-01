using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StandButton : MonoBehaviour
{

    [SerializeField] private int id;
    [SerializeField] private float timer;
    [SerializeField] private float cooldown;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(timer > 0)
        {
            timer -= Time.deltaTime;
            if (timer <= 0)
            {
                SignalChannel();
                
            }
        }
        if (cooldown > 0)
        {
            cooldown -= Time.deltaTime;
        }

    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.GetComponent<PlayerMovement>() != null)
        {
            if(cooldown <= 0)
            {
                SignalChannel();
                cooldown = 3f;
                timer = 3f;
            }
            
        }
    }
    private void SignalChannel()
    {
        TestLevelManager.Instance.interactablesArray[id] = !TestLevelManager.Instance.interactablesArray[id];
        TestLevelManager.Instance.UpdateChannels();
    }
}
