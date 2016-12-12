using UnityEngine;
using System.Collections;

public class Player : MonoBehaviour {

	public static float batteryCharge;
	public static float batteryDrainRate;

	// Use this for initialization
	void Start () {
		batteryCharge = 10f;
		batteryDrainRate = 1f;
	
	}
	
	// Update is called once per frame
	void Update () {

	}
}
