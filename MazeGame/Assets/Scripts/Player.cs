using UnityEngine;
using System.Collections;

public class Player : MonoBehaviour {

	public static float batteryCharge;
	public static float batteryDrainRate;

	void Start () 
	{
		batteryCharge = 60.0f;
		batteryDrainRate = 1.0f;
	
	}

	void Update () 
	{
		if (batteryCharge > 0) {
			Renderer renderer = GetComponent<Renderer>();
			Material mat = renderer.material;
			mat.SetColor ("_EmissionColor", Color.white);
		}
		if (batteryCharge == 0) {
			Renderer renderer = GetComponent<Renderer>();
			Material mat = renderer.material;
			mat.SetColor("_EmissionColor", Color.black);
		}

	}
}
