﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    public LayerMask groundMask;

    private Rigidbody rb;
    private Vector3 velocity;

    private bool isGrounded;
    private float groundDistance;

    [SerializeField] private float speed = 7.0f;
    [SerializeField] private float jumpSpeed = 10.0f;

    private void Start()
    {
        rb = GetComponent<Rigidbody>();
        groundDistance = GetComponent<Collider>().bounds.extents.y;
    }

    private void FixedUpdate()
    {
        Move();
    }

    private void Update()
    {
        isGrounded = Physics.Raycast(transform.position, -Vector3.up, groundDistance + 0.2f);
        //if (Input.GetAxis("Mouse ScrollWheel") > 0 && isGrounded)
        if (Input.GetButtonDown("Jump") && isGrounded)
            Jump();
    }

    private void Move()
    {
        float x = Input.GetAxisRaw("Horizontal");
        float z = Input.GetAxisRaw("Vertical");

        velocity = (transform.right * x + transform.forward * z).normalized * speed;

        //rb.MovePosition(transform.position + velocity * Time.deltaTime);
        rb.velocity = new Vector3(velocity.x, rb.velocity.y, velocity.z);
    }

    void Jump()
    {
        Debug.Log("Jump!");
        rb.velocity = jumpSpeed * Vector3.up;
        //rb.AddForce(new Vector3(0, jumpForce, 0), ForceMode.Impulse);
        //jumpTimer = 0;
        //velocity.y = Mathf.Sqrt(jumpHeight * -2f * gravity);
    }
}
