using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerCamera : MonoBehaviour
{
    [SerializeField] private float mouseSensitivity = 100f;

    private Transform playerBody;


    void Start()
    {
        playerBody = transform.parent.gameObject.transform;

        Cursor.lockState = CursorLockMode.Locked;
    }

    void Update()
    {
        float mouseX = Input.GetAxis("Mouse X") * mouseSensitivity * Time.deltaTime;
        float mouseY = Input.GetAxis("Mouse Y") * mouseSensitivity * Time.deltaTime;

        transform.localEulerAngles -= new Vector3(Mathf.Clamp(mouseY, -90.0f, 90.0f), 0.0f, 0.0f);
        playerBody.Rotate(Vector3.up * mouseX);
    }

}
