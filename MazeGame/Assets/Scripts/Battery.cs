using UnityEngine;
using System.Collections;

public class Battery : MonoBehaviour {

	public static float maxBatteryCharge = 60f;
	public static float batteryPickUpCharge = 2.0f;

	// Checks if the current battery charge is less than the maximum battery charge.
	// If so, increases battery current battery charge by the battery pick up charge amount.
	// If the current battery charge is equal to the maximum battery charge then it just sets the 
	// current battery charge to the maximum, this prevents over charging.
	public static void InteractWithBattery (float currentBatteryCharge, GameObject battery) 
	{
		if (currentBatteryCharge < Battery.maxBatteryCharge) 
		{
			currentBatteryCharge += Battery.batteryPickUpCharge;

			if (currentBatteryCharge > Battery.maxBatteryCharge) 
			{
				currentBatteryCharge = Battery.maxBatteryCharge;
			}
		}
		//TODO: Modify "Visual" for battery charge
		Debug.Log ("Battery Pickup, Battery is now : " + currentBatteryCharge);
		Destroy (battery);
	}

}
