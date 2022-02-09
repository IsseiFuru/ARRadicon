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
        [SerializeField] float maxMotorTorque;
        [SerializeField] float maxSteeringAngle;
        float motor = 0;
        float steering = 0;

        /// <summary>
        /// 
        /// </summary>
        /// <param name="context"></param>
        public void OnMove(InputAction.CallbackContext context)
        {
            var axis = context.ReadValue<Vector2>();
            Debug.Log(maxMotorTorque+ ","+ axis.x);
            //_velocity = new Vector3(axis.x, 0, axis.y);
            motor = maxMotorTorque * axis.y;
            steering = maxSteeringAngle * axis.x;
            //var x =Input.GetAxis("Vertical");
            //Debug.Log("Axisx"+x);
            //Debug.Log("mortor"+motor);
            //Debug.Log("ster"+steering);

            ///// <summary>
            ///// 
            ///// </summary>
            //void Update()
            //{
            //    //const float Speed = 1f;
            //    transform.position += Speed * _velocity * Time.deltaTime;
            //}
        }
        public void FixedUpdate()
        {
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

}