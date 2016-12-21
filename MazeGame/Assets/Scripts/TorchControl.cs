using UnityEngine;
using System.Collections;

public class TorchControl : MonoBehaviour {

	public float waitTime = 1.0f;
	public float minFlickerSpeed = 0.1f;
	public float maxFlickerSpeed = 1.0f;

	public GameObject spotLight;

	void Start () 
	{
		StartCoroutine ("DecreaseBattery");
	}
		
	void Update () 
	{
		// Perform a check to see if Torch Flicker shoudl begin
		if (Player.batteryCharge == 15) {
			StartCoroutine ("TorchFlicker");
		}
		// Checks battry depletion level and slows adjusts flicker speed
		if (Player.batteryCharge < 10) {
			minFlickerSpeed = 1f;
			maxFlickerSpeed = 5f;
		} 
		if (Player.batteryCharge > 10) {
			minFlickerSpeed = 0.1f;
			maxFlickerSpeed = 1.0f;
		}
	
		if (Player.batteryCharge > 0) {
			GetComponent<Light> ().enabled = true;
		}
		if (Player.batteryCharge == 0) {
			GetComponent<Light> ().enabled = false;
		}
	}
	// Decreases Battery over time
	IEnumerator DecreaseBattery() 
	{
		yield return new WaitForSecondsRealtime (waitTime);
		if (Player.batteryCharge != 0) {
			Player.batteryCharge -= Player.batteryDrainRate;
			if (Player.batteryCharge == 30 | Player.batteryCharge == 25 | Player.batteryCharge == 20 | Player.batteryCharge == 15 | Player.batteryCharge == 10 | Player.batteryCharge == 1) 
			{
				GetComponent<Light> ().intensity -= 1;
			} 
			StartCoroutine ("DecreaseBattery");
		}
	}

	// Flicks Torch on and off 
	IEnumerator TorchFlicker() 
	{
		while (Player.batteryCharge <= 15) 
		{
			GetComponent<Light> ().enabled = true;
			yield return new WaitForSeconds (Random.Range (minFlickerSpeed, maxFlickerSpeed));
			GetComponent<Light> ().enabled = false;
			yield return new WaitForSeconds (Random.Range (minFlickerSpeed, maxFlickerSpeed));
			if (Player.batteryCharge == 0) 
			{
				GetComponent<Light> ().enabled = false;
				spotLight.GetComponent<Light> ().enabled = false;
				StopCoroutine ("TorchFlicker");
			}
		}
	}
}
