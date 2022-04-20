using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.UI;
using UnityEngine.EventSystems;

/// <summary>
/// Listens for touch events and performs an AR raycast from the screen touch point.
/// AR raycasts will only hit detected trackables like feature points and planes.
///
/// If a raycast hits a trackable, the <see cref="placedPrefab"/> is instantiated
/// and moved to the hit position.
/// </summary>
/// 


// To block UI Raycasting
public class PointerOverUI
{
    public static bool IsPointerOverUIObject(Vector2 touchPosition)
    {
        PointerEventData pointerEventData = new PointerEventData(EventSystem.current);
        pointerEventData.position = touchPosition;
        List<RaycastResult> raycastResults = new List<RaycastResult>();

        EventSystem.current.RaycastAll(pointerEventData, raycastResults);

        return raycastResults.Count > 0;
    }
}

[RequireComponent(typeof(ARRaycastManager))]
public class PlaceOnPlane : MonoBehaviour
{
    [SerializeField]
    [Tooltip("Instantiates this prefab on a plane at the touch location.")]
    GameObject m_PlacedPrefab;

    public bool lockButtonClicked = false;
    bool first = true;

    /// <summary>
    /// The prefab to instantiate on touch.
    /// </summary>
    public GameObject placedPrefab
    {
        get { return m_PlacedPrefab; }
        set { m_PlacedPrefab = value; }
    }

    /// <summary>
    /// The object instantiated as a result of a successful raycast intersection with a plane.
    /// </summary>
    public GameObject spawnedObject { get; private set; }

    void Awake()
    {
        m_RaycastManager = GetComponent<ARRaycastManager>();
    }

    bool TryGetTouchPosition(out Vector2 touchPosition)
    {
#if UNITY_EDITOR
        if (Input.GetMouseButton(0))
        {
            var mousePosition = Input.mousePosition;
            touchPosition = new Vector2(mousePosition.x, mousePosition.y);
            return true;
        }
#else
        if (Input.touchCount > 0)
        {
            touchPosition = Input.GetTouch(0).position;
            return true;
        }
#endif

        touchPosition = default;
        return false;
    }


    void Update()
    {
        if (!TryGetTouchPosition(out Vector2 touchPosition))
            return;

        if (!lockButtonClicked && PhysicRayCastBlockedByUi(touchPosition))
        {
            // Raycast hits are sorted by distance, so the first one
            // will be the closest hit.
            var hitPose = s_Hits[0].pose;
           
            // User is placing the model for the first time:
            if (first)
            {
                m_PlacedPrefab.transform.position = hitPose.position;
                m_PlacedPrefab.transform.rotation = hitPose.rotation;
                m_PlacedPrefab.transform.GetChild(0).GetComponent<MeshRenderer>().enabled = true;
                first = false;
            }
            else
            {
            
                m_PlacedPrefab.transform.position = hitPose.position;  
            }
            
        }
    }

    // To block UI Raycasting
    private bool PhysicRayCastBlockedByUi(Vector2 touchPosition)
    {
        if (PointerOverUI.IsPointerOverUIObject(touchPosition))
        {
            return false;
        }

        return m_RaycastManager.Raycast(touchPosition, s_Hits, TrackableType.PlaneWithinPolygon);
    }

    static List<ARRaycastHit> s_Hits = new List<ARRaycastHit>();

    ARRaycastManager m_RaycastManager;
}
