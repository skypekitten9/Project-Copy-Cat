using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DeathFieldScript : MonoBehaviour
{
    AudioSource audio;

    void Start()
    {
        audio = gameObject.GetComponent<AudioSource>();
    }

    void Update()
    {

    }

    void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player")
        {
            PlayerManager.Instance.DamagePlayer(100);
        }

        if (other.tag == "Pickupable")
        {
            other.gameObject.GetComponent<ObjectReset>().ResetToOriginalPosition();
        }
    }
}
