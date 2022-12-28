using UnityEngine;
using Vuforia;
using Vuforia.UnityRuntimeCompiled;

public class ModelPlacement : MonoBehaviour
{
    public bool GroundPlaneHitReceived { get; private set; }

    [Header("Augmentation Object")]
    [SerializeField] GameObject Model = null;

    Camera mMainCamera;
    bool mIsPlaced;
    int mAutomaticHitTestFrameCount;
    MeshRenderer mModelRenderer;

    void Start()
    {
        mMainCamera = VuforiaBehaviour.Instance.GetComponent<Camera>();
        mModelRenderer = Model.GetComponent<MeshRenderer>();
    }

    void Update()
    {
        if (!mIsPlaced)
            RotateTowardsCamera(Model);

        if (mIsPlaced)
        {
            SnapProductToMousePosition();
        }
        
    }

    void LateUpdate()
    {
        // The AutomaticHitTestFrameCount is assigned the Time.frameCount in the
        // OnAutomaticHitTest() callback method. When the LateUpdate() method
        // is then called later in the same frame, it sets GroundPlaneHitReceived
        // to true if the frame number matches. For any code that needs to check
        // the current frame value of GroundPlaneHitReceived, it should do so
        // in a LateUpdate() method.
        GroundPlaneHitReceived = mAutomaticHitTestFrameCount == Time.frameCount;

        if (!mIsPlaced)
        {
            // The Chair should only be visible if the following conditions are met:
            // 1. Target Status is Tracked, Extended Tracked or Limited
            // 2. Ground Plane Hit was received for this frame
            var isVisible = VuforiaBehaviour.Instance.DevicePoseBehaviour.TargetStatus.IsTrackedOrLimited() && GroundPlaneHitReceived;
            mModelRenderer.enabled = isVisible;
        }
    }
    void SnapProductToMousePosition()
    {
        if (TouchHandler.sIsSingleFingerDragging || VuforiaRuntimeUtilities.IsPlayMode() && Input.GetMouseButton(0))
        {
            if (!UnityRuntimeCompiledFacade.Instance.IsUnityUICurrentlySelected())
            {
                var cameraToPlaneRay = mMainCamera.ScreenPointToRay(Input.mousePosition);

                if (Physics.Raycast(cameraToPlaneRay, out var cameraToPlaneHit))
                    Model.transform.position = cameraToPlaneHit.point;
            }
        }
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

        mIsPlaced = true;
    }

    /// <summary>
    /// Displays a preview of the chair at the location pointed by the device.
    /// It is registered to PlaneFinderBehaviour.OnAutomaticHitTest.
    /// </summary>
    public void OnAutomaticHitTest(HitTestResult result)
    {
        mAutomaticHitTestFrameCount = Time.frameCount;

        if (!mIsPlaced)
        {
            // Content is not placed yet. So we place the augmentation at HitTestResult
            // position to provide a visual feedback about where the augmentation will be placed.
            Model.transform.position = result.Position;
        }
    }

    void RotateTowardsCamera(GameObject augmentation)
    {
        var lookAtPosition =  mMainCamera.transform.position - augmentation.transform.position;
        lookAtPosition.y = 0;
        var rotation = Quaternion.LookRotation(lookAtPosition);
        augmentation.transform.rotation = rotation;
    }
}
