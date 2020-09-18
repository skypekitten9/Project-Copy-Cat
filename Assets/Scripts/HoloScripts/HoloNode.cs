using UnityEngine;

public enum Action { None, Interact}

public class HoloNode
{
    public HoloNode(Vector3 position, Quaternion rotation, float timePassed, Action action)
    {
        this.Position = position;
        this.Rotation = rotation;
        this.Time = timePassed;
        this.HoloAction = action;
    }

    public Vector3 Position { get; private set; }
    public Quaternion Rotation { get; private set; }
    public float Time { private set; get; }
    public Action HoloAction { private set; get; }
}