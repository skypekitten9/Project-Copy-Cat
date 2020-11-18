using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StoryTrigger1 : MonoBehaviour
{

    //[SerializeField] private string message; 
    //[SerializeField] private custom messages and enum planned

    bool first = true;

    void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player" && first)
        {
            first = false;
            ChatHandler.Instance.SendMessageToChat(ChatHandler.Instance.Username+ " has joined.\nP̶̢̮̠͇͎̑l̵͈̰͇͓͊̚͜͝ā̷̭ȳ̵̱̭e̵̺̪̒͠r̷̨̡͚̫̝͒ ̵̮̅̊̐͂̍2̴̘̪͐̈́̑ ̷̖̀̄̇̀ḩ̴̩̓͋̓͠͝ȃ̶͉̝̃s̵̥̉̀ ̶̢̡̺̬̰̈̇̀̊͘j̸̧͙̟͕̔̉̃̅͠ͅo̴͕͙͕̍̎̚ǐ̴̤̙̰̙̔ͅn̶͎͈͚̕ȩ̸̰̗̹̀̏̋̓d̵͉̬̑̄̉̏.̸̨͈̝̣̀͠", Message.MessageType.system);
            Destroy(gameObject);
        }

    }
}
