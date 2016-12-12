using UnityEngine;
using System.Collections;

public class Player : MonoBehaviour {

	public static float batteryCharge;
	public static float batteryDrainRate;

	void Start () 
	{
		batteryCharge = 60;
		batteryDrainRate = 1;
	
	}

	void Update () 
	{

	}

	void OnControllerColliderHit(ControllerColliderHit hit) 
	{
		if (hit.gameObject.tag == "Battery") {
			Battery.InteractWithBattery (batteryCharge, hit.gameObject);
		}
	}

}
