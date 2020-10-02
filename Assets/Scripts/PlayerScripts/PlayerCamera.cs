using System.Collections;
using System.Collections.Generic;
using UnityEditor.ShaderGraph.Internal;
using UnityEngine;

public class PlayerCamera : MonoBehaviour
{
    [SerializeField] private float mouseSensitivity = 100f;

    private Transform playerBody;

    float mouseY = 0;

    void Start()
    {
        playerBody = transform.parent.gameObject.transform;

        Cursor.lockState = CursorLockMode.Locked;
    }

    void Update()
    {
        float mouseX = Input.GetAxis("Mouse X") * mouseSensitivity * Time.deltaTime;
        mouseY += Input.GetAxis("Mouse Y") * mouseSensitivity * Time.deltaTime;

        mouseY = Mathf.Clamp(mouseY, -90f, 90f);
        transform.localRotation = Quaternion.Euler(-mouseY, 0f, 0f);

        playerBody.Rotate(Vector3.up * mouseX);
    }

}
