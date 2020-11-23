using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StoryTrigger1 : MonoBehaviour
{

   [SerializeField] private Message message;

    bool first = true;

    void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player" && first)
        {

            string name = message.hasName ? ChatHandler.Instance.Username + " " : "";

            first = false;
            ChatHandler.Instance.SendMessageToChat(name + message.text, message.messageType);
            foreach (string s in message.additionalText)
            {
                ChatHandler.Instance.SendMessageToChat(s, message.messageType);
            }
            Destroy(gameObject);
        }

    }
}

