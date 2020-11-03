using UnityEngine;

public class VisualConnection : MonoBehaviour
{
    private LineRenderer line;
    public GameObject From { private get; set; }
    public GameObject To { private get; set; }


    private void OnEnable()
    {
        line = GetComponent<LineRenderer>();
    }

    private void Update()
    {
        line.SetPosition(0, From.GetComponent<Collider>().bounds.center);
        line.SetPosition(1, To.GetComponent<Collider>().bounds.center);
    }
}