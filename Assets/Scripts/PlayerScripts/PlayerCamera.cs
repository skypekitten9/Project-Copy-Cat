using UnityEngine;

public class PlayerCamera : MonoBehaviour
{
    [SerializeField] public static float mouseSensitivity = 0.2f;

    private Transform playerBody;

    public float MouseY { get; set; } = 0;

    void Start()
    {
        playerBody = transform.parent.parent.gameObject.transform;

        Cursor.lockState = CursorLockMode.Locked;
    }

    void Update()
    {
        float mouseX = Input.GetAxis("Mouse X") * mouseSensitivity;
        MouseY += Input.GetAxis("Mouse Y") * mouseSensitivity;

        MouseY = Mathf.Clamp(MouseY, -90f, 90f);
        transform.localRotation = Quaternion.Euler(-MouseY, 0f, 0f);

        playerBody.Rotate(Vector3.up * mouseX);
    }

}
