using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Player : MonoBehaviour {

	public static float batteryCharge;
	public static float batteryDrainRate;

	public static float movementSpeed = 2.5f;

	public static bool isDrunk;
	public static bool activateSoda;
	public static bool activatePopCorn;

	public static float spectralEffect = 10.0f;

	private float intoxicationDuration = 10.0f;
	private float intoxicationCountDown;

	private float sodaEffectDuration = 5.0f;
	private float sodaEffectCountDown;

	private float popCornEffectDuration = 10.0f;
	private float popCornEffectCountDown;

	private bool imageEffectActive;

	private GameObject mainCamera;

	private GameObject sugarRushText;
	public GameObject popCornTrail;

	public static bool canMove;

	void Start () 
	{
		batteryCharge = 60.0f;
		batteryDrainRate = 1.0f;
		isDrunk = false;
		imageEffectActive = false;
		mainCamera = GameObject.Find ("Main Camera");
		sugarRushText = GameObject.Find ("SugarRushText");
		sugarRushText.SetActive (false);
		//popCornTrail = GameObject.Find("PopCornTrailPrefab");
	
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

		if (activateSoda) {
			if (!imageEffectActive) {
				StartCoroutine ("SodaStreaming");
			}
		}

		if (activatePopCorn) {
			if (!imageEffectActive) {
				StartCoroutine ("PopCorn");
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
			Debug.Log ("Soda CountDown : " + intoxicationCountDown);
		}
		MuntedOff ();
	}

	IEnumerator SodaStreaming() 
	{
		sodaEffectCountDown = sodaEffectDuration;
		SodaOn ();
		while (sodaEffectCountDown != 0) {
			yield return new WaitForSecondsRealtime (1f);
			sodaEffectCountDown -= 1f;
			Debug.Log ("Soda CountDown : " + sodaEffectCountDown);
		}
		SodaOff ();
	}

	IEnumerator PopCorn() {
		popCornEffectCountDown = popCornEffectDuration;
		PopCornOn ();
		Debug.Log ("Pop on");
		while (popCornEffectCountDown != 0) {
			yield return new WaitForSeconds (1f);
			popCornEffectCountDown -= 1f;
			Debug.Log ("PopCorn CountDown : " + popCornEffectCountDown);
		}
		PopCornOff ();
		Debug.Log ("Pop off");
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

	public void SodaOn() {
		sugarRushText.SetActive (true);
		mainCamera.GetComponent<UnityStandardAssets.ImageEffects.MotionBlur> ().enabled = true;
		mainCamera.GetComponent<UnityStandardAssets.ImageEffects.ContrastEnhance> ().enabled = true;
		movementSpeed = 5f;
		imageEffectActive = true;
		Debug.Log ("Soda On");
	}

	public void SodaOff() {
		sugarRushText.SetActive (false);
		mainCamera.GetComponent<UnityStandardAssets.ImageEffects.MotionBlur> ().enabled = false;
		mainCamera.GetComponent<UnityStandardAssets.ImageEffects.ContrastEnhance> ().enabled = false;
		movementSpeed = 2.5f;
		Debug.Log ("Soda Off");
		activateSoda = false;
		imageEffectActive = false;
	}

	public void PopCornOn() {
		StartCoroutine ("PopCornSpawn");
		imageEffectActive = true;
	
	}

	public void PopCornOff() {
		activatePopCorn = false;
		imageEffectActive = false;
	
	}

	IEnumerator PopCornSpawn() {
		Vector3 pos = new Vector3(0f, 3f, 0f);
		while (activatePopCorn) {
			GameObject popCorn = Instantiate(popCornTrail, transform.position + pos, Quaternion.identity) as GameObject; 
			popCorn.transform.parent = transform.parent;
			yield return new WaitForSeconds (Random.Range(0.5f, 1f));
		}
		activatePopCorn = false;
	}

	IEnumerator PowerUpText(Text text, float textDuration) {
		Debug.Log ("Text On");
		text.enabled = true;
		yield return new WaitForSeconds (textDuration);
		text.enabled = false;
		Debug.Log ("Text Off");
	}
}
