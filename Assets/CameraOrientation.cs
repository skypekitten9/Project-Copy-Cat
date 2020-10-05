using UnityEngine;

public class CameraOrientation : MonoBehaviour
{
    private float sensitivity = 100.0f;

    private float mouseX;
    private float mouseY;


    private void Start()
    {
        mouseX = transform.eulerAngles.y;
        mouseY = -transform.eulerAngles.x;
    }

    private void Update()
    {
        if (Input.GetMouseButton(2))
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


    }
}
