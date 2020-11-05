using System.Collections.Generic;
using UnityEngine;

public class PowerCableGrid : MonoBehaviour
{
    private Dictionary<GameObject, Vector3Int> powerCables;


    private void Awake()
    {
        powerCables = new Dictionary<GameObject, Vector3Int>();
    }

    public void SetCable(GameObject instance)
    {
        Vector3Int value = WorldPosToIndex(instance.transform.position, instance.transform.rotation);

        if (powerCables.ContainsKey(instance))
        {
            powerCables[instance] = value;
        }
        else
        {
            powerCables.Add(instance, value);
        }
        UpdateCables();
    }

    public void RemoveCable(GameObject instance)
    {
        powerCables.Remove(instance);
        UpdateCables();
    }

    public void UpdateCables()
    {
        Debug.Log("Updating cables");
        foreach (var cable in powerCables)
        {
            int meshIndex = 0;

            foreach (var cable2 in powerCables)
            {
                if (cable.Key == cable2.Key)
                    continue;

                Vector3 cableUp = cable.Key.transform.up;
                Vector3 cableRight = cable.Key.transform.right;
                Vector3 cableForward = cable.Key.transform.forward;

                if ((cable2.Value == cable.Value - cableForward && cableUp == cable2.Key.transform.up) || (cable2.Value == cable.Value && cableForward == cable2.Key.transform.up))   //-f
                {
                    meshIndex += 8;
                    continue;
                }
                if ((cable2.Value == cable.Value + cableRight && cableUp == cable2.Key.transform.up) || (cable2.Value == cable.Value && -cableRight == cable2.Key.transform.up))   //r
                {
                    meshIndex += 4;
                    continue;
                }
                if ((cable2.Value == cable.Value + cableForward && cableUp == cable2.Key.transform.up) || (cable2.Value == cable.Value && -cableForward == cable2.Key.transform.up))  //f
                {
                    meshIndex += 2;
                    continue;
                }
                if ((cable2.Value == cable.Value - cableRight && cableUp == cable2.Key.transform.up) || (cable2.Value == cable.Value && cableRight == cable2.Key.transform.up))   //-r
                {
                    meshIndex += 1;
                    continue;
                }
            }
            if (meshIndex < 16)
            {
                cable.Key.GetComponent<PowerCable>().SetCableMesh(meshIndex);
            }
        }
    }


    private Vector3Int WorldPosToIndex(Vector3 worldPos, Quaternion rotation)
    {
        Vector3 direction = rotation * Vector3.up;

        if (direction == Vector3.right)
            worldPos += Vector3.right;
        else if (direction == Vector3.left)
            worldPos += Vector3.left;
        else if (direction == Vector3.up)
            worldPos += Vector3.up;
        else if (direction == Vector3.down)
            worldPos += Vector3.down;
        else if (direction == Vector3.forward)
            worldPos += Vector3.forward;
        else if (direction == Vector3.back)
            worldPos += Vector3.back;

        worldPos /= 2.0f;
        return new Vector3Int((int)worldPos.x, (int)worldPos.y, (int)worldPos.z);
    }


    private void OnDrawGizmos()
    {
        if (powerCables != null)
        {
            foreach (var cable in powerCables)
            {
                Vector3 position = cable.Key.transform.position + cable.Key.transform.up * 0.1f;
                Vector3 cableRight = cable.Key.transform.right;
                Vector3 cableForward = cable.Key.transform.forward;

                Gizmos.color = Color.red;
                Gizmos.DrawLine(position, position + cableRight);
                Gizmos.color = Color.blue;
                Gizmos.DrawLine(position, position + cableForward);
            }
        }
    }
}
