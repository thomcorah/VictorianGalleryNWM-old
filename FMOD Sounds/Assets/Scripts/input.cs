using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class input : MonoBehaviour
{

    [SerializeField]
    float mouseSensitivity;



    // Update is called once per frame
    void Update()
    {

      Cursor.lockState = CursorLockMode.Locked;

      transform.Translate(Input.GetAxis("Horizontal") * Time.deltaTime, 0, Input.GetAxis("Vertical") * Time.deltaTime);

      float rotAmountX = Input.GetAxis("Mouse X") * mouseSensitivity;
      float rotAmountY = Input.GetAxis("Mouse Y") * mouseSensitivity;
      Vector3 playerRotation = transform.rotation.eulerAngles;

      playerRotation.x = -rotAmountY;
      playerRotation.z = 0;
      playerRotation.y = rotAmountX;

      transform.Rotate(playerRotation);
    }

}
