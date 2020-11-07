using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using TMPro;

public class MenuButton : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
    public TMP_Text theText;
    public void OnPointerEnter(PointerEventData eventData)
    {
        theText.color = Color.black; //Or however you do your color
    }
    public void OnPointerExit(PointerEventData eventData)
    {
        theText.color = Color.white; //Or however you do your color 
    }
}