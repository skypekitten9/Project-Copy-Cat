﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectReset : MonoBehaviour
{
    Transform originalTransform;
    Rigidbody body;
    Vector3 originalPos;
    public int id;

    void Start()
    {
        originalPos = new Vector3(gameObject.transform.position.x, gameObject.transform.position.y, gameObject.transform.position.z);
        originalTransform = gameObject.transform;
        body = gameObject.GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ResetToOriginalPosition()
    {
        gameObject.transform.position = originalPos;
        body.velocity = new Vector3(0, 0, 0);
    }
}
