using UnityEngine;

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
        lineRenderer.startWidth = 0.2f; 
        lineRenderer.endWidth = 0.2f;
        lineRenderer.enabled = false;

    }

    void Update()
    {
        if (PlayerManager.Instance == null)
            return;

        Vector3 targetDirection;

        Vector3 playerDirection = PlayerManager.Instance.transform.position - eye.position;
        Vector3 holoDirection = Vector3.positiveInfinity;

        if (GameManager.Instance.GetComponent<RecordPlayback>().HoloInstance != null)
            holoDirection = GameManager.Instance.GetComponent<RecordPlayback>().HoloInstance.transform.position - eye.position;

        targetDirection = Vector3.Magnitude(holoDirection) <= Vector3.Magnitude(playerDirection) ? holoDirection : playerDirection;

        float step = Time.deltaTime * turningSpeed;
        Vector3 rotationDir = Vector3.RotateTowards(transform.forward, new Vector3(targetDirection.x, targetDirection.y, targetDirection.z), step, 0);
        transform.eulerAngles = Quaternion.LookRotation(rotationDir).eulerAngles;

        firingRate -= Time.deltaTime;

        Physics.Raycast(eye.position, targetDirection, out hit, firingRange, layerMask);

        if (hit.transform != null)
        {
            switch (hit.transform.gameObject.layer)
            {
                case 9:     //Player
                    lineRenderer.enabled = true;
                    lineRenderer.SetPosition(1, hit.transform.position);
                    if (firingRate <= 0)
                    {
                        GameManager.Instance.DamagePlayer(damage);

                        firingRate = reloadFire;
                    }
                    
                    break;

                case 10:    //Hologram
                    lineRenderer.enabled = true;
                    lineRenderer.SetPosition(1, hit.transform.position);
                    //debugColor = new Color(0, 0.2f, 0.7f);
                    break;

                default:
                    lineRenderer.enabled = false;
                    //debugColor = Color.white;
                    break;
            }

            //Debug.DrawLine(eye.position, hit.point, debugColor);
        }
        else
        {
            lineRenderer.enabled = false;
        }
    }

}
