using UnityEngine;
using System.Collections;

public class Battery : MonoBehaviour {

	public float maxBatteryCharge = 60f;
	public float batteryPickUpCharge = 15.0f;
	public Light playerTorch; 

	private AudioSource aSource;

	void Awake() {
		aSource = GetComponent<AudioSource> ();
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
		if (aSource.clip != null) {
			Debug.Log ("Playing Crash Cause I hit the Player");
			aSource.Stop ();
			aSource.loop = false;
			aSource.Play ();
		}
		Debug.Log ("Battery Pickup, Battery is now : " + Player.batteryCharge);
		Destroy (this.gameObject, aSource.clip.length);
	}

	void OnTriggerEnter(Collider hit) 
	{
		if (hit.gameObject.tag == "Player") {
			InteractWithBattery (hit.gameObject);
		}
	}
}
