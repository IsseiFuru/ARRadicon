using UnityEngine;
using UnityEngine.UI;
using UnityEngine.InputSystem;
using System.Collections.Generic;

namespace ARradicon
{
    [RequireComponent(typeof(PlayerInput))]

    public class Car : MonoBehaviour
    {
        private Vector3 _velocity;
        public List<AxleInfo> axleInfos;
        [Header("最高速度")] [SerializeField] float maxMotorTorque;
        [Header("最高操舵角度")] [SerializeField] float maxSteeringAngle;
        float motor = 0;
        float steering = 0;
        //public bool isReset = false;

        /// <summary>
        /// 
        /// </summary>
        [System.Serializable]
        public class AxleInfo
        {
            public WheelCollider leftWheel;
            public WheelCollider rightWheel;
            public bool motor;
            public bool steering;
        }


        /// <summary>
        /// Joystichでの操作を受け取り、速さと角度に変換する。
        /// </summary>
        /// <param name="context"></param>
        public void OnMove(InputAction.CallbackContext context)
        {
            var axis = context.ReadValue<Vector2>();
            Debug.Log(maxMotorTorque+ ","+ axis.x);
            motor = maxMotorTorque * axis.y;
            steering = maxSteeringAngle * axis.x;        
        }

        /// <summary>
        /// リセットボタンを押した時、車の姿勢が初期状態に戻る。
        /// </summary>
        public void OnReset()
        {
            var Cam = Camera.main.gameObject;
            Debug.Log("Press:R or Buttrn");
            this.transform.rotation = Quaternion.Euler(Cam.transform.localEulerAngles.x,0, Cam.transform.localEulerAngles.z);
        }

        public void FixedUpdate()
        {
            var keybord = Keyboard.current;

            var rKey = keybord.rKey;
            if (rKey.wasReleasedThisFrame)
            {
                OnReset();
            }

            foreach (AxleInfo axleInfo in axleInfos)
            {
                if (axleInfo.steering)
                {
                    axleInfo.leftWheel.steerAngle = steering;
                    axleInfo.rightWheel.steerAngle = steering;
                }
                if (axleInfo.motor)
                {
                    axleInfo.leftWheel.motorTorque = motor;
                    axleInfo.rightWheel.motorTorque = motor;
                }
            }
        }
    }


}