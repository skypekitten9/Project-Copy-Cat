using UnityEngine;

public class TileExtruder : MonoBehaviour
{

    public void Extrude()
    {      
        int direction = 0;
        if (Input.GetAxis("Mouse ScrollWheel") > 0f)
        {
            direction = 1;
        }
        else if (Input.GetAxis("Mouse ScrollWheel") < 0f)
        {
            direction = -1;
        }

        if (direction != 0)
        {
            for (int i = LevelEditor.Instance.selectedTiles.Count - 1; i >= 0; i--)
            {
                LevelEditor.Instance.selectedTiles[i].ExtrudeTile(direction);
            }
        }
    }

}
