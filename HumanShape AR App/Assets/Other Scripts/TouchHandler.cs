using UnityEngine;

public class TouchHandler : MonoBehaviour
{
    public Transform AugmentationObject;
    public static bool sIsSingleFingerStationary => IsSingleFingerDown() && Input.GetTouch(0).phase == TouchPhase.Stationary;
    public static bool sIsSingleFingerDragging => IsSingleFingerDown() && Input.GetTouch(0).phase == TouchPhase.Moved;
    static int sLastTouchCount;

    const float SCALE_RANGE_MIN = 0.1f;
    const float SCALE_RANGE_MAX = 2.0f;

    Touch[] mTouches;
    bool mIsFirstFrameWithTwoTouches;
    float mCachedTouchAngle;
    float mCachedTouchDistance;
    float mCachedAugmentationScale;
    Vector3 mCachedAugmentationRotation;

    void Start()
    {
        mCachedAugmentationScale = AugmentationObject.localScale.x;
        mCachedAugmentationRotation = AugmentationObject.localEulerAngles;
    }

    void Update()
    {
        if (Input.touchCount == 2)
        {
            GetTouchAngleAndDistance(Input.GetTouch(0), Input.GetTouch(1),
                out var currentTouchAngle, out var currentTouchDistance);

            if (mIsFirstFrameWithTwoTouches)
            {
                mCachedTouchDistance = currentTouchDistance;
                mCachedTouchAngle = currentTouchAngle;
                mIsFirstFrameWithTwoTouches = false;
            }          
        }
        else if (Input.touchCount < 2)
        {
            mCachedAugmentationScale = AugmentationObject.localScale.x;
            mCachedAugmentationRotation = AugmentationObject.localEulerAngles;
            mIsFirstFrameWithTwoTouches = true;
        }
    }

    void GetTouchAngleAndDistance(Touch firstTouch, Touch secondTouch, out float touchAngle, out float touchDistance)
    {
        touchDistance = Vector2.Distance(firstTouch.position, secondTouch.position);
        var diffY = firstTouch.position.y - secondTouch.position.y;
        var diffX = firstTouch.position.x - secondTouch.position.x;
        touchAngle = Mathf.Atan2(diffY, diffX) * Mathf.Rad2Deg;
    }

    static bool IsSingleFingerDown()
    {
        if (Input.touchCount == 0 || Input.touchCount >= 2)
            sLastTouchCount = Input.touchCount;

        return Input.touchCount == 1 && Input.GetTouch(0).fingerId == 0 && sLastTouchCount == 0;
    }
}