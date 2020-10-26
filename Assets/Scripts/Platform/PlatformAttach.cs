using UnityEngine;

public class PlatformAttach : MonoBehaviour
{

    private void OnTriggerStay(Collider other)
    {
        RecordPhase recordPhase = GameManager.Instance.GetComponent<RecordManager>().recordPhase;
        if (recordPhase != RecordPhase.PlayingBack && recordPhase != RecordPhase.Rewinding)
        {
            //Debug.Log("On platform");

            other.transform.SetParent(transform.GetChild(0));
        }
    }


    private void OnTriggerExit(Collider other)
    {
        Debug.Log("Off platform");

        other.transform.parent = null;
    }

}
