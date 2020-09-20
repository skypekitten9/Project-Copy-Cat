using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonScript : MonoBehaviour
{
   
    [SerializeField]
    private GameObject rayOrigin;
    private Ray ray;
    private int id = 1;

    void Start()
    {
        
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.E))
        {
            float range = 5f;
            ray = new Ray(transform.position, transform.up);

            RaycastHit hit;
            if (Physics.Raycast(ray, out hit))
            {
                if (hit.distance < range)
                {
                    SignalChannel();
                }
            }
    }
}

    //Denna metoden är tänkt man ska kalla på när spelaren klickar på knappen. Den meddelar senare vidare till LevelManagern att kanalen ska uppdateras så dörren öppnas.
    private void SignalChannel()
    {
        TestLevelManager.Instance.interactablesArray[id] = !TestLevelManager.Instance.interactablesArray[id];
        TestLevelManager.Instance.UpdateChannels();
    }

}
