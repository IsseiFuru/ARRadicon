using UnityEngine;
using UnityEngine.InputSystem;


public class InputTest : MonoBehaviour
{
    PlayerInput playerInput;
    private InputAction _fireAction;

    public void Start()
    {
        var pInput = GetComponent<PlayerInput>();
        var actionMap = pInput.currentActionMap;

        actionMap["Fire"].performed += ClickFire;
    }

    private void ClickFire(InputAction.CallbackContext context)
    {
        Debug.Log("Fire!");
    }


    private void Update()
    {
        var gamepad = Gamepad.current;
        var input = gamepad.leftStick.ReadValue();
        if (input.magnitude > 0f)
        {
            //Debug.Log(input);
        }
    }
}