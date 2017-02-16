using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class PauseMenu : MonoBehaviour {

	public static PauseMenu Instance { get; set; }

	public static bool pauseGame;
	public static float saveBattery;

	private GameObject playButton;
	private GameObject pauseButton;
	private GameObject restartButton;
	private GameObject toolsButton;
	private GameObject exitButton;
	private GameObject pauseRecText;
	private GameObject batteryImage;

	private Text pauseRecTextText;
	private Image recImage;

	void Awake() {
		playButton = GameObject.Find ("PlayButton");
		pauseButton = GameObject.Find ("PauseButton");
		restartButton = GameObject.Find ("RestartButton");
		toolsButton = GameObject.Find ("ToolsButton");
		exitButton = GameObject.Find ("ShutDownButton");
		pauseRecText = GameObject.Find ("PauseRecText");
		batteryImage = GameObject.Find ("BatteryImage");

		pauseRecTextText = pauseRecText.GetComponent<Text> ();
		recImage = GameObject.Find ("RecDot").GetComponent<Image>();

		if (Instance != null && Instance != this) {
			Destroy (gameObject);
		} else {
			Instance = this;
		}
	}


	// Use this for initialization
	void Start () {
		batteryImage.SetActive (true);
		pauseRecText.SetActive (true);

		playButton.SetActive (false);
		restartButton.SetActive (false);
		toolsButton.SetActive (false);
		exitButton.SetActive (false);

		pauseRecTextText.text = "[REC]";

		recImage.enabled = true;
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void PauseGame() {
		if (!AudioManager.sfxIsMuted) {
			AudioManager.Instance.MuteSFX ();
		}

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

		EffectManager.Instance.GlitchEffectOn ();
		EffectManager.Instance.ColoredRaysOn ();
	
		pauseGame = true;
		Time.timeScale = 0;
	}

	public void UnPauseGame() {
		if (!AudioManager.sfxIsMuted) {
			AudioManager.Instance.UnMuteSFX ();
		}

		EffectManager.Instance.GlitchEffectOff ();
		EffectManager.Instance.ColoredRaysOff ();

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

		pauseGame = false;
		Time.timeScale = 1;
	}

	public void ShowPauseButton() {
		pauseButton.SetActive(true);
	}

	public void HidePausebutton() {
		pauseButton.SetActive (false);
	}
}
