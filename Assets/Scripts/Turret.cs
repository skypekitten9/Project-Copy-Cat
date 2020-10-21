﻿using UnityEngine;

public class Turret : MonoBehaviour
{
    [SerializeField] private Transform eye;
    private float turningSpeed = 6.0f;
    private float firingRate = 0.2f;
    private float reloadFire;
    private float firingRange = 5f;
    private int damage = 2;

    private RaycastHit hit;
    LineRenderer lineRenderer;

    Vector3 distanceToTarget;
    Vector3 destination;

    [SerializeField] private LayerMask layerMask;

    private Color debugColor = Color.white;

    private void Start()
    {
        reloadFire = firingRate;

        lineRenderer = gameObject.GetComponent<LineRenderer>();
        lineRenderer.SetPosition(0, new Vector3(transform.position.x, transform.position.y + 0.1f, transform.position.z));
        lineRenderer.startWidth = 0.02f; 
        lineRenderer.endWidth = 0.02f;
        lineRenderer.enabled = false;
    }

    void Update()
    {
        if (PlayerManager.Instance == null)
            return;

        Vector3 targetDirection;

        Vector3 playerDirection = PlayerManager.Instance.transform.position - eye.position;
        Vector3 holoDirection = Vector3.positiveInfinity;

        if (GameManager.Instance.GetComponent<RecordManager>().HoloInstance != null)
            holoDirection = GameManager.Instance.GetComponent<RecordManager>().HoloInstance.transform.position - eye.position;

        targetDirection = Vector3.Magnitude(holoDirection) <= Vector3.Magnitude(playerDirection) ? holoDirection : playerDirection;

        float step = Time.deltaTime * turningSpeed;
        Vector3 rotationDir = Vector3.RotateTowards(transform.forward, new Vector3(targetDirection.x, targetDirection.y, targetDirection.z), step, 0);
        transform.eulerAngles = Quaternion.LookRotation(rotationDir).eulerAngles;

        firingRate -= Time.deltaTime;

        Physics.Raycast(eye.position, targetDirection, out hit, firingRange, layerMask);
        
        if (hit.transform != null)
        {
            //gameObject.transform.Find("ParticleEffectTurret").position = hit.point;
            switch (hit.transform.gameObject.layer)
            {
                case 9:     //Player
                    EnableTargetLazer();
                    if (firingRate <= 0)
                    {
                        DamageManager.Instance.playerHit = true;

                        firingRate = reloadFire;
                    }
                    
                    break;

                case 10:    //Hologram
                    EnableTargetLazer();
                    //debugColor = new Color(0, 0.2f, 0.7f);
                    break;

                default:
                    DisableTargetLazer();
                    //debugColor = Color.white;
                    break;
            }

            //Debug.DrawLine(eye.position, hit.point, debugColor);
        }
        else
        {
            DisableTargetLazer();
        }
    }

    void EnableTargetLazer()
    {
        lineRenderer.enabled = true;
        lineRenderer.SetPosition(1, hit.transform.position);
        gameObject.transform.Find("ParticleEffectTurret").gameObject.SetActive(true);
    }

    void DisableTargetLazer()
    {
        lineRenderer.enabled = false;
        gameObject.transform.Find("ParticleEffectTurret").gameObject.SetActive(false);
    }

}
