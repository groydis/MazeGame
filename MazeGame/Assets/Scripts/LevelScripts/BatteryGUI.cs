using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class BatteryGUI : MonoBehaviour {

	public Sprite[] batterySprites;
	public Image batteryImage;

	// Use this for initialization
	void Start () {
		batteryImage = GetComponent<Image> ();

	}
	
	// Update is called once per frame
	void Update () {
		if (Player.batteryCharge <= 45) {
			batteryImage.sprite = batterySprites [0];
		} 
		if (Player.batteryCharge <= 30) {
			batteryImage.sprite = batterySprites [1];
		} 
		if (Player.batteryCharge <= 15) {
			batteryImage.sprite = batterySprites [2];
		} 
		if (Player.batteryCharge <= 10) {
			batteryImage.sprite = batterySprites [3];
		}
		if (Player.batteryCharge <= 5) {
			batteryImage.sprite = batterySprites [4];
		}
	}
		
}
