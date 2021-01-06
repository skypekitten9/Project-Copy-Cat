using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StoryTrigger1 : MonoBehaviour
{

   public Message message;

    bool first = true;

    void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player" && first)
        {
            string name = message.hasName ? ChatHandler.Instance.Username + " " : "";

            first = false;

            ChatHandler.Instance.SendMessageToChat(name + message.rows[0], message.messageType);
            for (int i = 1; i < message.rows.Length; i++)
            {
                ChatHandler.Instance.SendMessageToChat(message.rows[i], message.messageType);
            }
            Destroy(gameObject);
        }

    }
}

