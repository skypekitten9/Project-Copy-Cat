using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class LevelObjectManager : MonoBehaviour
{
    private LevelObject selectedUIObject;
    private GameObject levelObjectInstance;

    private Camera cam;

    private bool dragging = false;

    //[SerializeField] private GameObject cursorIcon;
    //public Vector3 cursorIconOffset = new Vector3(20.0f, -20.0f, 0);


    private void Awake()
    {
        cam = Camera.main;
        //cursorIcon.GetComponent<Image>().enabled = false;
    }


    private void Update()
    {
        if (dragging)
        {
            if (Input.GetMouseButton(0) == true)
                MoveSelectedObject();
            else
                DeselectUIObject();
        }
    }



    public IEnumerator SelectUIObject(LevelObject levelObject)
    {
        yield return new WaitForSeconds(0.1f);

        if (Input.GetMouseButton(0))
        {
            dragging = true;

            selectedUIObject = levelObject;
            levelObjectInstance = Instantiate(levelObject.Prefab, Input.mousePosition, Quaternion.identity, null);
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
                    }
                    break;
                case TileDirection.Y_negative:
                    if (selectedUIObject.CanPlaceOnCeiling == true)
                    {
                        levelObjectInstance.transform.localRotation = Quaternion.LookRotation(/*Vector3.forward,*/ hit.transform.GetComponent<Tile_Selectable>().GetDirectionVector());
                        levelObjectInstance.transform.localEulerAngles += new Vector3(90.0f, 0, 0);
                        levelObjectInstance.transform.position = hit.transform.position;
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
                    }
                    break;

            }
        }
    }

    private void DeselectUIObject()
    {
        dragging = false;
        selectedUIObject = null;
    }
}
