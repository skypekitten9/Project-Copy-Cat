using System;
using UnityEngine;

public class TileExtruder : MonoBehaviour
{

    public System.Collections.IEnumerator Extrude(Tile_Selectable target)
    {
        yield return new WaitForSeconds(0.1f);

        if (Input.GetMouseButton(0) == true)
        {

            if (LevelEditor.Instance.selectedTiles.Contains(target))
            {
                Debug.Log("Extruding");
            }


        }
    }
}
