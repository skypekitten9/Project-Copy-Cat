using UnityEngine;

public class PowerCable : MonoBehaviour
{
    [SerializeField] private Mesh[] cableModels;

    private MeshFilter meshFilter;


    private void OnEnable()
    {
        meshFilter = GetComponent<MeshFilter>();
    }

    void Update()
    {
        meshFilter.mesh = cableModels[5];
    }
}
