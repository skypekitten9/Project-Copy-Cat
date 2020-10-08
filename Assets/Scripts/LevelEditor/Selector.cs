using UnityEngine;

public class Selector : MonoBehaviour
{
    private Camera cam;

    private bool clicked = false;
    private float clickTimer = 0;
    private float clickDelay = 0.5f;

    void Start()
    {
        cam = Camera.main;
    }

    private void Update()
    {
        if (clicked == true && clickTimer < clickDelay)
        {
            clickTimer += Time.deltaTime;
        }


        if (Input.GetMouseButtonDown(0))
        {
            Ray ray = cam.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;

            if (Physics.Raycast(ray, out hit))
            {
                Selectable target = hit.transform.GetComponent<Selectable>();

                if (target)
                {
                    DetectDoubleClick(target);
                    StartCoroutine(ToggleSelect(target));
                }
            }
        }
    }


    private System.Collections.IEnumerator ToggleSelect(Selectable target)
    {
        yield return new WaitForSeconds(0.1f);

        if (Input.GetMouseButton(0) == false)
        {
            if (target.isSelected)
                target.DeselectOne();
            else
                target.SelectOne();
        }
    }

    private void DetectDoubleClick(Selectable target)
    {
        if (clicked)
        {
            if (clickTimer < clickDelay)
            {
                Debug.Log("double clicked");
            }
            clicked = false;
        }
        else
        {
            clicked = true;
        }
        clickTimer = 0;
    }


    public void DeselectAllTiles(Tile_Selectable target)
    {
        foreach (Tile_Selectable tile in LevelEditor.Instance.selectedTiles)
        {
            if (tile != target)
            {
                tile.DeselectOne();
            }
        }

        LevelEditor.Instance.selectedTiles.Clear();
    }
}
