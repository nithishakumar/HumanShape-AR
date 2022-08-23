using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;
using UnityEngine.UI;

public class ModelPlacement : MonoBehaviour

{
    public bool GroundPlaneHitReceived { get; private set; }

    [Header("Augmentation Object")]
    [SerializeField] GameObject Model = null;

    [Header("UI Elements")]
    [SerializeField] GameObject SetParameters;
    [SerializeField] GameObject panel;
    Camera mMainCamera;

    void Start()
    {
        mMainCamera = VuforiaBehaviour.Instance.GetComponent<Camera>();
    }

    /// <summary>
    /// Adjusts augmentation in a desired way.
    /// Anchor is already placed by ContentPositioningBehaviour.
    /// So any augmentation on the anchor is also placed.
    /// </summary>
    public void OnContentPlaced()
    {
        Debug.Log("OnContentPlaced() called.");
        // Align content to the anchor
        Model.transform.localPosition = Vector3.zero;
        RotateTowardsCamera(Model);
        // Rotate the model to be vertically aligned to the y-axis and not tilted
        Model.transform.Rotate(new Vector3(0, 1, 0), 0f);
        SetParameters.SetActive(true);
    }

    public void OnTargetLost()
    {
        SetParameters.SetActive(false);
        panel.SetActive(false);
    }

    void RotateTowardsCamera(GameObject augmentation)
    {
        var lookAtPosition = mMainCamera.transform.position - augmentation.transform.position;
        lookAtPosition.y = 0;
        var rotation = Quaternion.LookRotation(lookAtPosition);
        augmentation.transform.rotation = rotation;
    }

}

  
