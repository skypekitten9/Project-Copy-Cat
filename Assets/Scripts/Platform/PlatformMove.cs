using System;
using UnityEngine;

public class PlatformMove : MonoBehaviour
{
    [SerializeField] float speed = 1.0f;
    [SerializeField] bool loop = false;

    private Vector3[] keyPoints;
    private float t;


    private void Start()
    {
        Transform keyPointsParent = transform.GetChild(1);
        keyPoints = new Vector3[keyPointsParent.childCount];
        for (int i = 0; i < keyPoints.Length; i++)
            keyPoints[i] = keyPointsParent.GetChild(i).position;

        //StartCoroutine(Move());
    }

    /*
    public System.Collections.IEnumerator Move()
    {
        Transform moveable = transform.GetChild(0);
        Vector3 oldPos;

        float t = 0;

        for (int i = 0; i < keyPoints.Length - 1 + Convert.ToInt32(loop); i++)
        {
            while (t <= 1)
            {
                if (GameManager.Instance.GetComponent<RecordManager>().recordPhase == RecordPhase.Rewinding || GameManager.Instance.GetComponent<RecordManager>().recordPhase == RecordPhase.PlayingBack)
                {
                    yield return new WaitForFixedUpdate();
                    continue;
                }

                t += Time.deltaTime * speed / Vector3.Distance(keyPoints[i], keyPoints[(i + 1) % keyPoints.Length]);

                oldPos = moveable.position;
                moveable.position = Vector3.Lerp(keyPoints[i], keyPoints[(i + 1) % keyPoints.Length], t);

                yield return new WaitForFixedUpdate();
            }

            t = 0;
            moveable.position = keyPoints[(i + 1) % keyPoints.Length];
        }

        if (loop) StartCoroutine(Move());
    }
    */
}
