using UnityEngine;

public class PowerCable : MonoBehaviour
{
    public int MeshId { get; set; }
    [SerializeField] private Mesh[] cableModels;


    public void SetCableMesh(int index)
    {
        MeshId = index;
        GetComponent<MeshFilter>().mesh = cableModels[index];
    }
}
