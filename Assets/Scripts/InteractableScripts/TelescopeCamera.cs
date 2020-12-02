using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TelescopeCamera : MonoBehaviour
{
    [SerializeField] public static float mouseSensitivity = 100f;

    private Transform body;

    public float MouseY { get; set; } = 0;

    public bool isActive;

    void Start()
    {
        body = transform.parent.gameObject.transform;

        Cursor.lockState = CursorLockMode.Locked;

        isActive = false;
    }

    void Update()
    {
        if (isActive)
        {
            float mouseX = Input.GetAxis("Mouse X") * mouseSensitivity * Time.deltaTime;
            MouseY += Input.GetAxis("Mouse Y") * mouseSensitivity * Time.deltaTime;

            MouseY = Mathf.Clamp(MouseY, -90f, 90f);
            transform.localRotation = Quaternion.Euler(-MouseY, 0f, 0f);

            body.Rotate(Vector3.up * mouseX);
        }
    }
}
