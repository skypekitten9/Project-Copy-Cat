using UnityEngine;


public class LevelObject_Selectable : Selectable
{
    LevelObjectManager levelObjectManager;

    private void Start()
    {
        levelObjectManager = LevelEditor.Instance.GetComponent<LevelObjectManager>();
    }


    public override void Select(bool multiple = false)
    {
        base.Select(multiple);

        GameObject boundingBox = Instantiate(levelObjectManager.LevelObjectBoundingBox);
        boundingBox.transform.localScale = new Vector3(1, 1, 1); //temp (store objects bounds in levelObject-file)
        boundingBox.transform.localPosition = this.transform.position;
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

