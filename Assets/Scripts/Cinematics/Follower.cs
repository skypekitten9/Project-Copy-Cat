using PathCreation;
using UnityEngine;

public class Follower : MonoBehaviour
{
    public static bool Following { get; private set; } = false;

    private PathCreator path;
    private float speed = 7.0f;

    private float t = 0;


    private void Awake()
    {
        Following = true;
        path = transform.parent.GetComponentInChildren<PathCreator>();
    }

    private void Update()
    {
        if (t >= path.path.length)
        {
            Following = false;
            Destroy(this.gameObject);
        }

        t += GetSpeed() * Time.deltaTime;
        transform.position = path.path.GetPointAtDistance(t, EndOfPathInstruction.Stop);
        Vector3 v = path.path.GetRotationAtDistance(t, EndOfPathInstruction.Stop).eulerAngles;
        transform.rotation = Quaternion.Euler(0, v.y, 0);
    }


    float startStopDist = 7.0f;
    private float GetSpeed()
    {
        if (t < startStopDist)
        {
            return t / startStopDist * (speed - 1) + 1;
        }
        else if (t >= path.path.length - startStopDist)
        {
            return (path.path.length - t) / startStopDist * (speed - 1) + 1;
        }
        else
        {
            return speed;
        }
    }
}
