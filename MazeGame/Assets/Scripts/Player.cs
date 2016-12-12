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

	// Handles all collision the player makes with intereactable items
	void OnControllerColliderHit(ControllerColliderHit hit) 
	{
		// If collision occurs with a battery, performs InteractWithBattery() on the Battery Script
		if (hit.gameObject.tag == "Battery") {
			Battery.InteractWithBattery (batteryCharge, hit.gameObject);
		}
	}

}
