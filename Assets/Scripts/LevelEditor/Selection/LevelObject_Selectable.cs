using UnityEngine;


public class LevelObject_Selectable : Selectable
{
    private LevelObjectManager levelObjectManager;

    public LevelObject LevelObject { private get; set; }


    public void Start()
    {
        levelObjectManager = LevelEditor.Instance.GetComponent<LevelObjectManager>();
    }


    public override void Select(bool multiple = false)
    {
        base.Select(multiple);

        GameObject boundingBox = Instantiate(levelObjectManager.LevelObjectBoundingBox);
        boundingBox.transform.localScale = LevelObject.Bounds;
        boundingBox.transform.localPosition = this.transform.position + new Vector3((LevelObject.Bounds.x % 2 == 0) ? 1.0f : 0, 0, (LevelObject.Bounds.z % 2 == 0) ? 1.0f : 0);


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

