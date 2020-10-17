using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class LevelObjectManager : MonoBehaviour
{
    private Transform levelObjectsParent;

    private LevelObject selectedUIObject;
    private GameObject levelObjectInstance;

    [SerializeField] private GameObject levelObjectBoundingBox;
    public GameObject LevelObjectBoundingBox { get { return levelObjectBoundingBox; } }

    private Camera cam;

    [SerializeField] private GameObject cursorIcon;
    private bool objectPlaced = false;


    private void Awake()
    {
        cursorIcon.SetActive(false);
        levelObjectsParent = new GameObject("LevelObjects").transform;
        cam = Camera.main;
    }


    private void Update()
    {
        if (selectedUIObject != null)
        {
            MoveSelectedObject();

            if (objectPlaced)
                cursorIcon.SetActive(false);
            else
                cursorIcon.transform.position = Input.mousePosition;

            if (Input.GetMouseButtonDown(0))
                PlaceLevelObject(!objectPlaced);
        }

        if (Input.GetKey(KeyCode.Escape))
            PlaceLevelObject(true);
    }


    public void SelectUIObject(LevelObject levelObject)
    {
        LevelEditor.Instance.GetComponent<Selector>().DeselectAllTiles();
        objectPlaced = false;

        cursorIcon.GetComponent<Image>().sprite = levelObject.Icon;
        cursorIcon.SetActive(true);

        selectedUIObject = levelObject;
        levelObjectInstance = Instantiate(levelObject.Prefab, Input.mousePosition, Quaternion.identity, levelObjectsParent);
    }


    private void MoveSelectedObject()
    {
        Ray ray = cam.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;


        if (Physics.Raycast(ray, out hit) && hit.transform.parent.GetComponent<Tile_Selectable>())
        {
            Tile_Selectable target = hit.transform.parent.GetComponent<Tile_Selectable>();

            TileDirection tileDir = target.TileDir;
            switch (tileDir)
            {
                case TileDirection.Y_positive:
                    if (selectedUIObject.CanPlaceOnGround == true)
                    {
                        levelObjectInstance.transform.localRotation = Quaternion.LookRotation(target.GetDirectionVector());
                        levelObjectInstance.transform.localEulerAngles += new Vector3(90.0f, 0, 0);
                        levelObjectInstance.transform.position = target.transform.position;

                        objectPlaced = true;
                    }
                    break;
                case TileDirection.Y_negative:
                    if (selectedUIObject.CanPlaceOnCeiling == true)
                    {
                        levelObjectInstance.transform.localRotation = Quaternion.LookRotation(target.GetDirectionVector());
                        levelObjectInstance.transform.localEulerAngles += new Vector3(90.0f, 0, 0);
                        levelObjectInstance.transform.position = target.transform.position;

                        objectPlaced = true;
                    }
                    break;

                case TileDirection.X_positive:
                case TileDirection.X_negative:
                case TileDirection.Z_positive:
                case TileDirection.Z_negative:
                    if (selectedUIObject.CanPlaceOnWall == true)
                    {
                        levelObjectInstance.transform.localRotation = Quaternion.LookRotation(target.GetDirectionVector());
                        levelObjectInstance.transform.localEulerAngles += new Vector3(90.0f, 0, 0);
                        levelObjectInstance.transform.position = target.transform.position;

                        objectPlaced = true;
                    }
                    break;
            }
        }
    }

    private void PlaceLevelObject(bool destroy)
    {
        cursorIcon.SetActive(false);

        if (destroy)
            GameObject.Destroy(levelObjectInstance);

        objectPlaced = false;
        selectedUIObject = null;
    }
}
