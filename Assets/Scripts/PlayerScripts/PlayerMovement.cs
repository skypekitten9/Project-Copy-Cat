﻿using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices.WindowsRuntime;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    //public LayerMask groundMask;

    private Rigidbody rb;
    private AudioSource audio;
    private Vector3 velocity;

    private bool isGrounded;
    public bool isKnockedBack;

    private float knockbackTimer;
    private float resetKnockbackTimer;

    private float walkTimer;
    private float resetWalkTimer;

    [SerializeField] private float speed = 7.0f;
    [SerializeField] private float jumpSpeed = 10.0f;

    private void Start()
    {
        isKnockedBack = false;
        rb = GetComponent<Rigidbody>();
        audio = gameObject.GetComponent<AudioSource>();

        knockbackTimer = 0f;
        resetKnockbackTimer = 1f;

        walkTimer = 0f;
        resetWalkTimer = 0.3f;
    }

    private void FixedUpdate()
    {
        if (knockbackTimer <= 0 && !ChatHandler.Instance.chatBox.isFocused)
        {
            Move();
        }
    }

    private void Update()
    {
        walkTimer -= Time.deltaTime;
        isGrounded = Physics.Raycast(transform.position + new Vector3(0, 0.1f, 0), -Vector3.up, 0.2f);
        //if (Input.GetAxis("Mouse ScrollWheel") > 0 && isGrounded)
        if (Input.GetButtonDown("Jump") && isGrounded && !ChatHandler.Instance.chatBox.isFocused)
            Jump();

        knockbackTimer -= Time.deltaTime;
    }

    private void Move()
    {
        if (walkTimer <= 0 && Input.GetAxisRaw("Horizontal") != 0  && isGrounded|| walkTimer <= 0 && Input.GetAxisRaw("Vertical") != 0 && isGrounded)
        {
            audio.PlayOneShot(SFXManager.Instance.GetRandomWalkingSound());

            walkTimer = resetWalkTimer;
        }

        float x = Input.GetAxisRaw("Horizontal");
        float z = Input.GetAxisRaw("Vertical");

        velocity = (transform.right * x + transform.forward * z).normalized * speed;

        //rb.MovePosition(transform.position + velocity * Time.deltaTime);
        rb.velocity = new Vector3(velocity.x, rb.velocity.y, velocity.z);

    }

    void Jump()
    {
        rb.velocity = jumpSpeed * Vector3.up;
        isGrounded = false;
        //rb.AddForce(new Vector3(0, jumpForce, 0), ForceMode.Impulse);
        //jumpTimer = 0;
        //velocity.y = Mathf.Sqrt(jumpHeight * -2f * gravity);
    }

    public void KnockBack(Vector3 knockbackSource)
    {
        knockbackTimer = resetKnockbackTimer;

        rb.velocity = Vector3.zero;

        Vector3 direction = -1 * (knockbackSource - transform.position).normalized;

        rb.AddForce(500 * direction);
        rb.AddForce(250 * transform.up);

    }
}
