using UnityEngine;
using System.Collections;

public class TorchControl : MonoBehaviour {

	private float waitTime = 1.0f;
	private float minFlickerSpeed = 0.1f;
	private float maxFlickerSpeed = 1.0f;
	private float flickerStartTime = 5.0f;
	private float torchIntensityDecreaseTime = 10f;
	public bool batteryFailing;
	public bool decreasingBattery;


	void Start () 
	{
		batteryFailing = false;
		TorchOn();
		StartCoroutine ("DecreaseBattery");
	}
		
	void Update () 
	{
		if (torchIntensityDecreaseTime <= 9) {
			GetComponent<Light> ().intensity = 5f;
		} else {
			GetComponent<Light> ().intensity = 8f;
		}
		// Perform a check to see if Torch Flicker shoudl begin
		if (Player.batteryCharge <= flickerStartTime) {
			batteryFailing = true;
			StartCoroutine ("TorchFlicker");
		}
		if (Player.batteryCharge > 0) {
			if (!decreasingBattery) {
				StartCoroutine ("DecreaseBattery");
			}
		}
		if (Player.batteryCharge == 0) {
			batteryFailing = false;
			TorchOff ();
		}
		if (Player.batteryCharge > flickerStartTime) {
			batteryFailing = false;
		}
	}
	// Decreases Battery over time
	IEnumerator DecreaseBattery() 
	{	
		while (Player.batteryCharge != 0) {
			TorchOn ();
			decreasingBattery = true;
			yield return new WaitForSecondsRealtime (waitTime);
			//Debug.Log ("Battery: " + Player.batteryCharge);
			Player.batteryCharge -= Player.batteryDrainRate;
		}
		decreasingBattery = false;
	}

	// Flicks Torch on and off 
	IEnumerator TorchFlicker() 
	{
		while (batteryFailing) 
		{
			TorchOn();
			yield return new WaitForSeconds (Random.Range (minFlickerSpeed, maxFlickerSpeed));
			TorchOff ();
			yield return new WaitForSeconds (Random.Range (minFlickerSpeed, maxFlickerSpeed));
		}
		StopCoroutine ("TorchFlicker");
	}

	void TorchOff() {
		GetComponent<Light> ().enabled = false;
		//TODO: Play torch on / off sound
	}
	void TorchOn() {
		GetComponent<Light> ().enabled = true;
		//TODO: Play torch on / off sound
	}
}
