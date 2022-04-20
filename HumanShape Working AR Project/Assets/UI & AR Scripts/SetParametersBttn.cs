using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;

public class SetParametersBttn : MonoBehaviour

{
    public GameObject panel;
    bool isPanelActive = false;
    public Text buttonText;
    public GameObject body;
    public PlaceOnPlane script;

    public void openPanel()

    {   // do nothing if the user has not tapped on the screen
        // to place the model yet
        if(!body.transform.GetChild(0).GetComponent<MeshRenderer>().enabled)
        {
            return;
        }
        
        // panel is not active already and we are trying to open it
        if (!isPanelActive)
        {   // disable script
            panel.SetActive(true);
            buttonText.text = "Done";
            isPanelActive = true;
            script.lockButtonClicked = true;
        }
        // panel is active already and we are trying to close it
        else
        {   panel.SetActive(false);
            buttonText.text = "Set Parameters";
            isPanelActive = false;
            script.lockButtonClicked = false;
        }

       
    }


    
}
