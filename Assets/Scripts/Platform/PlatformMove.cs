using System;
using UnityEngine;

public class PlatformMove : MonoBehaviour
{
    private RecordManager recordManager;

    private Transform moveable;

    [SerializeField] float speed = 1.0f;
    [SerializeField] bool loop = false;

    private Vector3[] keyPoints;
    private int currentKeyPointIndex = 0;

    private float t = 0;

    private bool stop = true;


    private void Start()
    {
        moveable = transform.GetChild(0);

        Transform keyPointsParent = transform.GetChild(1);
        keyPoints = new Vector3[keyPointsParent.childCount];
        for (int i = 0; i < keyPoints.Length; i++)
            keyPoints[i] = keyPointsParent.GetChild(i).position;


        StartPlatform();
    }


    public void StartPlatform()
    {
        stop = false;
    }

    public void StopPlatform()
    {
        stop = true;
    }


    private void Update()
    {
        recordManager = GameManager.Instance.GetComponent<RecordManager>();

        if (recordManager.recordPhase != RecordPhase.Rewinding && recordManager.recordPhase != RecordPhase.PlayingBack)
        {
            if (stop == false)
            {
                Move();
            }
        }
    }

    private void Move()
    {
        t += Time.deltaTime * speed / Vector3.Distance(keyPoints[currentKeyPointIndex], keyPoints[(currentKeyPointIndex + 1) % keyPoints.Length]);

        moveable.position = Vector3.Lerp(keyPoints[currentKeyPointIndex], keyPoints[(currentKeyPointIndex + 1) % keyPoints.Length], t);

        if (t >= 1.0f)
        {
            t = 0;
            currentKeyPointIndex = (currentKeyPointIndex + 1) % keyPoints.Length;
            if (currentKeyPointIndex == 0 && loop == false)
            {
                stop = true;
            }
        }
    }

}