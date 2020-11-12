using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VolumeScript : MonoBehaviour
{
    private bool IsDown = false;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void VolumeSlider()
    {
        if(IsDown == false)
        {
            gameObject.transform.position = gameObject.transform.position + new Vector3(0, -40, 0);
            IsDown = true;
        }
        else if(IsDown == true)
        {
            gameObject.transform.position = gameObject.transform.position + new Vector3(0, 40, 0);
            IsDown = false;
        }
        
    }
}
