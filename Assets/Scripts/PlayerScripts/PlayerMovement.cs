using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    public CharacterController controller;

    public Transform groundCheck;

    public LayerMask groundMask;

    private Vector3 velocity;

    [SerializeField] private bool isGrounded;

    [SerializeField] private float speed;
    [SerializeField] private float gravity;
    [SerializeField] private float groundDistance;
    [SerializeField] private float jumpHeight;

    void Start()
    {
        controller = gameObject.GetComponent<CharacterController>();
        groundCheck = transform.Find("GroundCheck").transform;

        speed = 12f;
        gravity = -19.64f;
        groundDistance = 0.4f;
        jumpHeight = 3f;

    }

    void Update()
    {
        isGrounded = Physics.CheckSphere(groundCheck.position, groundDistance, groundMask);

        if (isGrounded && velocity.y < 0)
        {
            velocity.y = -3f;
        }

        Movement();

        if (Input.GetButtonDown("Jump") && isGrounded)
        {
            Jump();
        }
    }

    void Movement()
    {
        float x = Input.GetAxis("Horizontal");
        float z = Input.GetAxis("Vertical");

        Vector3 move = transform.right * x + transform.forward * z;

        controller.Move(move * speed * Time.deltaTime);

        velocity.y += gravity * Time.deltaTime;

        controller.Move(velocity * Time.deltaTime);
    }

    void Jump()
    {
        velocity.y = Mathf.Sqrt(jumpHeight * -2f * gravity);
    }
}
