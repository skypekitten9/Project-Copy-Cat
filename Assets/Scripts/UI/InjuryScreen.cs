using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(Image))]
public class InjuryScreen : MonoBehaviour
{
    Image image = null;

    PlayerManager playerStats;
    private void Awake()
    {
        image = GetComponent<Image>();
    }

    private void Start()
    {
        playerStats = GameObject.Find("Player(Clone)").GetComponent<PlayerManager>();
    }

    private void Update()
    {
        Color tempColour = image.color;
        float opacity = 1 - (float)playerStats.playerHealth / 100;
        tempColour.a = opacity;
        image.color = tempColour;
    }

}
