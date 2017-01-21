using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.Audio;

public class SettingsMenu : MonoBehaviour {

	public static SettingsMenu Instance { get; set; }

	private GameObject toolsButton;

	private GameObject soundPanel;

	// SETTINGS BUTTON

	private bool musicOn;
	private bool sfxOn;

	private GameObject musicButton;
	private GameObject sfxButton;
	private GameObject resetgameButton;

	public bool toolButtonsOn;

	public AudioMixerGroup scenary;
	public AudioMixerGroup music;
	public AudioMixerGroup hazards;
	public AudioMixerGroup pickupeffects;

	private int prefMusicInt;
	private int prefSFXInt;

//	public Sprite speakerOn;
//	public Sprite speakerOff;




	void Awake() {
		musicButton = GameObject.Find ("Music");
		sfxButton = GameObject.Find ("SFX");
		resetgameButton = GameObject.Find ("ResetGameData");
		soundPanel = GameObject.Find ("SoundPanel");

		toolsButton = GameObject.Find ("ToolsButton");

		if (Instance != null && Instance != this) {
			Destroy (gameObject);
		} else {
			Instance = this;
		}

		prefMusicInt = PlayerPrefs.GetInt ("Music");
		prefSFXInt = PlayerPrefs.GetInt ("SFX");

		Debug.Log("Music: " + prefMusicInt + " SFX: " + prefSFXInt);
	}

	// Use this for initialization
	void Start () {

		// 0 = OFF
		// 1 = ON

		if (prefMusicInt == 1) {
			AudioManager.Instance.MuteMusic ();
			musicButton.GetComponent<Toggle> ().isOn = true;
			Debug.Log ("Music Off, on start");
			AudioManager.musicIsMuted = true;
		} else if (prefMusicInt == 0) {
			AudioManager.Instance.UnMuteMusic ();
			Debug.Log ("Music On, on start");
			musicButton.GetComponent<Toggle> ().isOn = false;
			AudioManager.musicIsMuted = false;
		}

		if (prefSFXInt == 1) {
			AudioManager.Instance.MuteSFX ();
			sfxButton.GetComponent<Toggle> ().isOn = true;
			Debug.Log ("SFX Off, on start");
			AudioManager.sfxIsMuted = true;
		} else if (prefSFXInt == 0) {
			AudioManager.Instance.UnMuteSFX ();
			Debug.Log ("SFX On, on start");
			sfxButton.GetComponent<Toggle> ().isOn = false;
			AudioManager.sfxIsMuted = false;
		}
			
		soundPanel.SetActive (false);
	}

	public void HideToolsButton() {
		soundPanel.SetActive (false);
		musicButton.SetActive (false);
		sfxButton.SetActive (false);
		resetgameButton.SetActive (false);
		toolButtonsOn = false;
		Debug.Log("Setting Off");
	}

	public void ShowToolsButton() {
		soundPanel.SetActive (true);
		musicButton.SetActive (true);
		sfxButton.SetActive (true);
		resetgameButton.SetActive (true);
		resetgameButton.GetComponent<Button> ().interactable = true;
		resetgameButton.GetComponentInChildren<Text> ().text = "**Reset game data**";
		toolButtonsOn = true;
		Debug.Log("Music: " + PlayerPrefs.GetInt("Music"));
		Debug.Log("SFX: " + PlayerPrefs.GetInt("SFX"));
		Debug.Log("Setting On");
	}

	public void ToolsButton() {
		if (!toolButtonsOn) {
			ShowToolsButton ();
		} else {
			HideToolsButton ();
		}
	}


	public void MusicOnOff() {
		// 0 = ON
		// 1 = OFF
		if (musicButton.GetComponent<Toggle> ().isOn) {
			AudioManager.Instance.MuteMusic ();
			PlayerPrefs.SetInt ("Music", 1);
			Debug.Log ("Music Off");
			AudioManager.musicIsMuted = true;
		} else {
			AudioManager.Instance.UnMuteMusic ();
			PlayerPrefs.SetInt ("Music", 0);
			Debug.Log ("Music On");
			AudioManager.musicIsMuted = false;
		}
		Debug.Log ("Saving Music");
		PlayerPrefs.Save ();
		Debug.Log ("Music Saved");
		Debug.Log ("Music is now: " + PlayerPrefs.GetInt("Music"));
	}

	public void SFXOnOff() {
		// 1 = OFF
		// 0 = ON
		if (sfxButton.GetComponent<Toggle> ().isOn) {
			AudioManager.Instance.MuteSFX ();
			PlayerPrefs.SetInt ("SFX", 1);
			Debug.Log ("SFX Off");
			AudioManager.sfxIsMuted = true;
		} else if (!sfxButton.GetComponent<Toggle> ().isOn) {
			AudioManager.Instance.UnMuteSFX ();
			PlayerPrefs.SetInt ("SFX", 0);
			Debug.Log ("SFX On");
			AudioManager.sfxIsMuted = false;
		}
		PlayerPrefs.Save ();
	}

	public void ClearPlayerData() {
		PlayerPrefs.DeleteAll ();
		Debug.Log ("Deleted All Player Data");
		PlayerPrefs.Save ();
		resetgameButton.GetComponentInChildren<Text> ().text = "Data Reset";
		resetgameButton.GetComponent<Button> ().interactable = false;
	}
}
