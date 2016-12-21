using UnityEngine;
using System.Collections;

public class Player : MonoBehaviour {

	public static float batteryCharge;
	public static float batteryDrainRate;

	void Start () 
	{
		batteryCharge = 10;
		batteryDrainRate = 1;
	
	}

	void Update () 
	{
		if (batteryCharge > 0) {
			Renderer renderer = GetComponent<Renderer>();
			Material material = renderer.material;
			material.SetColor ("_EmissionColor", Color.white);
		}
		if (batteryCharge == 0) {
			Renderer renderer = GetComponent<Renderer>();
			Material material = renderer.material;
			material.SetColor("_EmissionColor", Color.black);
		}

	}
}
