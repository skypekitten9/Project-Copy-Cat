using UnityEngine;

public class TileExtruder : MonoBehaviour
{
    private float mouseX_extrude = 0;
    private float mouseY_extrude = 0;

    private float extrude_sensitivity = 0.4f;//20.0f;


    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Equals) || Input.GetKeyDown(KeyCode.KeypadPlus))
        {
            Extrude(1);
        }
        else if (Input.GetKeyDown(KeyCode.Minus) || Input.GetKeyDown(KeyCode.KeypadMinus))
        {
            Extrude(-1);
        }
    }


    public System.Collections.IEnumerator Extrude(Tile_Selectable target)
    {
        GetComponent<EditorUI>().ClosePopupMenu();

        yield return new WaitForSeconds(0.125f);

        LevelEditor.Instance.GetComponent<Selector>().CanChangeCursor = false;
        while (Input.GetMouseButton(0))
        {
            mouseX_extrude += Input.GetAxis("Mouse X") * extrude_sensitivity;// * Time.deltaTime;
            mouseY_extrude += Input.GetAxis("Mouse Y") * extrude_sensitivity;// * Time.deltaTime;

            Transform cam = Camera.main.transform;
            Vector3 normal = (Vector3)target.GetDirectionVector();
            float extudeDir = Vector3.Dot(cam.right * mouseX_extrude, normal) +
                              Vector3.Dot(cam.up * mouseY_extrude, normal);

            int direction = 0;
            if (extudeDir > 1.0f)
            {
                direction = 1;
            }
            else if (extudeDir < -1.0f)
            {
                direction = -1;
            }

            if (direction != 0)
            {
                mouseX_extrude = 0;
                mouseY_extrude = 0;

                Extrude(direction);
            }

            yield return new WaitForFixedUpdate();
        }
        LevelEditor.Instance.GetComponent<Selector>().CanChangeCursor = true;
    }

    public void Extrude(int direction)
    {
        for (int i = LevelEditor.Instance.selectedTiles.Count - 1; i >= 0; i--)
        {
            LevelEditor.Instance.selectedTiles[i].ExtrudeTile(direction);
        }
    }

}
