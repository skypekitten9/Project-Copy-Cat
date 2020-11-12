using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class HighlightKey : MonoBehaviour
{
    public KeyCode key;
    Color32 defaultColor, highlightColor;
    // Start is called before the first frame update
    void Start()
    {
        defaultColor = gameObject.GetComponent<TextMeshProUGUI>().color;
        highlightColor = new Color32(255, 128, 0, 255);
    }

    // Update is called once per frame
    void Update()
    {
        
        if (Input.GetKeyDown(key))
        {
            gameObject.GetComponent<TextMeshProUGUI>().color = highlightColor;
        }
        if (Input.GetKeyUp(key))
        {
            gameObject.GetComponent<TextMeshProUGUI>().color = defaultColor;
        }
        
    }
}
