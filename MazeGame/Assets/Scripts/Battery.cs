using UnityEngine;
using System.Collections;

public class Battery : MonoBehaviour {

	public float maxBatteryCharge = 60f;
	public float batteryPickUpCharge = 10.0f;

	// Checks if the current battery charge is less than the maximum battery charge.
	// If so, increases battery current battery charge by the battery pick up charge amount.
	// If the current battery charge is equal to the maximum battery charge then it just sets the 
	// current battery charge to the maximum, this prevents over charging.
	void InteractWithBattery () 
	{
		if (Player.batteryCharge < maxBatteryCharge) 
		{
			Player.batteryCharge += batteryPickUpCharge;

			if (Player.batteryCharge > maxBatteryCharge) 
			{
				Player.batteryCharge = maxBatteryCharge;
			}
		}
		//TODO: Modify "Visual" for battery charge
		Debug.Log ("Battery Pickup, Battery is now : " + Player.batteryCharge);
		Destroy (this.gameObject);
	}

	void OnTriggerEnter(Collider hit) 
	{
		// If collision occurs with a battery, performs InteractWithBattery() on the Battery Script
		if (hit.gameObject.tag == "Player") {
			InteractWithBattery ();
		}
	}

}
