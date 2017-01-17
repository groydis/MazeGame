using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public class GameManager : MonoBehaviour {

	public static GameManager Instance { get; set; }

	public static bool pauseGame;
	public static float saveBattery;

	// GUI
	private GameObject playButton;
	private GameObject pauseButton;
	private GameObject restartButton;
	private GameObject toolsButton;
	private GameObject exitButton;
	private GameObject pauseRecText;
	private GameObject batteryImage;

	public static GameObject levelOverPanel;

	private GlitchEffect glitchEffect;
	private MorePPEffects.ColoredRays crtEffect;

	private UnityStandardAssets.ImageEffects.ContrastEnhance contrastEnhance;

	private float countdownValue = 3f;
	private float currCountDownValue;

	private Text startText;
	private Text pauseRecTextText;
	private Image recImage;

	private Text completetionTimeText;
	private Text bestTimeText;

	// AUDIO


	// ITEM COLLECTION
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

	// TIMER
	public bool stopTimer;
	public float timerTime;
	public static float currentLevelTime;
	public static float bestLevelTime;




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
		completetionTimeText = GameObject.Find ("CompletionTime").GetComponent<Text> ();
		bestTimeText = GameObject.Find ("BestTime").GetComponent<Text> ();

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
		crtEffect = GameObject.Find ("Main Camera").GetComponent<MorePPEffects.ColoredRays> ();
		contrastEnhance = GameObject.Find ("Main Camera").GetComponent<UnityStandardAssets.ImageEffects.ContrastEnhance> ();

		if (Instance != null && Instance != this) {
			Destroy (gameObject);
		} else {
			Instance = this;
		}
	}

	void Start() {
		stopTimer = true;
		CountPickUpItemsInScene ();
			StartGame ();

	}

	void Update() {
		if (!stopTimer) {
			timerTime += Time.deltaTime;
			Debug.Log (FloatToTime(timerTime));
		}
	}
		
	public void StartGame() {
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
		SceneManager.LoadScene (SceneManager.GetActiveScene().name);
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

	public void GameOverPanel() {
		stopTimer = true;
		currentLevelTime = timerTime;
		bestLevelTime = LevelManager.GetBestLevelTime (SceneManager.GetActiveScene ().name);
		Debug.Log("Best Level Time : " + bestLevelTime);
		if (currentLevelTime < bestLevelTime || bestLevelTime == 0.0f) {
			bestLevelTime = currentLevelTime;
			LevelManager.SaveNewBestLevelTime (SceneManager.GetActiveScene ().name, bestLevelTime);
			Debug.Log ("Winner Winner : Best Level Time : " + bestLevelTime);

			completetionTimeText.text = "Completion Time: " + FloatToTime(currentLevelTime);
			bestTimeText.text = "Best Time: " + FloatToTime(bestLevelTime);

		} else {
			
			completetionTimeText.text = "Completion Time: " + FloatToTime(currentLevelTime);
			bestTimeText.text = "Best Time: " + FloatToTime(bestLevelTime);

			Debug.Log("No Winnere Here : Best Level Time : " + bestLevelTime);
		}

		EnableGlitchAndCRT ();
		LevelManager.SaveHundredPercent(SceneManager.GetActiveScene().name);
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
		if (LevelManager.GetLevelRuns (SceneManager.GetActiveScene().name) != 0) {
			resultsInt = LevelManager.GetLevelRuns (SceneManager.GetActiveScene().name);
		} else {
			resultsInt = 1;
		}
		LevelManager.SaveLevelProgress (SceneManager.GetActiveScene().name, resultsInt);
	}

	public void FinishLevel() {
		if (SceneManager.GetActiveScene ().name == "Level04") {
			SceneManager.LoadScene ("LevelSelect");
		} else {
			SceneManager.LoadScene (SceneManager.GetActiveScene().buildIndex + 1);
		}
	}

	public IEnumerator StartCountDown()
	{
		int resultsInt = LevelManager.GetLevelRuns (SceneManager.GetActiveScene().name);
		if (resultsInt == 0) {
			LevelManager.SaveCurrentLevel (SceneManager.GetActiveScene().name);
		}
		startText.enabled = true;
		currCountDownValue = countdownValue;
		while (currCountDownValue > 0)
		{
			Player.canMove = false;
			startText.text = currCountDownValue.ToString();
			yield return new WaitForSeconds(1.0f);
			currCountDownValue--;
		}
		startText.text = "Go";
		yield return new WaitForSeconds (1f);
		stopTimer = false;
		startText.text = "";
		glitchEffect.enabled = false;
		DisableGlitchAndCRT ();
		Player.batteryCharge = 60f;
		Player.canMove = true;
		StopCoroutine ("StartCountDown");
	}

	public void CountPickUpItemsInScene() {
		GameObject[] totalVHS = GameObject.FindGameObjectsWithTag ("VHS Tape");
		GameObject[] totalBattery = GameObject.FindGameObjectsWithTag ("Battery");
		GameObject[] totalPopcorn = GameObject.FindGameObjectsWithTag ("Popcorn");
		GameObject[] totalSoda = GameObject.FindGameObjectsWithTag ("Soda");
		GameObject[] totalThreeDeeGlasses = GameObject.FindGameObjectsWithTag ("Three Dee Glasses");

		// Then Tally them up
		for (int i = 1; i <= totalVHS.Length; i++) {
			GameManager.vhsCount++;
		}
		for (int i = 1; i <= totalBattery.Length; i++) {
			GameManager.batteryCount++;
		}
		for (int i = 1; i <= totalPopcorn.Length; i++) {
			GameManager.popcornCount++;
		}
		for (int i = 1; i <= totalSoda.Length; i++) {
			GameManager.sodaCount++;
		}
		for (int i = 1; i <= totalThreeDeeGlasses.Length; i++) {
			GameManager.threedeeglassesCount++;
		}
	}

	public void EnableGlitchAndCRT() {
		crtEffect.enabled = true;
		glitchEffect.enabled = true;
		glitchEffect.intensity = 0.2f;
		glitchEffect.colorIntensity = 0.1f;
		crtEffect.strength = 1f;
	}

	public void DisableGlitchAndCRT() {
		crtEffect.enabled = false;
		glitchEffect.enabled = false;
		glitchEffect.intensity = 0.2f;
		glitchEffect.colorIntensity = 1f;
		crtEffect.strength = 1f;
	}

	public string FloatToTime (float time) {
		System.TimeSpan t = System.TimeSpan.FromSeconds(time);
		return string.Format("{0:D2}h/{1:D2}m/{2:D2}s", t.Hours, t.Minutes, t.Seconds);
	}
}
