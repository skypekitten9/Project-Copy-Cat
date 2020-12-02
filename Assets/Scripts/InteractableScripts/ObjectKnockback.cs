using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectKnockback : MonoBehaviour
{
    Rigidbody body;

    private float knockbackTimer;
    private float resetKnockbackTimer;

    void Start()
    {
        body = gameObject.GetComponent<Rigidbody>();

        knockbackTimer = 0f;
        resetKnockbackTimer = 1f;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Knockback(Vector3 knockbackSource)
    {
        body.velocity = Vector3.zero;

        Vector3 direction = -1 * (knockbackSource - transform.position).normalized;

        body.AddForce(500 * direction);
        body.AddForce(250 * transform.up);
    }
}
