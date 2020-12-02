using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine;

public class Mine : MonoBehaviour
{
    // Start is called before the first frame update
    ParticleSystem vfx;
    AudioSource audio;
    bool isTriggered;

    void Start()
    {
        vfx = gameObject.GetComponentInChildren<ParticleSystem>();
        audio = gameObject.GetComponent<AudioSource>();
        isTriggered = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (!vfx.isPlaying && isTriggered && !audio.isPlaying)
        {
            Destroy(gameObject);
        }
    }

    void OnTriggerEnter(Collider other)
    {
        if (!isTriggered)
        {
            if (other.tag == "Player")
            {
                vfx.Play();
                SFXManager.Instance.PlaySound(audio, SFXManager.Sound.mineBlast, 0.85f);
                other.gameObject.GetComponent<PlayerMovement>().KnockBack(transform.position);
                PlayerManager.Instance.DamagePlayer(40);
                isTriggered = true;
            }

            if (other.tag == "Pickupable" && other.gameObject.GetComponent<ObjectKnockback>() != null)
            {
                vfx.Play();
                SFXManager.Instance.PlaySound(audio, SFXManager.Sound.mineBlast, 0.85f);
                other.gameObject.GetComponent<ObjectKnockback>().Knockback(transform.position);
                isTriggered = true;
            }
        }
        if (other.tag == "Pickupable")
        {
            vfx.Play();
            SFXManager.Instance.PlaySound(audio, SFXManager.Sound.mineBlast, 0.85f);
            //other.gameObject.GetComponent<PlayerMovement>().KnockBack(transform.position);
            isTriggered = true;
        }
    }
}
