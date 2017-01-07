using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class BatteryGUI : MonoBehaviour {

	public Sprite[] batterySprites;
	public Image batteryImage;

	private bool flickerBatteryGui;
	private bool lowBatteryBool;

	// Use this for initialization
	void Start () {
		batteryImage = GetComponent<Image> ();
		flickerBatteryGui = false;
		lowBatteryBool = false;
		batteryImage.sprite = batterySprites [0];

		//StartCoroutine ("LowBattery");

	}
	
	// Update is called once per frame
	void Update () {
		if (Player.batteryCharge >= 45) {
			batteryImage.sprite = batterySprites [0];
		}
		if (Player.batteryCharge > 30 && Player.batteryCharge < 45) {
			batteryImage.sprite = batterySprites [1];
		}
		if (Player.batteryCharge > 15 && Player.batteryCharge < 30) {
			batteryImage.sprite = batterySprites [2];
		}
		if (Player.batteryCharge > 10 && Player.batteryCharge < 15) {
			batteryImage.sprite = batterySprites [3];
		}
		if (Player.batteryCharge < 10 ) {
			flickerBatteryGui = true;
			if (!lowBatteryBool) {
				StartCoroutine ("LowBattery");
			}
		}

	}
		
	IEnumerator LowBattery() {
		lowBatteryBool = true;
		if (flickerBatteryGui) {
			batteryImage.sprite = batterySprites [3];
			yield return new WaitForSeconds (.5f);
			batteryImage.sprite = batterySprites [4];
			yield return new WaitForSeconds (.5f);
			if (Player.batteryCharge > 10) {
				flickerBatteryGui = false;
			}
			if (Player.batteryCharge == 0) {
				batteryImage.sprite = batterySprites [4];
			}
		}
		lowBatteryBool = false;
	}
		
}
