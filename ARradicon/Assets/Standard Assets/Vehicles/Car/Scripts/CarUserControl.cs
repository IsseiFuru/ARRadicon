#pragma warning disable 0649
using UnityEngine;
using UnityEngine.InputSystem;

namespace UnityStandardAssets.Vehicles.Car
{
    [RequireComponent(typeof (CarController))]
    public class CarUserControl : MonoBehaviour
    {
        private CarController m_Car; // the car controller we want to use


        private void Awake()
        {
            m_Car = GetComponent<CarController>();
        }

        /// <summary>
        /// リセットボタンを押した時、車がカメラの向いた方向になる。
        /// </summary>
        public void OnReset()
        {
            var Cam = Camera.main.gameObject;
            Debug.Log("Press:R or Buttrn");
            this.transform.rotation = Quaternion.Euler(0, Cam.transform.localEulerAngles.y, 0);
        }

        /// <summary>
        /// 底に落ちて、一定の高さに落ちると車が消える
        /// </summary>
        /// <param name="collision"></param>
        void OnCollisionEnter(Collision collision)
        {
            if (collision.gameObject.tag == "Limit")
            {
                Destroy(gameObject, 0.2f);
            }
        }

        private void FixedUpdate()
        {
            Keyboard keybord = Keyboard.current;

            var rKey = keybord.rKey;
            var wKey = keybord.wKey;
            var aKey = keybord.aKey;
            var sKey = keybord.sKey;
            var dKey = keybord.dKey;
            var spaceKey = keybord.spaceKey;
            
            

            // pass the input to the car!
            float h = 0; // Input.GetAxisRaw("Horizontal");
            float v = 0; // Input.GetAxisRaw("Vertical");
            float handbrake;

            if (rKey.wasReleasedThisFrame)
            {
                OnReset();
            }

            #region キーボード入力
            if (dKey.isPressed)
            {
                h = 1;
            }
            else if(aKey.isPressed)
            {
                h = -1;
            }
            else
            {
                h = 0;
            }

            if (wKey.isPressed)
            {
                v = 1;
            }
            else if(sKey.isPressed)
            {
                v = -1;
            }
            else
            {
                v = 0;
            }

            if (spaceKey.isPressed)
            {
                handbrake = 1;
            }
            else
            {
                handbrake = 0;
            }
            #endregion 

#if !MOBILE_INPUT
            //float handbrake = keybord.spaceKey.isPressed;
            //m_Car.Move(h, v, v, handbrake);
#else
            m_Car.Move(h, v, v, handbrake);
#endif
        }
    }
}
