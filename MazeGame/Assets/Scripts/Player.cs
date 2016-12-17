using UnityEngine;
using System.Collections;

public class Player : MonoBehaviour {

	public static float batteryCharge;
	public static float batteryDrainRate;

	void Start () 
	{
		batteryCharge = 60;
		batteryDrainRate = 1;
	
	}

	void Update () 
	{

	}
	//TODO : move this shit off player.

	// Handles all collision the player makes with intereactable items
}
