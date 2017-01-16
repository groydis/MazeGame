using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public class GameManager : MonoBehaviour {

	public static GameManager Instance { get; set; }

	public static bool pauseGame;
	public static float saveBattery;

	private GameObject playButton;
	private GameObject pauseButton;
	private GameObject restartButton;
	private GameObject toolsButton;
	private GameObject exitButton;
	private GameObject pauseRecText;
	private GameObject batteryImage;

	public static GameObject levelOverPanel;


	private GlitchEffect glitchEffect;
	private CRT crtEffect;
	private UnityStandardAssets.ImageEffects.ContrastEnhance contrastEnhance;

	private Scene currentScene;
	private string currentSceneName;

	private float countdownValue = 3f;
	private float currCountDownValue;

	private Text startText;
	private Text pauseRecTextText;
	private Image recImage;

	// Audio

	// Item Collection Stuff
	public static int vhsCount;
	public static int batteryCount;
	public static int popcornCount;
	public static int sodaCount;
	public static int threedeeglassesCount;

	public static Text vhsText;
	public static Text batteryText;
	public static Text popcornText;
	public static Text sodaText;
	public static Text threedeeglassesText;



	// Use this for initialization
	void Awake () {

		startText = GameObject.Find ("Main Text").GetComponent<Text>();


		playButton = GameObject.Find ("PlayButton");
		pauseButton = GameObject.Find ("PauseButton");
		restartButton = GameObject.Find ("RestartButton");
		toolsButton = GameObject.Find ("ToolsButton");
		exitButton = GameObject.Find ("ShutDownButton");
		pauseRecText = GameObject.Find ("PauseRecText");
		batteryImage = GameObject.Find ("BatteryImage");

		levelOverPanel = GameObject.Find ("LevelOverPanel");
		vhsText = GameObject.Find ("TapesText").GetComponent<Text> ();
		batteryText = GameObject.Find ("BatteryText").GetComponent<Text> ();
		popcornText = GameObject.Find ("PopcornText").GetComponent<Text> ();
		sodaText = GameObject.Find ("SodaText").GetComponent<Text> ();
		threedeeglassesText = GameObject.Find ("ThreeDeeGlassesText").GetComponent<Text> ();

		recImage = GameObject.Find ("RecDot").GetComponent<Image>();

		pauseRecTextText = pauseRecText.GetComponent<Text> ();

		playButton.SetActive (false);
		pauseButton.SetActive (false);
		restartButton.SetActive (false);
		pauseRecText.SetActive (false);
		batteryImage.SetActive (false);
		levelOverPanel.SetActive (false);
		DialogueSystem.dialogueActive = false;
		pauseGame = false;

		glitchEffect = GameObject.Find ("Main Camera").GetComponent<GlitchEffect> ();
		crtEffect = GameObject.Find ("Main Camera").GetComponent<CRT> ();
		contrastEnhance = GameObject.Find ("Main Camera").GetComponent<UnityStandardAssets.ImageEffects.ContrastEnhance> ();

		if (Instance != null && Instance != this) {
			Destroy (gameObject);
		} else {
			Instance = this;
		}
	}

	void Start() {
		
		CountPickUpItemsInScene ();


		Debug.Log ("VHS: " + vhsCount + " Battery: " + batteryCount + " Popcorn: " + popcornCount + " Soda: " + sodaCount + " 3D Glasses: " + threedeeglassesCount);
		
		//DialogueSystem.dialogueActive = false;

		currentScene = SceneManager.GetActiveScene ();
		currentSceneName = currentScene.name;

		if (currentSceneName == "MainMenu") {
			playButton.SetActive (false);
			pauseButton.SetActive (false);
			restartButton.SetActive (false);
			pauseRecText.SetActive (false);
			batteryImage.SetActive (false);
			DialogueSystem.dialogueActive = false;
			pauseGame = false;

			StartCoroutine ("MainMenuLoad");
		} else {
			StartGame ();
		}
	}
		
	public void StartGame() {
		TweenInCRT ();
		pauseRecText.SetActive (true);
		playButton.SetActive (false);
		restartButton.SetActive (false);
		batteryImage.SetActive (true);
		pauseButton.SetActive (true);
		toolsButton.SetActive (false);
		exitButton.SetActive (false);

		Player.canMove = false;

		pauseRecTextText.text = "[REC]";
		recImage.enabled = true;

		StartCoroutine ("StartCountDown");
	}

	public void PauseGame() {

		if (!DialogueSystem.dialogueActive) {
			Debug.Log ("This is a user Pause");
			pauseButton.SetActive (false);
			playButton.SetActive (true);
			restartButton.SetActive (true);
			toolsButton.SetActive (true);
			exitButton.SetActive (true);
		} else if (DialogueSystem.dialogueActive){
			Debug.Log ("This is a dialogue Pause");
			pauseButton.SetActive (false);
			playButton.SetActive (false);
			restartButton.SetActive (false);
			toolsButton.SetActive (false);
			exitButton.SetActive (false);
		}
		pauseRecTextText.text = "[PAUSED]";
		recImage.enabled = false;
		glitchEffect.colorIntensity = 0.2f;
		glitchEffect.intensity = 0.5f;
		glitchEffect.flipIntensity = 0.5f;
		glitchEffect.enabled = true;

		crtEffect.TextureSize = 756.8f;
		crtEffect.Distortion = 0.1f;
		crtEffect.InputGamma = 1f;
		crtEffect.OutputGamma = 1f;
		crtEffect.enabled = true;

		contrastEnhance.intensity = 0.255f;
		contrastEnhance.threshold = 0f;
		contrastEnhance.blurSpread = 0.255f;
		contrastEnhance.enabled = true;


		AudioListener.pause = true;
			

		pauseGame = true;
		Time.timeScale = 0;
	}

	public void UnPauseGame() {
		glitchEffect.colorIntensity = 0.2f;
		glitchEffect.intensity = 0.5f;
		glitchEffect.flipIntensity = 0.5f;
		glitchEffect.enabled = false;

		crtEffect.TextureSize = 756.8f;
		crtEffect.Distortion = 0.1f;
		crtEffect.InputGamma = 1f;
		crtEffect.OutputGamma = 1f;
		crtEffect.enabled = false;

		contrastEnhance.intensity = 0.255f;
		contrastEnhance.threshold = 0f;
		contrastEnhance.blurSpread = 0.255f;
		contrastEnhance.enabled = false;

		if (!DialogueSystem.dialogueActive) {
			Debug.Log ("User has Unpaused");

			playButton.SetActive (false);
			restartButton.SetActive (false);
			pauseButton.SetActive (true);
			toolsButton.SetActive (false);
			exitButton.SetActive (false);

		} else if (DialogueSystem.dialogueActive) {
			Debug.Log ("Dialogue Unpause");

			pauseButton.SetActive (true);
			playButton.SetActive (false);
			restartButton.SetActive (false);
		}

		pauseRecTextText.text = "[REC]";
		recImage.enabled = true;

		AudioListener.pause = false;

		pauseGame = false;
		Time.timeScale = 1;
	}

	public void RestartGame() {
		Debug.Log ("Restart the level");
		UnPauseGame();
		SceneManager.LoadScene (SceneManager.GetActiveScene ().name);
	}

	public void ExitGame() {
		UnPauseGame ();
		Debug.Log ("Exit the level");
		SceneManager.LoadScene ("LevelSelect");
	}

	public void ToolsButton() {
		Debug.Log ("Settings Button LO.. actually this deletes all the player prefs... shit aye... sneaky.");
		PlayerPrefs.DeleteAll ();
	}

	public void PlayGame(string levelToLoad) {
		Debug.Log ("PLAY");
		SceneManager.LoadScene (levelToLoad);
	
	}

	public static void GameOverPanel() {
		levelOverPanel.SetActive (true);
		// Get Best time (if it exsists)
		// Get Current time, if the current is < best time.. well you know.

		// Set Items Found Text
		vhsText.text = Player.vhsCollectedCount + "/" + vhsCount;
		batteryText.text = Player.batteryCollectedCount + "/" + batteryCount;
		popcornText.text = Player.popcornCollectedCount + "/" + popcornCount;
		sodaText.text = Player.sodaCollectedCount + "/" + sodaCount;
		threedeeglassesText.text = Player.threedeeglassesCollectedCount + "/" + threedeeglassesCount;


		int resultsInt = 0;
		if (LevelManager.GetLevelRuns (SceneManager.GetActiveScene ().name) != 0) {
			resultsInt = LevelManager.GetLevelRuns (SceneManager.GetActiveScene ().name);
		} else {
			resultsInt = 1;
		}
		LevelManager.SaveLevelProgress (SceneManager.GetActiveScene ().name, resultsInt);
	}

	public void FinishLevel() {
		if (SceneManager.GetActiveScene ().name == "Level04") {
			SceneManager.LoadScene ("LevelSelect");
		} else {
			SceneManager.LoadScene (SceneManager.GetActiveScene ().buildIndex + 1);
		}
	}

	public IEnumerator MainMenuLoad() {
		yield return new WaitForSeconds (5f);
		if (currentSceneName == "MainMenu") {
			LeanTween.value (this.gameObject, 0, 756.8f, 3.0f).setOnUpdate ((float val) => {
				crtEffect.TextureSize = val;
			});
			LeanTween.value (this.gameObject, 1.0f, 0, 3.0f).setOnUpdate ((float val) => {
				//Debug.Log("timeScale val:"+val);
				glitchEffect.colorIntensity = val;
			});
		}
	}
	//Todo: Make TweenInCRT()

	public void TweenInCRT() {
		LeanTween.value (this.gameObject, 0, 756.8f, 3.0f).setOnUpdate ((float val) => {
			crtEffect.TextureSize = val;
		});
		LeanTween.value (this.gameObject, 1.0f, 0, 3.0f).setOnUpdate ((float val) => {
			glitchEffect.colorIntensity = val;
		});
	}

	public void TweenOutCRT() {
		LeanTween.value (this.gameObject, 756.8f, 0.0f, 2.0f).setOnUpdate ((float val) => {
			crtEffect.TextureSize = val;
		});
		LeanTween.value (this.gameObject, 1.0f, 0, 2.0f).setOnUpdate ((float val) => {
			glitchEffect.colorIntensity = val;
		});
	}

	public IEnumerator StartCountDown()
	{
		int resultsInt = LevelManager.GetLevelRuns (SceneManager.GetActiveScene ().name);
		if (resultsInt == 0) {
			LevelManager.SaveCurrentLevel (SceneManager.GetActiveScene ().name);
		}
		startText.enabled = true;
		currCountDownValue = countdownValue;
		while (currCountDownValue > 0)
		{
			Player.canMove = false;
			yield return new WaitForSeconds(1.0f);
			currCountDownValue--;
			startText.text = currCountDownValue.ToString();
		}
		startText.text = "Go";
		GameManager.Instance.TweenOutCRT();
		yield return new WaitForSeconds (1f);
		glitchEffect.enabled = false;
		crtEffect.enabled = false;
		startText.enabled = false;
		Player.batteryCharge = 60f;
		Player.canMove = true;
		StopCoroutine ("StartCountDown");
	}

	public static void CountPickUpItemsInScene() {
		GameObject[] totalVHS = GameObject.FindGameObjectsWithTag ("VHS Tape");
		GameObject[] totalBattery = GameObject.FindGameObjectsWithTag ("Battery");
		GameObject[] totalPopcorn = GameObject.FindGameObjectsWithTag ("Popcorn");
		GameObject[] totalSoda = GameObject.FindGameObjectsWithTag ("Soda");
		GameObject[] totalThreeDeeGlasses = GameObject.FindGameObjectsWithTag ("Three Dee Glasses");

		// Then Tally them up
		foreach (GameObject vhs in totalVHS) {
			GameManager.vhsCount++;
		}
		foreach (GameObject batterys in totalBattery) {
			GameManager.batteryCount++;
		}
		foreach (GameObject popcorns in totalPopcorn) {
			GameManager.popcornCount++;
		}
		foreach (GameObject sodas in totalSoda) {
			GameManager.sodaCount++;
		}
		foreach (GameObject threedeeglasses in totalThreeDeeGlasses) {
			GameManager.threedeeglassesCount++;
		}
	}
}
