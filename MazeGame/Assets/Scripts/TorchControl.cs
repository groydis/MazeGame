using UnityEngine;
using System.Collections;

public class TorchControl : MonoBehaviour {

	public float waitTime = 10.0f;
	public float minFlickerSpeed = 0.1f;
	public float maxFlickerSpeed = 1.0f;
	public float lightIntensityReduction = 1.0f;

	// Use this for initialization
	void Start () {
		StartCoroutine (BatteryDrain ());
	
	}
	
	// Update is called once per frame
	void Update () {
		if (Player.batteryCharge > 8f) {
			GetComponent<Light> ().intensity = 5f;
		}
	
	}

	IEnumerator BatteryDrain() {
		while (Player.batteryCharge !=0) {
			Player.batteryCharge -= Player.batteryDrainRate;
			print ("Battery Charge : " + Player.batteryCharge);
			if (Player.batteryCharge <= 8f && Player.batteryCharge > 4f) {
				GetComponent<Light> ().intensity -= 1.0f;
				print ("Reducing Intensity by : " + lightIntensityReduction);
			}
			while (Player.batteryCharge <= 2.0f) {
				GetComponent<Light> ().enabled = true;
				print ("Torch On");
				yield return new WaitForSeconds (Random.Range (minFlickerSpeed, maxFlickerSpeed));
				GetComponent<Light> ().enabled = false;
				print ("Torch Off");
				yield return new WaitForSeconds (Random.Range (minFlickerSpeed, maxFlickerSpeed));
			}
			yield return new WaitForSeconds(waitTime);
				
		}
	
	}
}
