using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LockButton : MonoBehaviour
{
    public GameObject body;
    public Text buttonText;
    public PlaceOnPlane script;
     
    public void changeText()

    {   // Do nothing if the user has not tapped on the screen
        // to place the model yet
        if (!body.transform.GetChild(0).GetComponent<MeshRenderer>().enabled)
        {
            return;
        } 

        if(buttonText.text == "Lock Position")
        {
            buttonText.text = "Unlock Position";
            script.lockButtonClicked = true;

        }
       else
        {
            buttonText.text = "Lock Position";
            script.lockButtonClicked = false;
        }


    }
}
