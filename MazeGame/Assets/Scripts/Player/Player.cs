using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Player : MonoBehaviour {

	// Totall amount of Battery the Player has - Default is 60 seconds worth
	public static float batteryCharge = 60f;

	// The rate in which the players battery is drained, default is 1 point for each seconds, total battery draining in 60 seconds.
	public static float batteryDrainRate = 1f;

	// Speed in which the player moves
	public static float movementSpeed = 2.5f;

	// Speed in which the player moves when the Soda Effect is active
	private float sodaEffectMovementSpeed = 5f;

	// Used for item collection
	public static int vhsCollectedCount;
	public static int batteryCollectedCount;
	public static int popcornCollectedCount;
	public static int sodaCollectedCount;
	public static int threedeeglassesCollectedCount;


	// When power up collected, enables this
	public static bool PickedUpPowerUp;

	// TODO: Will this effect make it into the game??
	// Bool to declare if the drunk effect is active
	public static bool isDrunk;
	// Bool to declae if Soda effect has been activated
	// Occurs when player collides with Soda Pick Up item
	public static bool activateSoda;
	// Bool to declare if Popcorn effect has been activated
	// Occurs when player collides with Popcorn Pick Up item
	public static bool activatePopCorn;
	// Bool to declare if 3D Glasses effect is on
	// Occurs when player collides with ThreeDeeGlasses
	public static bool activateThreeDee;

	// Bool to declare if spectral effect has been actived
	// Occurs when player collides with spectral
	public static float spectralEffect = 5.0f;
	// Duration in which teh isDrunk effect takes place;
	private float intoxicationDuration = 10.0f;
	private float intoxicationCountDown;
	// Duration in which the Soda Effect takes place
	private float sodaEffectDuration = 5.0f;
	private float sodaEffectCountDown;
	// Duration in which the Popcorn Effect takes place
	private float popCornEffectDuration = 10.0f;
	private float popCornEffectCountDown;

	// Duration in which ThreeDee Effect takes place
	private float threeDeeEffectDuration = 10.0f;
	private float threeDeeEffectCountDown;

	private bool sodaActive;
	private bool popcornActive;
	private bool drunkActive;
	private bool threedeeActive;

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
	private MorePPEffects.Anaglyph3D threeDeeEffect;
	// Animation to control the fish eye effect 
	private Animation fishEyeAnim;

	private bool guiModelShowing;
	private GameObject guiThreeDeeGlasses;
	private GameObject guiPopCorn;
	private GameObject guiSoda;

	//AUDIO
	private AudioSource aSource;
	public AudioClip guiPop;

	//public AudioClip flashLightClick;

	// Finds various components for the player script
	void Awake() {

		// Audio 
		aSource = GetComponent<AudioSource> ();

		mainCamera = GameObject.Find ("Main Camera");
		playerAnim = GetComponentInChildren<Animator> ();
		renderers = GetComponentsInChildren<MeshRenderer> ();

		fishEyeEffect = mainCamera.GetComponent<UnityStandardAssets.ImageEffects.Fisheye> ();
		motionBlurEffect = mainCamera.GetComponent<UnityStandardAssets.ImageEffects.MotionBlur> ();
		contrastEnhanceEffect = mainCamera.GetComponent<UnityStandardAssets.ImageEffects.ContrastEnhance> ();
		threeDeeEffect = mainCamera.GetComponent<MorePPEffects.Anaglyph3D> ();

		fishEyeAnim = mainCamera.GetComponent<Animation> ();

		guiThreeDeeGlasses = GameObject.Find ("GUI3DGlasses01");
		guiSoda = GameObject.Find ("GUISoda01");
		guiPopCorn = GameObject.Find ("GUIPopCorn01");
	}

	// All Image effects and power ups should be false on start in the player script
	// Set the battery change rate to 60
	// Set the battery drain rate to 1
	// Declare is drunk to false
	// Declare image effect is false
	// Declare soda effect is false
	// Delcare Pop Corn effect is false
	void Start () {
		batteryCharge = 60.0f;
		batteryDrainRate = 1.0f;
		isDrunk = false;
		imageEffectActive = false;
		activateSoda = false;
		activatePopCorn = false;
		activateThreeDee = false;
		PickedUpPowerUp = false;

		guiThreeDeeGlasses.SetActive (false);
	}

	void Update () {
		// If the player speed reduces, reduce the speed of the players walk animation
		if (movementSpeed < 2) {
			playerAnim.speed = 0.5f;

		} else if (movementSpeed > 3) {
			playerAnim.speed = 2f;
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

		// If the player collects a powerup, activates the PowerUp Coroutine
		if (PickedUpPowerUp) {
			Debug.Log ("Picked Up a Power Up");
			StartCoroutine ("PowerUp");
		}

		// If the player can walk, animate the player, if not, do not animate the player
		if (canMove) {
			playerAnim.SetBool ("walk", true);
//			if (!aSource.isPlaying) {
//				aSource.pitch = Random.Range (0.8f, 1.1f);
//				aSource.volume = Random.Range (0.8f, 1f);
//				aSource.Play ();
//			}
		} else {
			// If this bool is set ot false, player will default to idle animation
			playerAnim.SetBool ("walk", false);
		}
	}

	// Each power up checks to see if it is already running
	// If it is, restarts the effect countdown, if not begins running the power up
	IEnumerator PowerUp() {
		PickedUpPowerUp = false;
		// When SodaStreaming starts, sets the sodaEffectCountDown to sodaEffectDuration
		// Begins SodaOn
		// Performs countdown sodaEffectDuration
		// Begins SodaOff once countdonw complete
		if (!sodaActive) {
			sodaActive = true;
			while (activateSoda) {
				Debug.Log ("It was Soda");

				StartCoroutine (ShowGUIModel (guiSoda));

				sodaEffectCountDown = sodaEffectDuration;

				if (!imageEffectActive) {
					motionBlurEffect.enabled = true;
					contrastEnhanceEffect.enabled = true;
					imageEffectActive = true;
				}

				movementSpeed = sodaEffectMovementSpeed;

				while (sodaEffectCountDown != 0) {
					yield return new WaitForSecondsRealtime (1f);
					sodaEffectCountDown -= 1f;
				}

				movementSpeed = 2.5f;

				activateSoda = false;

				if (imageEffectActive) {
					motionBlurEffect.enabled = false;
					contrastEnhanceEffect.enabled = false;
					imageEffectActive = false;
				}
				Debug.Log ("Soda Over");
			}
			sodaActive = false;
		} else {
			sodaEffectCountDown = sodaEffectDuration;
		}

		// When PopCorn starts, sets the popCornEffectCountDown to popCornEffectDuration
		// Begins PopCornOn
		// Performs countdown sodaEffectDuration
		// Begins PopCornOff once countdonw complete
		if (!popcornActive) {
			popcornActive = true;
			while (activatePopCorn) {
				Debug.Log ("It Was Pop Corn");

				StartCoroutine (ShowGUIModel (guiPopCorn));

				popCornEffectCountDown = popCornEffectDuration;

				StartCoroutine ("PopCornSpawn");

				while (popCornEffectCountDown != 0) {
					yield return new WaitForSeconds (1f);
					popCornEffectCountDown -= 1f;
				}

				activatePopCorn = false;

				Debug.Log ("Pop Corn Over");
			}
			popcornActive = false;
		} else {
			popCornEffectCountDown = popCornEffectDuration;
		}

		if (!threedeeActive) {
			threedeeActive = true;
			while (activateThreeDee) {
				Debug.Log ("It Was Three Dee");
				StartCoroutine (ShowGUIModel (guiThreeDeeGlasses));

				threeDeeEffectCountDown = threeDeeEffectDuration;

				threeDeeEffect.enabled = true;

				while (threeDeeEffectCountDown != 0) {
					yield return new WaitForSeconds (1f);
					threeDeeEffectCountDown -= 1f;
				}

				threeDeeEffect.enabled = false;
				activateThreeDee = false;

				Debug.Log ("Three Dee Over");
				batteryDrainRate = 1f;
			}
			threedeeActive = false;
		} else {
			threeDeeEffectCountDown = threeDeeEffectDuration;
		}

		// When BoozyWoozy starts, sets the intoxicationCountDown to intoxicationDuration
		// Begins MuntedOn
		// Performs countdown intoxicationDuration
		// Begins MuntedOff once countdonw complete
		if (!drunkActive) {
			drunkActive = true;
			while (isDrunk) {
				intoxicationCountDown = intoxicationDuration;
				if (!imageEffectActive) {
					fishEyeEffect.enabled = true;
					fishEyeAnim.enabled = true;
					imageEffectActive = true;
				}

				while (intoxicationCountDown != 0) {
					yield return new WaitForSecondsRealtime (1f);
					intoxicationCountDown -= 1f;
				}

				isDrunk = false;

				if (imageEffectActive) {
					fishEyeEffect.enabled = false;
					fishEyeAnim.enabled = false;
					imageEffectActive = false;
				}
				Debug.Log ("Drunk Over");
			} 
			drunkActive = false;
		} else {
			intoxicationCountDown = intoxicationDuration;
		}

		Debug.Log ("Power Up Done");
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

		//TODO : Test this, I think the line is redundant
		activatePopCorn = false;
	}

	public IEnumerator ShowGUIModel(GameObject GUIModel) {
		guiModelShowing = true;
		while (guiModelShowing) {
			GUIModel.SetActive (true);
			LeanTween.scale (GUIModel, new Vector3(100f, 100f, 100f), 1f );
			yield return new WaitForSeconds (1f);
			LeanTween.scale (GUIModel, new Vector3(0.0f, 0.0f, 0.0f), 1f );
			yield return new WaitForSeconds (1f);
			aSource.Stop ();
			aSource.clip = guiPop;
			aSource.loop = false;
			aSource.Play ();
			GUIModel.SetActive (false);
			guiModelShowing = false;
		}
	}
}
