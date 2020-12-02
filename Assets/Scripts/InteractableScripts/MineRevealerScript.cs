using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MineRevealerScript : MonoBehaviour
{
    Camera camera;

    void Start()
    {
        camera = gameObject.GetComponentInChildren<Camera>();
        camera.enabled = false;
    }

    private void Update()
    {
        if (camera.enabled == false)
        {
            gameObject.GetComponentInChildren<TelescopeCamera>().isActive = false;
        }
    }

    public void ActivateTelescope(Camera disableCamera)
    {
        gameObject.GetComponentInChildren<TelescopeCamera>().isActive = true;
        camera.enabled = true;
        disableCamera.enabled = false;
    }
}
