using UnityEngine;
using System.Collections;

public class TorchControl : MonoBehaviour {

	public float waitTime = 1.0f;
	public float minFlickerSpeed = 0.1f;
	public float maxFlickerSpeed = 1.0f;

	// Use this for initialization
	void Start () {
		StartCoroutine ("DecreaseBattery");
		Debug.Log ("Starting Coroutine : DecreaseBattery() ");
//		StartCoroutine (BatteryDrain ());
	
	}

	// Update is called once per frame
	void Update () {

		if (Player.batteryCharge == 15) {
			StartCoroutine ("TorchFlicker");
			Debug.Log ("Starting Coroutine : TorchFlicker() ");
		}
		if (Player.batteryCharge < 10) {
			minFlickerSpeed = 1f;
			maxFlickerSpeed = 5f;
		} 
	}

	IEnumerator DecreaseBattery() {
		yield return new WaitForSecondsRealtime (waitTime);
		if (Player.batteryCharge != 0) {
			Player.batteryCharge -= Player.batteryDrainRate;
			Debug.Log ("Battery: " + Player.batteryCharge);
			if (Player.batteryCharge == 30 | Player.batteryCharge == 25 | Player.batteryCharge == 20 | Player.batteryCharge == 15 | Player.batteryCharge == 10 | Player.batteryCharge == 1) {
				GetComponent<Light> ().intensity -= 1;
			} 
			StartCoroutine ("DecreaseBattery");
		}
	}

	IEnumerator TorchFlicker() {
		while (Player.batteryCharge <= 15) {
			GetComponent<Light> ().enabled = true;
			Debug.Log ("light on");
			yield return new WaitForSeconds (Random.Range (minFlickerSpeed, maxFlickerSpeed));
			GetComponent<Light> ().enabled = false;
			Debug.Log ("light off");
			yield return new WaitForSeconds (Random.Range (minFlickerSpeed, maxFlickerSpeed));
			if (Player.batteryCharge == 0) {
				GetComponent<Light> ().enabled = false;
				StopCoroutine ("TorchFlicker");
			}
		}
	}
}
