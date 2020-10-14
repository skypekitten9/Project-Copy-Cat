using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class LevelObjectManager : MonoBehaviour
{
    private Transform levelObjectsParent;

    private LevelObject selectedUIObject;
    private GameObject levelObjectInstance;

    private Camera cam;

    private bool dragging = false;
    private bool objectPlaced = false;


    private void Awake()
    {
        levelObjectsParent = new GameObject("LevelObjects").transform;
        cam = Camera.main;
    }


    private void Update()
    {
        if (dragging)
        {
            if (Input.GetMouseButton(0) == true)
                MoveSelectedObject();
            else
                DropLevelObject(!objectPlaced);

            if (Input.GetKey(KeyCode.Escape))
                DropLevelObject(true);
        }
    }



    public IEnumerator SelectUIObject(LevelObject levelObject)
    {
        yield return new WaitForSeconds(0.1f);

        if (Input.GetMouseButton(0))
        {
            dragging = true;

            selectedUIObject = levelObject;
            levelObjectInstance = Instantiate(levelObject.Prefab, Input.mousePosition, Quaternion.identity, levelObjectsParent);
        }
    }

    private void MoveSelectedObject()
    {
        Ray ray = cam.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;

        if (Physics.Raycast(ray, out hit) && hit.transform.GetComponent<Tile_Selectable>())
        {
            TileDirection tileDir = hit.transform.GetComponent<Tile_Selectable>().TileDir;
            switch (tileDir)
            {
                case TileDirection.Y_positive:
                    if (selectedUIObject.CanPlaceOnGround == true)
                    {
                        levelObjectInstance.transform.localRotation = Quaternion.LookRotation(/*Vector3.forward,*/ hit.transform.GetComponent<Tile_Selectable>().GetDirectionVector());
                        levelObjectInstance.transform.localEulerAngles += new Vector3(90.0f, 0, 0);
                        levelObjectInstance.transform.position = hit.transform.position;

                        objectPlaced = true;
                    }
                    break;
                case TileDirection.Y_negative:
                    if (selectedUIObject.CanPlaceOnCeiling == true)
                    {
                        levelObjectInstance.transform.localRotation = Quaternion.LookRotation(/*Vector3.forward,*/ hit.transform.GetComponent<Tile_Selectable>().GetDirectionVector());
                        levelObjectInstance.transform.localEulerAngles += new Vector3(90.0f, 0, 0);
                        levelObjectInstance.transform.position = hit.transform.position;

                        objectPlaced = true;
                    }
                    break;

                case TileDirection.X_positive:
                case TileDirection.X_negative:
                case TileDirection.Z_positive:
                case TileDirection.Z_negative:
                    if (selectedUIObject.CanPlaceOnWall == true)
                    {
                        levelObjectInstance.transform.localRotation = Quaternion.LookRotation(/*Vector3.forward,*/ hit.transform.GetComponent<Tile_Selectable>().GetDirectionVector());
                        levelObjectInstance.transform.localEulerAngles += new Vector3(90.0f, 0, 0);
                        levelObjectInstance.transform.position = hit.transform.position;

                        objectPlaced = true;
                    }
                    break;
            }
        }
    }

    private void DropLevelObject(bool destroy)
    {
        objectPlaced = false;
        dragging = false;

        if (destroy)
        {
            GameObject.Destroy(levelObjectInstance);
        }
        selectedUIObject = null;
    }
}
