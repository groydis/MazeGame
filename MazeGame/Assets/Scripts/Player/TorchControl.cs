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

	private Light theTorch;


	void Start () 
	{
		theTorch = GetComponent<Light>();
		batteryFailing = false;
		TorchOn();
		StartCoroutine ("DecreaseBattery");
	}
		
	void Update () 
	{
		if (torchIntensityDecreaseTime <= 9) {
			theTorch.intensity = 5f;
		} else {
			theTorch.intensity = 8f;
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
			while (GameManager.pauseGame) 
			{
				yield return new WaitForFixedUpdate();	
			}
			decreasingBattery = true;
			yield return new WaitForSecondsRealtime (waitTime);
			//Debug.Log ("Battery: " + Player.batteryCharge);
			Player.batteryCharge -= Player.batteryDrainRate;
			Debug.Log ("Battery: " + Player.batteryCharge);
		}
		decreasingBattery = false;
	}

	// Flicks Torch on and off 
	IEnumerator TorchFlicker() 
	{
			
		while (batteryFailing) 
		{
			while (GameManager.pauseGame) 
			{
				yield return new WaitForFixedUpdate();	
			}
			TorchOn();
			yield return new WaitForSeconds (Random.Range (minFlickerSpeed, maxFlickerSpeed));
			TorchOff ();
			yield return new WaitForSeconds (Random.Range (minFlickerSpeed, maxFlickerSpeed));
		}
		StopCoroutine ("TorchFlicker");
	}

	void TorchOff() {
		theTorch.enabled = false;
		//TODO: Play torch on / off sound
	}
	void TorchOn() {
		theTorch.enabled = true;
		//TODO: Play torch on / off sound
	}
}
