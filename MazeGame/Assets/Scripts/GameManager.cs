using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.Audio;


public class GameManager : MonoBehaviour {

	public static GameManager Instance { get; set; }

	public static bool pauseGame;
	public static float saveBattery;

	// GUI
	private GameObject playButton;
	private GameObject pauseButton;
	private GameObject restartBtton;
	private GameObject toolsButton;
	private GameObject exitButton;
	private GameObject pauseRecText;
	private GameObject batteryImage;

	public static GameObject levelOverPanel;

	public static GameObject fwdButton;

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

	private bool timeToDie;



	// Use this for initialization
	void Awake () {
		startText = GameObject.Find ("Main Text").GetComponent<Text>();

		levelOverPanel = GameObject.Find ("LevelOverPanel");
		vhsText = GameObject.Find ("TapesText").GetComponent<Text> ();
		batteryText = GameObject.Find ("BatteryText").GetComponent<Text> ();
		popcornText = GameObject.Find ("PopcornText").GetComponent<Text> ();
		sodaText = GameObject.Find ("SodaText").GetComponent<Text> ();
		threedeeglassesText = GameObject.Find ("ThreeDeeGlassesText").GetComponent<Text> ();
		completetionTimeText = GameObject.Find ("CompletionTime").GetComponent<Text> ();
		bestTimeText = GameObject.Find ("BestTime").GetComponent<Text> ();

		fwdButton = GameObject.Find ("Forward");

		levelOverPanel.SetActive (false);

		DialogueSystem.dialogueActive = false;

		timeToDie = false;

		if (Instance != null && Instance != this) {
			Destroy (gameObject);
		} else {
			Instance = this;
		}
	}

	void Start() {
		stopTimer = true;
		PauseMenu.Instance.UnPauseGame();
		CountPickUpItemsInScene ();
		levelOverPanel.SetActive (false);

		Player.canMove = false;


		StartCoroutine ("StartCountDown");

	}

	void Update() {
		if (!stopTimer) {
			timerTime += Time.deltaTime;
			//Debug.Log (FloatToTime(timerTime));
		}

		if (Player.isDead) {
			if (!timeToDie) {
				StartCoroutine ("Die");
			}
		}
	}
		
	public void RestartLevel() {
		Debug.Log ("Restart the level");
		SceneManager.LoadScene (SceneManager.GetActiveScene().name);
	}

	public void ExitLevel() {
		PauseMenu.Instance.UnPauseGame ();
		Debug.Log ("Exit the level");
		SceneManager.LoadScene ("LevelSelect");
	}
		
	public void GameOverPanel() {
		Player.canMove = false;
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
		fwdButton.SetActive (true);

		EffectManager.Instance.GlitchEffectOn ();
		EffectManager.Instance.ColoredRaysOn ();

		LevelManager.SaveHundredPercent(SceneManager.GetActiveScene().name);
		levelOverPanel.SetActive (true);

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

	public void NextLevel() {
		if (SceneManager.GetActiveScene ().name == "Level04") {
			SceneManager.LoadScene ("LevelSelect");
		} else {
			SceneManager.LoadScene (SceneManager.GetActiveScene().buildIndex + 1);
		}
	}

	public IEnumerator StartCountDown()
	{
		PauseMenu.Instance.HidePausebutton ();
		int resultsInt = LevelManager.GetLevelRuns (SceneManager.GetActiveScene().name);
		if (resultsInt == 0) {
			LevelManager.SaveCurrentLevel (SceneManager.GetActiveScene().name);
		}
		EffectManager.Instance.GlitchEffectOn ();
		EffectManager.Instance.ColoredRaysOn ();
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
		PauseMenu.Instance.ShowPauseButton ();
		stopTimer = false;
		startText.text = "";
		EffectManager.Instance.GlitchEffectOff ();
		EffectManager.Instance.ColoredRaysOff ();
		Player.batteryCharge = 60f;
		Player.canMove = true;
		StopCoroutine ("StartCountDown");
	}

	public void CountPickUpItemsInScene() {
		vhsCount = 0;
		batteryCount = 0;
		popcornCount = 0;
		sodaCount = 0;
		threedeeglassesCount = 0;

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

	public string FloatToTime (float time) {
		System.TimeSpan t = System.TimeSpan.FromSeconds(time);
		return string.Format("{0:D2}h/{1:D2}m/{2:D2}s", t.Hours, t.Minutes, t.Seconds);
	}



	public IEnumerator Die() {
		Player.canMove = false;
		timeToDie = true;
		float deathTimer = 3;
			while (deathTimer > 0)
			{
				Player.canMove = false;
				startText.text = deathTimer.ToString();
				yield return new WaitForSeconds(1.0f);
				deathTimer--;
			}
			GameOverPanel ();
			Player.canMove = false;
			completetionTimeText.text = "Consumed by darkness, you go mad. You never escape the labyrinth.";
			bestTimeText.text = "";
			fwdButton.SetActive (false);
	}
}
