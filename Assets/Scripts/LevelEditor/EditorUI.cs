using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EditorUI : MonoBehaviour
{
    public static bool hoveringUI = false;


    [SerializeField] private GameObject objectsPanel;
    //[SerializeField] private RectTransform objectsPanelIcon;
    private RectTransform objectsRectTransform;
    private bool objectsPanelVisible = false;
    private bool canShowHideObjectsPanel = true;


    private void Start()
    {
        objectsRectTransform = objectsPanel.GetComponent<RectTransform>();

        if (objectsPanelVisible == false)
            objectsRectTransform.localPosition -= new Vector3(objectsRectTransform.rect.width, 0, 0);
        //else
            //objectsPanelIcon.localScale = new Vector3(-1, 1, 1);
    }


    public void PointerEnterUI()
    {
        hoveringUI = true;
    }
    public void PointerExitUI()
    {
        hoveringUI = false;
    }

    public void HideShowObjectsPanel()
    {
        if (canShowHideObjectsPanel)
        {
            int direction = objectsPanelVisible ? -1 : 1;
            StartCoroutine(AnimateObjectsPanel(direction));
            objectsPanelVisible = !objectsPanelVisible;
        }
    }
    private IEnumerator AnimateObjectsPanel(int direction)
    {
        canShowHideObjectsPanel = false;
        int frames = 20;
        float distance = (float)objectsRectTransform.rect.width / frames;
        for (int i = 0; i < frames; i++)
        {
            objectsRectTransform.localPosition += new Vector3(distance * direction, 0, 0);
            yield return new WaitForFixedUpdate();
        }
        canShowHideObjectsPanel = true;
        //objectsPanelIcon.localScale = Vector3.Scale(objectsPanelIcon.localScale, new Vector3(-1, 1, 1));
    }

}
