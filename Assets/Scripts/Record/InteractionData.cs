
using UnityEngine;

class InteractionData
{
    public InteractionData(float time, params GameObject[] interactionObjects)
    {
        this.Time = time;
        this.InteractionObjects = interactionObjects;
    }

    public float Time { private set; get; }
    public GameObject[] InteractionObjects { get; private set; }
}

