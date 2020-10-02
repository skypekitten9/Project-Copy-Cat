using UnityEngine;

public class PlatformAttach : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        Debug.Log("On platform");
        other.transform.parent = transform.GetChild(0);
    }

    private void OnTriggerExit(Collider other)
    {
        Debug.Log("Off platform");
        other.transform.parent = null;

    }
}
