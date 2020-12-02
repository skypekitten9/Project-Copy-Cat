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

    public void ActivateTelescope(Camera disableCamera)
    {
        camera.enabled = true;
        disableCamera.enabled = false;
    }
}
