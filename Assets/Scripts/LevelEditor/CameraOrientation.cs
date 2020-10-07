using UnityEngine;

public class CameraOrientation : MonoBehaviour
{
    private Transform cam;

    private float mouseX;
    private float mouseY;
    private float sensitivity = 100.0f;

    private float zoom;
    private float zoomSpeed = 1000.0f;
    private Vector2 zoomClamp = new Vector2(5.0f, 50.0f);


    private void Start()
    {
        cam = GetComponentInChildren<Camera>().transform;

        mouseX = transform.eulerAngles.y;
        mouseY = -transform.eulerAngles.x;

        zoom = -cam.localPosition.z;
    }

    private void Update()
    {
        if (Input.GetMouseButton((int)UnityEngine.UIElements.MouseButton.MiddleMouse))
        {
            Cursor.lockState = CursorLockMode.Locked;

            mouseX += Input.GetAxis("Mouse X") * sensitivity * Time.deltaTime;
            mouseY += Input.GetAxis("Mouse Y") * sensitivity * Time.deltaTime;

            transform.rotation = Quaternion.Euler(-mouseY, mouseX, 0);
        }
        else
        {
            Cursor.lockState = CursorLockMode.None;
        }

        zoom -= Input.GetAxis("Mouse ScrollWheel") * zoomSpeed * Time.deltaTime;
        zoom = Mathf.Clamp(zoom, zoomClamp.x, zoomClamp.y);
        cam.localPosition = new Vector3(cam.localPosition.x, cam.localPosition.y, -zoom);
    }
}
