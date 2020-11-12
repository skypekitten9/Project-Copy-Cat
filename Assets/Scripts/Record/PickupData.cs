using UnityEngine;

public class PickupData : MonoBehaviour
{
    public PickupData(float time, params GameObject[] pickupObject)
    {
        this.Time = time;
        this.PickupObject = pickupObject;
    }

    public float Time { private set; get; }
    public GameObject[] PickupObject { get; private set; }
}
