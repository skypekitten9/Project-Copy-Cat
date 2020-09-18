using System.Collections;
using System.Collections.Generic;
using UnityEditorInternal;
using UnityEngine;
using UnityEngine.UIElements;

public class DoorScript : MonoBehaviour
{
    Transform doorTransform;

    Vector3 startPos;
    Vector3 openPos;
    Vector3 openingSpeed;

    bool isOpen;

    public int doorID;

    void Start()
    {
        doorTransform = gameObject.transform;

        startPos = doorTransform.position;
        openPos = startPos + new Vector3(0, doorTransform.localScale.y, 0);
        openingSpeed = new Vector3(0, 0.10f, 0);

        isOpen = false;
    }

    void Update()
    {
        if (isOpen)
        {
            if (doorTransform.position.y < openPos.y)
            {
                doorTransform.position += openingSpeed;
            }
        }

        if (!isOpen)
        {
            if (doorTransform.position.y > startPos.y)
            {
                doorTransform.position -= openingSpeed;
            }
        }

        TestDoor();
    }

    //Manuel testning av att öppna och stänga dörrar.
    void TestDoor()
    {
        if (Input.GetKeyDown(KeyCode.T))
        {
            isOpen = true;
        }

        if (Input.GetKeyDown(KeyCode.Y))
        {
            isOpen = false;
        }
    }

    //Dörren tittar ifall dens channel har uppdaterats.
    public void ListenToChannel()
    {
        if (TestLevelManager.Instance.interactablesArray[doorID] == true)
        {
            isOpen = true;
        }
        else
        {
            isOpen = false;
        }
    }
}
