using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ChatHandler : MonoBehaviour
{

    private static ChatHandler instance = null;
    public static ChatHandler Instance { get { return instance; } }

    public void Awake()
    {
        if (instance != null && instance != this)
            Destroy(this.gameObject);
        else
            instance = this;

    }

    public string Username { get; private set; }

    public int maxMessages = 25;

    public GameObject chatPanel, textObject;
    public InputField chatBox;
    private Canvas chatCanvas;

    public Color playerMessageColor, infoColor, cursedColor;

    private float chatTimer;
    private float resetChatTimer;

    [SerializeField] List<Message> messageList = new List<Message>();

    void Start()
    {
        Username = System.Environment.UserName;
        Username = char.ToUpper(Username[0]) + Username.Substring(1);
        chatCanvas = gameObject.GetComponentInChildren<Canvas>();

        chatTimer = 2f;
        resetChatTimer = chatTimer;
    }

    void Update()
    {
        chatTimer -= Time.deltaTime;

        if (chatTimer <= 0 && !chatBox.isFocused)
        {
            chatCanvas.GetComponent<CanvasGroup>().alpha -= 0.005f;
        }
        else
        {
            chatCanvas.GetComponent<CanvasGroup>().alpha = 1f;
        }

        if (Input.GetKeyDown(KeyCode.Return) && chatBox.text == "")
        {
            chatBox.enabled = true;
            chatBox.ActivateInputField();
        }

        if (chatBox.IsActive())
        {
            if (chatBox.text != "")
            {
                if (Input.GetKeyDown(KeyCode.Return))
                {
                    chatTimer = resetChatTimer;

                    SendMessageToChat(Username + ": " + chatBox.text, Message.MessageType.playerMessage);
                    chatBox.text = "";
                    chatBox.DeactivateInputField();
                    chatBox.enabled = false;
                }
            }
            else
            {
                if (!chatBox.isFocused && Input.GetKeyDown(KeyCode.Return))
                {
                    chatTimer = resetChatTimer;
                    chatBox.ActivateInputField();
                    chatBox.enabled = true;
                }
            }
        }
    }

    public void SendMessageToChat(string text, Message.MessageType messageType)
    {
        chatBox.enabled = true;
        chatTimer = resetChatTimer;
        if (messageList.Count >= maxMessages)
        {
            Destroy(messageList[0].textObject.gameObject);
            messageList.Remove(messageList[0]);
        }
        Message newMessage = new Message();

        newMessage.text = text;

        GameObject newText = Instantiate(textObject, chatPanel.transform);

        newMessage.textObject = newText.GetComponent<Text>();

        newMessage.textObject.text = newMessage.text;
        newMessage.textObject.color = MessageTypeColor(messageType);

        messageList.Add(newMessage);

        if (newMessage.text == Username + ": /help")
        {
            SendMessageToChat("P̷͓̲̯̦̱̟͓̦̳͕̪̮̺̌̾̓͛ͅļ̵̫̩̭̲̪̤̳̬̺̘̻̬̈́́̽̽̀̆̒̊͠a̶̡̮̩͕̺̤͓͍̼͍͙̱͍̳͋̐͜͝y̸̬̱͇̯̝͍̑͂̈́̓͒̉̈́̀͒̽̏ę̴̨̦̱͇̘̻̫͔̘̻̗̥̪̈́̿̈́̈́̊̑̅r̵͙̟̘̣̤͗͌̓̓͂̿̈́͗͘̕͝͠͝ ̵̛̥̺͖̖̹̬̹̤̼̮̗̳̽̌̔͌͛̽́̅͜2̷̧͎̲̲̳̪̼̣͖͚̣̫͖̜̭́͑̉̒̒͒̾͗̇͆̽͛̎̀̕: T̸̢̛͉̹̜̜̙̱͈̰̯̅̒̉̔͆̚h̴̫͍̯̰̘̤̫͙͒̌̆̾è̴̙͇̮͖̙̥̀̀́ŗ̶̨͕̪̦͇̩͚̏̅̈́̒̌͑͝ę̴̥͙̩̗̱̘̣̓̿̅̀̒͊̀͠ ̵̣̣̺̯̂į̶̛̪͙̞͈̈́͒̾̓͐s̶̜̞̮̥̝͓̑̿͆̿ͅ ̷̜̍̑̇̍͊n̷͖̑̓͂͛̾̀̀͊̌̕ơ̶̛͎̲̪͔̞͇̟̯̹̗̈́͂ ̷̧̻͔̝͓̀ĥ̷͓̙͉̓̈́̀̑͘̕͠e̴̩̭͆̅̾l̶̛̩͓̻͎̍̽̂́͊p̵̡̘̩̮̀̈́̓̂̐̚͠.̸̨̹̬̦̓̍̎͋̈́͆͠", Message.MessageType.player2);
        }

        if (newMessage.text == Username + ": Who are you?")
        {
            SendMessageToChat("P̵̨̢͉̦̾͐͗̉̅̀͛̈́̀l̶̢̬͖͉̥͒̈́̑̀̅̔̽̒͘͜ͅå̴̡̛̟̫͉̬̰̥͈̟͋͐͛ͅy̴̼̟̯̙̎̄̽̕ȇ̷̹̞̝̋̈͊͊̆̉̇͝͠r̷̙͖̖͐̍͐2̷̧͎̳̫͇͈͍̱͇̌̄͋̅͐̅̌̕͘:̷̨͈̖͉̬̘̯͆͒́͗́̍͠ ̴̡̭̜̑́͜Ḯ̵͓̯͛͐̃͗̎̈́̈́̚͠'̵̢̩̮̝͗͋͑̓͘̕m̵̪̥̭̠̊ ̸̡̤̹̈̈́̉̌͌̋̂͒̄͘ȳ̶̨͈̯̱̮̦͉̝̊̒͛́ő̷͈͚͕͖͊ͅu̷̡̙̗͇͇̲͕̻͛͋̒͋̈̋̄̈̓r̷̜̳̭̩̫̹͔̠̩̀̂̂̅̊̀̽̒͝ ̵̛̲͂̀̈́̀̆͝p̴̮̫̣̒̈̍͛̚͝͝ạ̷͈̼̖̜͛͐̎̽̇̕ͅr̸̡̥͉͍̺̯͐̿͝t̴̼̞̱̼͎̫̞̎̓n̵͙̞̹̻̼̞͌̂̊̔́̅̚̚ͅe̶̮͓͕̘̲̥̪̳̬̿̋̅̇͌̌̑̓͌͝r̸̨̄͘.̸̤̈", Message.MessageType.player2);
        }

        if (newMessage.text == Username + ": Where are you?")
        {
            SendMessageToChat("P̵̰̝̓̃̊̆́̈́̄l̴̟͔̈́̃ą̷̼̦̰̰̺̹͕̬̾ẙ̴̳͙͍̰̹̙̜̚ẻ̶̛̯̰̩͖̪̄̓̋̄͊̒͂͠r̵̛͕̩̙̲̓̓͆͒̚2̶̡̢̛͈̠͉͔̺̙͖̜̑̔̕͘̕͝:̷̖̹͇͎̺̿̃̍̏̚ͅ ̵̛̞̹̹̼͍͈̜̊́̊̐̀̉͘͜Í̵͕̼̹'̴̛̠͚̪͙̭͎̯̅̐̊͆̍̽̋̈́m̴̗̱̺͕͈͚͚͌̆̋̉ͅ ̸̨̧͉̦̱̗͎͇͔͌̋ẅ̶̢̠́ͅa̷̫̼͊t̵̛͉̺͖̥̟̲́̑͆̾̓͆͐͝͠c̷̩̭̮̬͚̳͆͊͛̄̄̍̋̋́͜ͅh̵̢̥̱̫̪̎̐̅́į̴̤͔̩̬͖̜̲͈̦̈́̄̏͒͘͠n̸̨̥̦̆ͅg̶̞̮͍͖̹̈͋̊̓̄́ ̷̧̬̩̺̥̥͕̀̈́̇͊̌͌̆͑͋ͅͅy̶̡͓̞̳̋o̶̖̟̺̲̱̥̼̺̰͖̓̇͗̃ü̴͕̥̺̑̂̊͛́̍.̵̧̛͖̣̗͓̝̪͑̿̈", Message.MessageType.player2);
        }
    }

    Color MessageTypeColor(Message.MessageType messageType)
    {
        Color color = infoColor;

        switch (messageType)
        {
            case Message.MessageType.playerMessage:
                color = playerMessageColor;
                break;
            case Message.MessageType.system:
                color = infoColor;
                break;
            case Message.MessageType.player2:
                color = cursedColor;
                break;
        }

        return color;
    }

}

[System.Serializable]
public class Message
{
    public string text;
    public string[] additionalText;
    public bool hasName;
    public Text textObject;
    public MessageType messageType;

    public enum MessageType
    {
        playerMessage = 1,
        system = 2,
        player2
    }
}

