﻿using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Player : MonoBehaviour {

	// Totall amount of Battery the Player has - Default is 60 seconds worth
	public static float batteryCharge;

	// The rate in which the players battery is drained, default is 1 point for each seconds, total battery draining in 60 seconds.
	public static float batteryDrainRate;

	// Speed in which the player moves
	public static float movementSpeed = 2.5f;

	// TODO: Will this effect make it into the game??
	// Bool to declare if the drunk effect is active
	public static bool isDrunk;
	// Bool to declae if Soda effect has been activated
	// Occurs when player collides with Soda Pick Up item
	public static bool activateSoda;
	// Bool to declare if Popcorn effect has been activated
	// Occurs when player collids with Popcorn Pick Up item
	public static bool activatePopCorn;
	// Bool to declare if spectral effect has been actived
	// Occurs when player collides with spectral
	public static float spectralEffect = 10.0f;
	// Duration in which teh isDrunk effect takes place;
	private float intoxicationDuration = 10.0f;
	private float intoxicationCountDown;
	// Duration in which the Soda Effect takes place
	private float sodaEffectDuration = 5.0f;
	private float sodaEffectCountDown;
	// Duration in which the Popcorn Effect takes place
	private float popCornEffectDuration = 10.0f;
	private float popCornEffectCountDown;

	// Declares if an image effect has been activated
	private bool imageEffectActive;

	// The main Camera
	private GameObject mainCamera;

	// Prefab for the pop corn that is instantiated when the Popcorn effect has been activated
	public GameObject popCornTrail;

	// Bool to determine if player can move (used through out entire code)
	public static bool canMove;

	// The animation controller for the player
	private Animator playerAnim;

	// All the Mesh Renderes on teh player model
	private Renderer[] renderers;

	// Shader Effects
	private UnityStandardAssets.ImageEffects.Fisheye fishEyeEffect;
	private UnityStandardAssets.ImageEffects.MotionBlur motionBlurEffect;
	private UnityStandardAssets.ImageEffects.ContrastEnhance contrastEnhanceEffect;
	// Animation to control the fish eye effect 
	private Animation fishEyeAnim;

	// Finds various components for the player script
	void Awake() {
		mainCamera = GameObject.Find ("Main Camera");
		playerAnim = GetComponentInChildren<Animator> ();
		renderers = GetComponentsInChildren<MeshRenderer> ();

		fishEyeEffect = mainCamera.GetComponent<UnityStandardAssets.ImageEffects.Fisheye> ();
		motionBlurEffect = mainCamera.GetComponent<UnityStandardAssets.ImageEffects.MotionBlur> ();
		contrastEnhanceEffect = mainCamera.GetComponent<UnityStandardAssets.ImageEffects.ContrastEnhance> ();
		fishEyeAnim = mainCamera.GetComponent<Animation> ();
	}

	// All Image effects and power ups should be false on start in the player script
	// Set the battery change rate to 60
	// Set the battery drain rate to 1
	// Declare is drunk to false
	// Declare image effect is false
	// Declare soda effect is false
	// Delcare Pop Corn effect is false
	void Start () 
	{
		batteryCharge = 60.0f;
		batteryDrainRate = 1.0f;
		isDrunk = false;
		imageEffectActive = false;
		activateSoda = false;
		activatePopCorn = false;
	
	}

	void Update ()
	{
		// If the player speed reduces, reduce the speed of the players walk animation
		if (movementSpeed < 2) {
			playerAnim.speed = 0.5f;

		} else {
			playerAnim.speed = 1f;
		}

		// If players battery is completely drianed, change emission colour to black, effectively making the player invisible
		if (batteryCharge == 0) {
			foreach (Renderer renderer in renderers) {
				Material mat = renderer.material;
				mat.SetColor ("_EmissionColor", Color.black);
			}
		}

		// All Power-Ups currently check if existing effect is in place, but can be any effect

		// If isDrunk is activated, turn on the BoozyWooze Coroutine
		if (isDrunk) {
			if (!imageEffectActive) {
				StartCoroutine ("BoozyWoozy");
			}
		}

		// If activateSoda is activated, turn on the SodaStreaming Coroutine
		if (activateSoda) {
			if (!imageEffectActive) {
				StartCoroutine ("SodaStreaming");
			}
		}
		// If activatePopCorn is activate, turn on PopCorn Coroutine
		if (activatePopCorn) {
			if (!imageEffectActive) {
				StartCoroutine ("PopCorn");
			}
		}

		// If the player can walk, animate the player, if not, do not animate the player
		if (canMove) {
			playerAnim.SetBool ("walk", true);
		} else {
			// If this bool is set ot false, player will default to idle animation
			playerAnim.SetBool ("walk", false);
		}
	}

	// When BoozyWoozy starts, sets the intoxicationCountDown to intoxicationDuration
	// Begins MuntedOn
	// Performs countdown intoxicationDuration
	// Begins MuntedOff once countdonw complete
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

	// When SodaStreaming starts, sets the sodaEffectCountDown to sodaEffectDuration
	// Begins SodaOn
	// Performs countdown sodaEffectDuration
	// Begins SodaOff once countdonw complete
	IEnumerator SodaStreaming() 
	{
		sodaEffectCountDown = sodaEffectDuration;
		SodaOn ();
		while (sodaEffectCountDown != 0) {
			yield return new WaitForSecondsRealtime (1f);
			sodaEffectCountDown -= 1f;
		}
		SodaOff ();
	}

	// When PopCorn starts, sets the popCornEffectCountDown to popCornEffectDuration
	// Begins PopCornOn
	// Performs countdown sodaEffectDuration
	// Begins PopCornOff once countdonw complete
	IEnumerator PopCorn() {
		popCornEffectCountDown = popCornEffectDuration;
		PopCornOn ();
		while (popCornEffectCountDown != 0) {
			yield return new WaitForSeconds (1f);
			popCornEffectCountDown -= 1f;
		}
		PopCornOff ();
	}


	// Turns fish eye on
	// Animates the fish eye effect
	// Sets imageEffectActive to true
	public void MuntedOn() {
		fishEyeEffect.enabled = true;
		fishEyeAnim.enabled = true;
		imageEffectActive = true;
	}

	// Turns fish eye off
	// Turns the fish eye animation off
	// Sets imageEffectActive to false
	// Sets isDrunk to false
	public void MuntedOff() {
		fishEyeEffect.enabled = false;
		fishEyeAnim.enabled = false;
		imageEffectActive = false;
		isDrunk = false;
	}

	// Turns motion blur effect on
	// Turns contrast enhancement effect on
	// Increases player movement speed to 5
	// Sets imageEffectActive to true
	public void SodaOn() {
		motionBlurEffect.enabled = true;
		contrastEnhanceEffect.enabled = true;
		movementSpeed = 5f;
		imageEffectActive = true;
	}

	// Turns motion blur effect off
	// Turns contrast enhancement effect off
	// Increases player movement speed back to default
	// Sets imageEffectActive to false
	public void SodaOff() {
		motionBlurEffect.enabled = false;
		contrastEnhanceEffect.enabled = false;
		movementSpeed = 2.5f;
		activateSoda = false;
		imageEffectActive = false;
	}
	// Starts the PopCornSpawn Coroutine
	// Sets imageEffectActive to true
	public void PopCornOn() {
		StartCoroutine ("PopCornSpawn");
		imageEffectActive = true;
	}
	// Sets activatePopCorn to false which disables teh PopCornSpawn Coroutine
	// Sets imageEffectActive to false
	public void PopCornOff() {
		activatePopCorn = false;
		imageEffectActive = false;
	}

	// Grabs a vector 3f off the y axis
	// If activatePopCorn is True instantiates popcorn spew prefab at players location + 3f off the y axis
	// Sets teh popcorn spew transform to a child of the player
	// Waits for a random half second and spawns more
	// Once activatePopCorn is false, Coroutine Stops
	IEnumerator PopCornSpawn() {
		Vector3 pos = new Vector3(0f, 3f, 0f);
		while (activatePopCorn) {
			GameObject popCorn = Instantiate(popCornTrail, transform.position + pos, Quaternion.identity) as GameObject; 
			popCorn.transform.parent = transform.parent;
			yield return new WaitForSeconds (Random.Range(0.5f, 1f));
		}
		activatePopCorn = false;
	}
}
