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

    public Color playerMessageColor, infoColor;

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

        if (chatBox.text != "")
        {
            if (Input.GetKeyDown(KeyCode.Return))
            {
                chatTimer = resetChatTimer;

                SendMessageToChat(Username + ": " + chatBox.text, Message.MessageType.playerMessage);
                chatBox.text = "";
                chatBox.DeactivateInputField();
            }
        }
        else
        {
            if (!chatBox.isFocused && Input.GetKeyDown(KeyCode.Return))
            {
                chatTimer = resetChatTimer;

                chatBox.ActivateInputField();
            }
        }

    }

    public void SendMessageToChat(string text, Message.MessageType messageType)
    {
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
        system = 2
    }
}

