#pragma warning disable 0649
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.InputSystem;

/// <summary>
/// 平面を検知して、タップした位置に球を表示させる
/// </summary>
namespace ARradicon
{
    [RequireComponent(typeof(ARPlaneManager))]
    [RequireComponent(typeof(ARRaycastManager))]
    [RequireComponent(typeof(PlayerInput))]

    public class AppearOnPlane : MonoBehaviour
    {
        [SerializeField] Text message;
        [SerializeField] GameObject placementPrefab;
        ARPlaneManager planeManager;
        ARRaycastManager raycastManager;
        PlayerInput playerInput;
        bool isReady;

        /// <summary>
        /// テキストを表示させる
        /// </summary>
        /// <param name="text"></param>
        void ShowMessage(string text) { message.text = $"{text}\r\n"; }

        /// <summary>
        /// テキストを追加させる
        /// </summary>
        /// <param name="text"></param>
        void AddMessage(string text) { message.text += $"{text}\r\n"; }

        /// <summary>
        /// 
        /// </summary>
        private void Awake()
        {
            if (message == null) { Application.Quit(); }

            planeManager = GetComponent<ARPlaneManager>();
            playerInput = GetComponent<PlayerInput>();
            raycastManager = GetComponent<ARRaycastManager>();
            if (placementPrefab == null || planeManager == null
                || planeManager.planePrefab == null || raycastManager == null
                || playerInput == null || playerInput.actions == null)
            {
                isReady = false;
                ShowMessage("エラー：SerializeFieldなどの設定不備");
            }
            else
            {
                isReady = true;
                ShowMessage("平面検出");
                AddMessage("床を撮影してください。しばらくすると平面が検出されます。" +
                    "平面をタップすると椅子が表示されます。");
            }
        }

        GameObject instantiatedObject = null;

        /// <summary>
        /// アクションマップに登録されているTouchが生じた時に呼び出される。
        /// 平面上にタップした場所に球を表示させる。
        /// </summary>
        /// <param name="touchInfo"></param>
        void OnTouch(InputValue touchInfo)
        {
            if (!isReady) { return; }

            var touchPosition = touchInfo.Get<Vector2>();
            var hits = new List<ARRaycastHit>();
            if (raycastManager.Raycast(touchPosition, hits, TrackableType.PlaneWithinInfinity))
            {
                var hitPose = hits[0].pose;
                if (instantiatedObject == null)
                {
                    instantiatedObject = Instantiate(placementPrefab, hitPose.position, hitPose.rotation);
                    AddMessage("Appear ball!!");
                }
                else {
                    instantiatedObject.transform.position = hitPose.position;
                }
            }
        }
    }
}