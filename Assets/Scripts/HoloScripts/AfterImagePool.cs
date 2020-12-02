using UnityEngine;

class AfterImagePool : MonoBehaviour
{
    public float AfterImageFadeTime { get; } = 600.0f;    //ms
    private float afterImageSpawnRate = 20.0f;    // times per second

    private float afterImagesTimer = 0;
    private int afterImagesIndex = 0;

    private Transform afterImagesParent;
    private GameObject[] afterImagesPool;
    [SerializeField] private Material afterImageMaterial;
    public Material AfterImageMaterial { get { return afterImageMaterial; } }
    [SerializeField] private GameObject afterImageMesh;


    private void Start()
    {
        afterImagesParent = new GameObject("AfterImages").transform;
        afterImagesPool = new GameObject[(int)(afterImageSpawnRate * (AfterImageFadeTime / 1000) + 2)];

        for (int i = 0; i < afterImagesPool.Length; i++)
        {
            afterImagesPool[i] = Instantiate(afterImageMesh);
            afterImagesPool[i].transform.parent = afterImagesParent;
        }

        DontDestroyOnLoad(afterImagesParent);
    }


    private void Update()
    {
        if (GameManager.Instance.GetComponent<RecordManager>().HoloInstance != null && GameManager.Instance.GetComponent<RecordManager>().recordPhase != RecordPhase.Rewinding)
        {
            if (afterImagesTimer >= 1.0f / afterImageSpawnRate)
            {
                SpawnAfterImage(afterImagesIndex);
                afterImagesIndex = ++afterImagesIndex % afterImagesPool.Length;
                afterImagesTimer = 0;
            }
            else
            {
                afterImagesTimer += Time.deltaTime;
            }
        }
    }

    private void SpawnAfterImage(int index)
    {
        afterImagesPool[index].transform.rotation = GameManager.Instance.GetComponent<RecordManager>().HoloInstance.transform.rotation;
        afterImagesPool[index].GetComponent<AfterImage>().Enable();
        afterImagesPool[index].transform.position = GameManager.Instance.GetComponent<RecordManager>().HoloInstance.transform.position + new Vector3(0, 0, 0);

    }
}
