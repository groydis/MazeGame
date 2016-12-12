using UnityEngine;
using System.Collections;

public class Battery : MonoBehaviour {

	public static float maxBatteryCharge = 60f;
	public static float batteryPickUpCharge = 2.0f;

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
