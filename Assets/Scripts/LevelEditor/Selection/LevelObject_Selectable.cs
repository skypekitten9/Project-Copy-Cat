using UnityEngine;


[RequireComponent(typeof(Collider))]
public class LevelObject_Selectable : Selectable
{
    private LevelObjectManager levelObjectManager;

    public LevelObject LevelObject { get; set; }


    public void Start()
    {
        if (LevelEditor.Instance)
        {
            levelObjectManager = LevelEditor.Instance.GetComponent<LevelObjectManager>();
        }
    }


    public override void Select(bool multiple = false)
    {
        base.Select(multiple);

        GameObject boundingBox = Instantiate(levelObjectManager.LevelObjectBoundingBox);
        boundingBox.transform.localScale = GetComponent<Collider>().bounds.size / 2 + new Vector3(0.1f, 0.1f, 0.1f);
        boundingBox.transform.localPosition = GetComponent<Collider>().bounds.center;

        boundingBox.transform.rotation = this.transform.rotation;
        boundingBox.transform.parent = this.transform;

        LevelEditor.Instance.selectedLevelObject = this;
    }

    public override void Deselect()
    {
        base.Deselect();

        LevelEditor.Instance.selectedLevelObject = null;
        Destroy(this.transform.GetChild(this.transform.childCount - 1).gameObject);
    }
}

