using UnityEngine;

public class Selector : MonoBehaviour
{
    private Camera cam;


    void Start()
    {
        cam = Camera.main;
    }

    private void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            try
            {
                Ray ray = cam.ScreenPointToRay(Input.mousePosition);
                RaycastHit hit;

                if (Physics.Raycast(ray, out hit))
                {
                    if (hit.transform.GetComponent<Selectable>())
                    {
                        hit.transform.GetComponent<Selectable>().ToggleSelect();
                    }
                }
            }
            catch (System.Exception) { }
        }
    }

}
