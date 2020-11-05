using UnityEngine;

public class PowerCable : MonoBehaviour
{
    [SerializeField] private Mesh[] cableModels;


    public void SetCableMesh(int index)
    {
        GetComponent<MeshFilter>().mesh = cableModels[index];
    }
}
