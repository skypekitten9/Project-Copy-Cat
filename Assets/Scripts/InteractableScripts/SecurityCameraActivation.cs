using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SecurityCameraActivation : MonoBehaviour
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
            gameObject.GetComponentInChildren<SecurityCameraControl>().isActive = false;
        }
    }

    public void ActivateCamera(Camera disableCamera)
    {
        gameObject.GetComponentInChildren<SecurityCameraControl>().isActive = true;
        camera.enabled = true;
        disableCamera.enabled = false;
        UnityEngine.Debug.LogError("Going into camera mode!");
    }
}
