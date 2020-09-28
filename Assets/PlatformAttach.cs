using UnityEngine;

public class PlatformAttach : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        Debug.Log("On platform");
        if (other.gameObject == PlayerManager.Instance.gameObject)
        {
            PlayerManager.Instance.transform.parent = transform.GetChild(0);
        }
    }

    private void OnTriggerExit(Collider other)
    {
        Debug.Log("Off platform");
        if (other.gameObject == PlayerManager.Instance.gameObject)
        {
            PlayerManager.Instance.transform.parent = null;
        }
    }
}
