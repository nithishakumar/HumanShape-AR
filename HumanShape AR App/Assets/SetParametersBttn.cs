﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;


public class SetParametersBttn : MonoBehaviour

{
    [SerializeField] GameObject planefinder;

    [Header("UI Elements")]
    [SerializeField] GameObject panel;
    [SerializeField] TextMeshProUGUI buttonText;


    public void openPanel()

    {
        // panel is not active already and we are trying to open it
        if (!panel.activeSelf)
        {   // disable script
            panel.SetActive(true);
            buttonText.text = "Done";
            planefinder.SetActive(false);
        }
        // panel is active already and we are trying to close it
        else
        {   panel.SetActive(false);
            buttonText.text = "Set Parameters";
            planefinder.SetActive(true);
        }

       
    }


    
}
