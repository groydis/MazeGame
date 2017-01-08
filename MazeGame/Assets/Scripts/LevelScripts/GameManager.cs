using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using DG.Tweening;


public class GameManager : MonoBehaviour {

	public static GameManager Instance { get; set; }

	public static bool pauseGame;
	public static float saveBattery;

	private GameObject playButton;
	private GameObject pauseButton;
	private GameObject restartButton;
	private GameObject pauseRecText;
	private GameObject batteryImage;
	private GameObject sugarRushText;



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


	// Use this for initialization
	void Awake () {
		startText = GameObject.Find ("Main Text").GetComponent<Text>();

		sugarRushText = GameObject.Find ("SugarRushText");
		playButton = GameObject.Find ("PlayButton");
		pauseButton = GameObject.Find ("PauseButton");
		restartButton = GameObject.Find ("RestartButton");
		pauseRecText = GameObject.Find ("PauseRecText");
		batteryImage = GameObject.Find ("BatteryImage");

		recImage = GameObject.Find ("RecDot").GetComponent<Image>();

		pauseRecTextText = pauseRecText.GetComponent<Text> ();

		sugarRushText.SetActive (false);
		playButton.SetActive (false);
		pauseButton.SetActive (false);
		restartButton.SetActive (false);
		pauseRecText.SetActive (false);
		batteryImage.SetActive (false);
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
		Debug.Log ("I ran!!");

		//DialogueSystem.dialogueActive = false;

		currentScene = SceneManager.GetActiveScene ();
		currentSceneName = currentScene.name;

		if (currentSceneName == "MainMenu") {
			sugarRushText.SetActive (false);
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
		} else if (DialogueSystem.dialogueActive){
			Debug.Log ("This is a dialogue Pause");
			pauseButton.SetActive (false);
			playButton.SetActive (false);
			restartButton.SetActive (false);
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

		pauseGame = true;
		//pauseText.SetActive (true);
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

		} else if (DialogueSystem.dialogueActive) {
			Debug.Log ("Dialogue Unpause");

			pauseButton.SetActive (true);
			playButton.SetActive (false);
			restartButton.SetActive (false);
		}

		pauseRecTextText.text = "[REC]";
		recImage.enabled = true;

		pauseGame = false;
		Time.timeScale = 1;
	}

	public void RestartGame() {
		Debug.Log ("Restart the level");
		//TODO: Restart the level
		UnPauseGame();
		SceneManager.LoadScene (SceneManager.GetActiveScene ().name);
	}

	public void PlayGame(string levelToLoad) {
		Debug.Log ("PLAY");
		SceneManager.LoadScene (levelToLoad);
	
	}

	public static void FinishLevel() {
		SceneManager.LoadScene (SceneManager.GetActiveScene().buildIndex + 1);
	}

	public IEnumerator MainMenuLoad() {
		yield return new WaitForSeconds (5f);
		if (currentSceneName == "MainMenu") {
			DOTween.To(()=> crtEffect.TextureSize, x=> crtEffect.TextureSize = x, 756.8f, 5f);
			DOTween.To (() => glitchEffect.colorIntensity, x => glitchEffect.colorIntensity = x, 0f, 3f);
		}
	}
	//Todo: Make TweenInCRT()

	public void TweenInCRT() {
		DOTween.To(()=> crtEffect.TextureSize, x=> crtEffect.TextureSize = x, 756.8f, 3f);
		DOTween.To (() => glitchEffect.colorIntensity, x => glitchEffect.colorIntensity = x, 0f, 3f);
	}

	public void TweenOutCRT() {
		DOTween.To(()=> crtEffect.Distortion, x=> crtEffect.Distortion = x, 0f, 2f);
		DOTween.To (() => glitchEffect.flipIntensity, x => glitchEffect.flipIntensity = x, 0f, 2f);
	}

	public IEnumerator StartCountDown()
	{
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
}
