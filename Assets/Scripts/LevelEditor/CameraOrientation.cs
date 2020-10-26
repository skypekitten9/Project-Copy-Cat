using UnityEngine;

public class CameraOrientation : MonoBehaviour
{
    private Camera cam;
    private Transform camTransform;

    private float mouseX_pan, mouseY_pan;
    private float pan_sensitivity = 0.2f;//50.0f;

    private float mouseX_rot, mouseY_rot;
    private float rot_sensitivity = 0.7f;//100.0f;

    private float zoom;
    private float zoomSpeed = 15.0f;//2000.0f;
    private Vector2 zoomClamp = new Vector2(5.0f, 50.0f);



    private void Start()
    {
        cam = GetComponentInChildren<Camera>();
        camTransform = cam.transform;

        mouseX_pan = 0;
        mouseY_pan = 0;
        mouseX_rot = transform.eulerAngles.y;
        mouseY_rot = -transform.eulerAngles.x;
        zoom = -camTransform.localPosition.z;
    }

    private void Update()
    {
        if (Input.GetMouseButton(1))
        {
            LevelEditor.Instance.GetComponent<EditorUI>().ClosePopupMenu();
            StartCoroutine(Pan());
        }
        else if (Input.GetMouseButton((int)UnityEngine.UIElements.MouseButton.MiddleMouse))
        {
            LevelEditor.Instance.GetComponent<EditorUI>().ClosePopupMenu();
            Rotate();
        }
        else
        {
            Cursor.lockState = CursorLockMode.None;
        }

        if (Input.GetAxis("Mouse ScrollWheel") != 0)
        {
            LevelEditor.Instance.GetComponent<EditorUI>().ClosePopupMenu();
            Zoom();
        }
    }


    private System.Collections.IEnumerator Pan()
    {
        if (EditorUI.hoveringUI)
            yield break;

        mouseX_pan = 0;
        mouseY_pan = 0;

        yield return new WaitForSeconds(0.125f);

        if (Input.GetMouseButton(1))
        {
            Cursor.lockState = CursorLockMode.Locked;

            mouseX_pan = Input.GetAxis("Mouse X") * pan_sensitivity;// * Time.deltaTime;
            mouseY_pan = Input.GetAxis("Mouse Y") * pan_sensitivity;// * Time.deltaTime;
            transform.position += transform.right * -mouseX_pan + transform.up * -mouseY_pan;
            transform.position = new Vector3(Mathf.Clamp(transform.position.x, -LevelEditor.Instance.maxTiles.x, LevelEditor.Instance.maxTiles.x),
                                             Mathf.Clamp(transform.position.y, -LevelEditor.Instance.maxTiles.y, LevelEditor.Instance.maxTiles.y),
                                             Mathf.Clamp(transform.position.z, -LevelEditor.Instance.maxTiles.z, LevelEditor.Instance.maxTiles.z));
        }
    }

    private void Rotate()
    {
        if (EditorUI.hoveringUI)
            return;

        Cursor.lockState = CursorLockMode.Locked;

        mouseX_rot += Input.GetAxis("Mouse X") * rot_sensitivity;// * Time.deltaTime;
        mouseY_rot += Input.GetAxis("Mouse Y") * rot_sensitivity;// * Time.deltaTime;

        transform.rotation = Quaternion.Euler(-mouseY_rot, mouseX_rot, 0);
    }

    private void Zoom()
    {
        if (EditorUI.hoveringUI)
            return;

        zoom -= Input.GetAxis("Mouse ScrollWheel") * zoomSpeed;// * Time.deltaTime;
        zoom = Mathf.Clamp(zoom, zoomClamp.x, zoomClamp.y);
        camTransform.localPosition = new Vector3(camTransform.localPosition.x, camTransform.localPosition.y, -zoom);
    }

}