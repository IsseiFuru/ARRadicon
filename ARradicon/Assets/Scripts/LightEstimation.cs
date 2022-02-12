#pragma warning disable 0649
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Rendering;
using UnityEngine.XR.ARFoundation;

namespace ARradicon
{
    [RequireComponent(typeof(Light))]

    public class LightEstimation : MonoBehaviour
    {
        [SerializeField] Text message;
        [SerializeField] ARCameraManager cameraManager;
        [SerializeField] GameObject worldSpaceObject;
        Light directionalLight;

        bool isReady;

        /// <summary>
        /// インスタンスが読み込まれると実行する
        /// </summary>
        private void Awake()
        {
            directionalLight = GetComponent<Light>();
            if (directionalLight == null || cameraManager == null
                || worldSpaceObject == null )
            {
                isReady = false;
            }
            else { isReady = true; }
        }

        /// <summary>
        /// カメラフレーム受信時に呼び出される
        /// </summary>
        private void OnEnable()
        {
            if (!isReady) { return; }

            cameraManager.frameReceived += FrameChanged;
            //Application.onBeforeRender += OnBeforeRender;
        }

        private void OnDisable()
        {
            if (!isReady) { return; }

            //Application.onBeforeRender -= OnBeforeRender;
            cameraManager.frameReceived -= FrameChanged;
        }

        /// <summary>
        /// 描画前に、カメラとの位置と向きと表示する仮想物体とカメラの距離メソッド
        /// </summary>
        //private void OnBeforeRender()
        //{
        //    if(!isReady) { return; }

        //    var cameraTransform = cameraManager.GetComponent<Camera>().transform;
        //}

        /// <summary>
        /// 光源推定の各種値を格納するフィールドなどを宣言している
        /// </summary>
        float? brightness;
        float? colorTemperature;
        Color? colorCorrection;
        Vector3? mainLightDirection;
        Color? mainLightColor;
        float? averageMainLightBrightness;
        SphericalHarmonicsL2? sphericalHarmonics;

        /// <summary>
        /// カメラフレーム受信時に呼び出されるメソッド
        /// 現実世界の平均的な明るさの値から、推定値を取得する。
        /// </summary>
        void FrameChanged(ARCameraFrameEventArgs eventArgs)
        {
            if (!isReady) { return; }

            var lightEst = eventArgs.lightEstimation;
            brightness = lightEst.averageBrightness;
            if (brightness.HasValue) { directionalLight.intensity = brightness.Value; }

            colorTemperature = lightEst.averageColorTemperature;
            if (colorTemperature.HasValue) { directionalLight.colorTemperature = colorTemperature.Value; }

            colorCorrection = lightEst.colorCorrection;
            if (colorCorrection.HasValue) { directionalLight.color = colorCorrection.Value; }

            //// 主光源の向きが指定した時に、仮想世界のライトに反映する。
            mainLightDirection = lightEst.mainLightDirection;
            if(mainLightDirection.HasValue)
            {
                directionalLight.transform.rotation = Quaternion.LookRotation(mainLightDirection.Value);
                //lightDirectionArrow.transform.rotation = directionalLight.transform.rotation;
                //lightDirectionArrow.SetActive(true);
            }
            //else { lightDirectionArrow.SetActive(false); }

            mainLightColor = lightEst.mainLightColor;
            if (mainLightColor.HasValue)
            { directionalLight.color = mainLightColor.Value; }

            averageMainLightBrightness = lightEst.averageMainLightBrightness;
            if(averageMainLightBrightness.HasValue)
            { directionalLight.intensity = averageMainLightBrightness.Value; }

            sphericalHarmonics = lightEst.ambientSphericalHarmonics;
            if(sphericalHarmonics.HasValue)
            {
                RenderSettings.ambientMode = AmbientMode.Skybox;
                RenderSettings.ambientProbe = sphericalHarmonics.Value;
            }
        }
    }
}