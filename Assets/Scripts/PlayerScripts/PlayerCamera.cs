using System.Collections;
using System.Collections.Generic;
using UnityEditor.ShaderGraph.Internal;
using UnityEngine;

public class PlayerCamera : MonoBehaviour
{
    [SerializeField] private float mouseSensitivity = 100f;

    private Transform playerBody;

    public float MouseY { get; set; } = 0;

    void Start()
    {
        playerBody = transform.parent.gameObject.transform;

        Cursor.lockState = CursorLockMode.Locked;
    }

    void Update()
    {
        float mouseX = Input.GetAxis("Mouse X") * mouseSensitivity * Time.deltaTime;
        MouseY += Input.GetAxis("Mouse Y") * mouseSensitivity * Time.deltaTime;

        MouseY = Mathf.Clamp(MouseY, -90f, 90f);
        transform.localRotation = Quaternion.Euler(-MouseY, 0f, 0f);

        playerBody.Rotate(Vector3.up * mouseX);
    }

}
