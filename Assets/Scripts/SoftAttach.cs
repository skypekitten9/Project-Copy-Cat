using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoftAttach : MonoBehaviour
{
    [SerializeField] bool xLock = false;
    [SerializeField] bool yLock = false;
    [SerializeField] bool zLock = false;

    bool hasParent = false;
    private Vector3 absolutePos;


    private void Awake()
    {
        hasParent = transform.parent != null;

        if (hasParent)
            absolutePos = transform.parent.localPosition + transform.localPosition;
    }
    void LateUpdate()
    {
        if (hasParent)
        {
            float X = xLock ? absolutePos.x : transform.position.x;
            float Y = yLock ? absolutePos.y : transform.position.y;
            float Z = zLock ? absolutePos.z : transform.position.z;

            transform.position = new Vector3(X, Y, Z);
        }
    }
}
