using UnityEngine;

public enum Action { None, Jump, Interact}

public class HoloNode
{
    public HoloNode(Vector3 position, float timePassed, Action action)
    {
        this.Position = position;
        this.Time = timePassed;
        this.HoloAction = action;
    }

    public Vector3 Position { get; private set; }
    public float Time { private set; get; }
    public Action HoloAction { private set; get; }
}