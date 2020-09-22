using System.Collections;
using System.Collections.Generic;
using UnityEditor.Build.Reporting;
using UnityEngine;

public class Turret : MonoBehaviour
{
    [SerializeField] private Transform eye;
    private float turningSpeed = 1.0f;

    private RaycastHit hit;
    [SerializeField] private LayerMask layerMask;

    private Color debugColor = Color.white;


    void Update()
    {
        Vector3 targetDirection;

        Vector3 playerDirection = PlayerManager.Instance.transform.position - eye.position;
        Vector3 holoDirection = Vector3.positiveInfinity;

        if (GameManager.Instance.GetComponent<RecordPlayback>().HoloInstance != null)
            holoDirection = GameManager.Instance.GetComponent<RecordPlayback>().HoloInstance.transform.position - eye.position;

        targetDirection = Vector3.Magnitude(holoDirection) <= Vector3.Magnitude(playerDirection) ? holoDirection : playerDirection;

        float step = Time.deltaTime * turningSpeed;
        Vector3 rotationDir = Vector3.RotateTowards(transform.forward, new Vector3(targetDirection.x, 0, targetDirection.z), step, 0);
        transform.eulerAngles = Quaternion.LookRotation(rotationDir).eulerAngles;


        Physics.Raycast(eye.position, targetDirection, out hit, Mathf.Infinity, layerMask);


        switch (hit.transform.gameObject.layer)
        {
            case 9:     //Player
                debugColor = Color.blue;
                break;

            case 10:    //Hologram
                debugColor = new Color(0, 0.2f, 0.7f);
                break;

            default:
                debugColor = Color.white;
                break;
        }

        Debug.DrawLine(eye.position, hit.point, debugColor);



        //if (hit.transform.gameObject.layer == LayerMask.NameToLayer("Hologram"))
        //{
        //    Debug.DrawRay(eye.position, targetDirection, Color.blue);
        //}
        //else if (hit.transform.gameObject.layer == LayerMask.NameToLayer("Player"))
        //{
        //    Debug.DrawRay(eye.position, targetDirection, Color.white);
        //}
        //else
        //    Debug.DrawRay(eye.position, targetDirection, Color.black);
    }
}
