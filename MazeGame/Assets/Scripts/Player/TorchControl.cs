using UnityEngine;
using System.Collections;

public class TorchControl : MonoBehaviour {

	private float waitTime = 1.0f;
	private float minFlickerSpeed = 0.1f;
	private float maxFlickerSpeed = 0.3f;
	private float flickerStartTime = 10f;
	private float torchIntensityDecreaseTime = 10f;
	public bool batteryFailing;
	public bool decreasingBattery;

	private bool torchFlickerOn;

	private Light theTorch;


	void Start () 
	{
		theTorch = GetComponent<Light>();
		batteryFailing = false;
		torchFlickerOn = false;
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
			if (!torchFlickerOn) {
				StartCoroutine ("TorchFlicker");
			}
		}
		if (Player.batteryCharge > 0) {
			if (!decreasingBattery) {
				StartCoroutine ("DecreaseBattery");
				Player.isDead = false;
			}
		}
		if (Player.batteryCharge == 0) {
			batteryFailing = false;
			TorchOff ();
			Debug.Log ("Torch Off");
			Player.isDead = true;
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
		torchFlickerOn = true;
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
		torchFlickerOn = false;
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
