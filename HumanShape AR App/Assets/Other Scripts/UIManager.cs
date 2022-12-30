using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using Vuforia;
using UnityEngine.SceneManagement;

public class UIManager : MonoBehaviour
{
    [SerializeField] GameObject panel;

    [Header("UI Elements")]
    [SerializeField] Text Instructions = null;

    const string MODEL_PLACEMENT_HINT = "Tap to place Model";
    const string MODEL_CONTROLS = "Set parameters to modify model";
    const string POINT_DEVICE_TO_GROUND_HINT = "Point device towards ground";
    const string POINT_DEVICE_TO_FLAT_SURFACE_HINT = "Point device towards sitting point";
    const string MOVE_TO_ANOTHER_PLACE_HINT = "Move to get better tracking";
    const string SETTING_PARAMETERS_STATUS = "Setting parameters";

    PointerEventData mPointerEventData;
    DevicePoseManager mDevicePoseManager;
    ModelPlacement mModelPlacement;
    PlaneFinderBehaviour mPlaneFinder;


    bool mIsAnchorTracking;

    /// <summary>
    /// The Surface Indicator should only be visible if the following conditions are true:
    /// 1. Tracking Status is Tracked or Limited (sufficient for Hit Test Anchors)
    /// 2. Ground Plane Hit was received for this frame
    /// 3. There's no active touches
    /// </summary>
    bool SurfaceIndicatorVisibilityConditionsMet => mDevicePoseManager.TargetStatus.IsTrackedOrLimited() &&
                                                    mModelPlacement.GroundPlaneHitReceived &&
                                                    Input.touchCount == 0;

    void Start()
    {
        mDevicePoseManager = FindObjectOfType<DevicePoseManager>();
        mPlaneFinder = FindObjectOfType<PlaneFinderBehaviour>();
        mModelPlacement = FindObjectOfType<ModelPlacement>();
    }

    void LateUpdate()
    {   
        if (mModelPlacement.GroundPlaneHitReceived && mDevicePoseManager.TargetStatus.IsTrackedAndNormal())
        {
            // We got an automatic hit test this frame, hide the onscreen reticle when we get a hit test
         
            if (mIsAnchorTracking)
                Instructions.text = MODEL_CONTROLS;
            else
                Instructions.text = MODEL_PLACEMENT_HINT;
        }
        else
        {
            if(mModelPlacement.GroundPlaneHitReceived)
            {
                Instructions.text = MOVE_TO_ANOTHER_PLACE_HINT;
            }
            else if(SceneManager.GetActiveScene().name == "Seated Adult")
            {
                Instructions.text = POINT_DEVICE_TO_FLAT_SURFACE_HINT;
            }
            else
            {
                Instructions.text = POINT_DEVICE_TO_GROUND_HINT;
            }
            
        }

        if (panel.activeInHierarchy)
        {
            Instructions.text = SETTING_PARAMETERS_STATUS;
        }

    }

    // Called by Anchor_Placement's DefaultObserverEventHandler.OnTargetFound()
    public void OnAnchorFound()
    {
        mIsAnchorTracking = true;
    }

    // Called by Anchor_Placement's DefaultObserverEventHandler.OnTargetLost()
    public void OnAnchorLost()
    {
        mIsAnchorTracking = false;
    }
}
