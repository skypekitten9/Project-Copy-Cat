using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine;

public class Mine : MonoBehaviour
{
    // Start is called before the first frame update
    ParticleSystem vfx;
    bool isTriggered;

    void Start()
    {
        vfx = gameObject.GetComponentInChildren<ParticleSystem>();
        isTriggered = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (!vfx.isPlaying && isTriggered)
        {
            Destroy(gameObject);
        }
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player")
        {
            vfx.Play();
            other.gameObject.GetComponent<PlayerMovement>().KnockBack(transform.position);
            PlayerManager.Instance.DamagePlayer(40);
            isTriggered = true;
        }
    }
}
