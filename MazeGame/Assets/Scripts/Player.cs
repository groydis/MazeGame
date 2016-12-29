using UnityEngine;
using System.Collections;

public class Player : MonoBehaviour {

	public static float batteryCharge;
	public static float batteryDrainRate;

	public static float movementSpeed = 2.5f;

	public static bool isDrunk;

	public float intoxicationDuration = 10.0f;
	private float intoxicationCountDown;

	private bool imageEffectActive;

	private GameObject mainCamera;

	public static bool isTriggered;

	public static bool canMove;

	void Start () 
	{
		batteryCharge = 60.0f;
		batteryDrainRate = 1.0f;
		isDrunk = false;
		imageEffectActive = false;

		mainCamera = GameObject.Find ("Main Camera");

		isTriggered = false;
	
	}

	void Update () 
	{
		if (movementSpeed > 2) {
			if (batteryCharge > 0) {
				Renderer renderer = GetComponent<Renderer> ();
				Material mat = renderer.material;
				mat.SetColor ("_EmissionColor", Color.white);
			}
		}
		if (batteryCharge == 0) {
			Renderer renderer = GetComponent<Renderer>();
			Material mat = renderer.material;
			mat.SetColor("_EmissionColor", Color.black);
		}
		if (isDrunk) {
			if (!imageEffectActive) {
				StartCoroutine ("BoozyWoozy");
			}
		}

		if (isTriggered) {
			if (!imageEffectActive) {
				StartCoroutine ("triggered");
			}
		}
	}

	IEnumerator BoozyWoozy() 
	{
		intoxicationCountDown = intoxicationDuration;
		MuntedOn ();
		while (intoxicationCountDown != 0) {
			yield return new WaitForSecondsRealtime (1f);
			intoxicationCountDown -= 1f;
		}
		MuntedOff ();
	}

	// Turns fish eye on
	public void MuntedOn() {
		mainCamera.GetComponent<UnityStandardAssets.ImageEffects.Fisheye> ().enabled = true;
		mainCamera.GetComponent<Animation> ().enabled = true;
		imageEffectActive = true;
	}
	// Turns fish eye off
	public void MuntedOff() {
		mainCamera.GetComponent<UnityStandardAssets.ImageEffects.Fisheye> ().enabled = false;
		mainCamera.GetComponent<Animation> ().enabled = false;
		imageEffectActive = false;
		isDrunk = false;
	}

	public IEnumerator triggered() {

		while (isTriggered) {
			mainCamera.GetComponent<UnityStandardAssets.ImageEffects.ScreenOverlay> ().enabled = true;
			intoxicationCountDown = intoxicationDuration;
			while (intoxicationCountDown != 0) {
				yield return new WaitForSecondsRealtime (1f);
				intoxicationCountDown -= 1f;
			}
			noLongerTriggered ();
		}
	}

	public void suddenlyTriggered() {
		mainCamera.GetComponent<UnityStandardAssets.ImageEffects.ScreenOverlay> ().enabled = true;
		imageEffectActive = true;
	}


	public void noLongerTriggered() {
		mainCamera.GetComponent<UnityStandardAssets.ImageEffects.ScreenOverlay> ().enabled = false;
		isTriggered = false;
		imageEffectActive = false;
	}
}
