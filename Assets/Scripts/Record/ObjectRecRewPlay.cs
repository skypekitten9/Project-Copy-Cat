using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;


public class ObjectRecRewPlay : MonoBehaviour
{
    private RecordManager recordManger;

    private Stopwatch stopwatch = new Stopwatch();
    private List<TranslationData> translationData;
    //private List<InteractionData> interactionData;


    private void Start()
    {
        recordManger = GameManager.Instance.GetComponent<RecordManager>();
    }


    public System.Collections.IEnumerator Record()
    {
        UnityEngine.Debug.Log($"Record - {gameObject.name}");

        translationData = new List<TranslationData>();
        stopwatch.Restart();

        while (stopwatch.ElapsedMilliseconds < recordManger.RecordTime)
        {
            if (stopwatch.ElapsedMilliseconds >= (1 / recordManger.NodeSpawnRate * 1000) * translationData.Count)
            {
                translationData.Add(new TranslationData(stopwatch.ElapsedMilliseconds, gameObject.transform.position, gameObject.transform.rotation));
            }

            yield return new WaitForFixedUpdate();
        }

        stopwatch.Stop();
        StartCoroutine(Rewind());
    }

    private System.Collections.IEnumerator Rewind()
    {
        UnityEngine.Debug.Log($"Rewind - {gameObject.name}");

        float tolerance = recordManger.RewindSpeed;
        int nodeCounter = translationData.Count - 1;

        while (nodeCounter > 0)
        {
            while (Vector3.Distance(gameObject.transform.position, translationData[nodeCounter - 1].Position) >= tolerance)
            {
                Vector3 direction = Vector3.Normalize(translationData[nodeCounter - 1].Position - gameObject.transform.position);
                float t = -(Vector3.Distance(gameObject.transform.position, translationData[0].Position) / Vector3.Distance(translationData[translationData.Count - 1].Position, translationData[0].Position)) + 1;

                gameObject.transform.position += direction * recordManger.RewindSpeed;
                gameObject.transform.rotation = Quaternion.Lerp(translationData[translationData.Count - 1].Rotation, translationData[0].Rotation, t);

                yield return new WaitForSeconds(Time.deltaTime);
            }
            nodeCounter--;
        }

        StartCoroutine(Playback());
    }

    private System.Collections.IEnumerator Playback()
    {
        UnityEngine.Debug.Log($"Playback - {gameObject.name}");

        if (GetComponent<Rigidbody>() != null)
        {
            GetComponent<Rigidbody>().isKinematic = true;
            GetComponent<Rigidbody>().useGravity = false;
            GetComponent<Rigidbody>().velocity = Vector3.zero;
        }

        yield return new WaitForSeconds(1.0f);
        float timeCorrection = 0.0f;
        stopwatch.Restart();

        for (int i = 0; i < translationData.Count - 1; i++)
        {
            while (stopwatch.ElapsedMilliseconds + timeCorrection < translationData[i].Time)
            {
                if (gameObject == null)
                    yield break;

                Vector3 distance = translationData[i + 1].Position - translationData[i].Position;

                gameObject.transform.position += distance * Time.deltaTime * recordManger.NodeSpawnRate * 0.9f;
                gameObject.transform.rotation = Quaternion.Lerp(translationData[i + 1].Rotation, translationData[i].Rotation,
                    Time.time / translationData[i].Time);
                yield return new WaitForFixedUpdate();
            }
            timeCorrection += (stopwatch.ElapsedMilliseconds - translationData[i + 1].Time);
        }

        stopwatch.Stop();

        if (GetComponent<Rigidbody>() != null)
        {
            GetComponent<Rigidbody>().isKinematic = false;
            GetComponent<Rigidbody>().useGravity = true;
            GetComponent<Rigidbody>().velocity = Vector3.zero;
        }
    }


    private void OnDrawGizmos()
    {
        if (translationData != null)
        {
            for (int i = 0; i < translationData.Count; i++)
            {
                Gizmos.color = Color.white;
                Gizmos.DrawSphere(translationData[i].Position, 0.15f);

                if (i < translationData.Count - 1)
                    Gizmos.DrawLine(translationData[i].Position, translationData[i].Position + translationData[i].Rotation * Vector3.forward);
            }

        }
    }
}
