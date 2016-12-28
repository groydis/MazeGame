using UnityEngine;
using System.Collections;

public class Battery : MonoBehaviour {

	public float maxBatteryCharge = 60f;
	public float batteryPickUpCharge = 10.0f;
	public Light playerTorch; 


	void Start () {
		//playerTorch = GameObject.FindGameObjectWithTag ("PlayerTorch").GetComponent<Light> ();
	}

	// Checks if the current battery charge is less than the maximum battery charge.
	// If so, increases battery current battery charge by the battery pick up charge amount.
	// If the current battery charge is equal to the maximum battery charge then it just sets the 
	// current battery charge to the maximum, this prevents over charging.

	void InteractWithBattery(GameObject playerHit) {
		if (Player.batteryCharge < maxBatteryCharge) 
		{
			Player.batteryCharge += batteryPickUpCharge;
			if (Player.batteryCharge > 0) {
				playerHit.GetComponentInChildren<Light> ().enabled = true;
			}

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
		if (hit.gameObject.tag == "Player") {
			InteractWithBattery (hit.gameObject);
		}
	}
}
