using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraShake : MonoBehaviour
{
    float power;
    float duration;
    float slowDownAmount;
    float initialDuration;

    public bool shouldShake;

    Vector3 startPosition;

    Transform camera;

    void Start()
    {
        power = 0.25f;
        duration = 0.5f;
        slowDownAmount = 1.0f;
        initialDuration = duration;

        shouldShake = false;

        camera = gameObject.transform;
        startPosition = camera.localPosition;

    }

    // Update is called once per frame
    void Update()
    {
        if (shouldShake)
        {
            if (duration > 0)
            {
                camera.localPosition = startPosition + Random.insideUnitSphere * power;

                duration -= Time.deltaTime * slowDownAmount;
            }
            else
            {
                shouldShake = false;

                duration = initialDuration;

                camera.localPosition = startPosition;
            }
        }
    }

    public void ShakePlayer()
    {
        if (!shouldShake)
        {
            shouldShake = true;
        }
    }
}
