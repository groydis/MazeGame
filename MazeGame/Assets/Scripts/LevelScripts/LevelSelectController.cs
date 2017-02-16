using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class LevelSelectController : MonoBehaviour {

	private GameObject tutorialButton;


	public string[] filmTitles;
	public Font[] theFontList;

	private Text titleText;
	private Button playButton;
	private GameObject backToScenarioSelect;

	private GameObject playButtonGO;
	private GameObject fwdButtonGO;
	private GameObject backButtonGo;

	public List<string> scenarioOneLevels;
	public List<string> scenarioTwoLevels;
	public List<string> scenarioThreeLevels;
	public List<string> scenarioFourLevels;

	public Button[] levelButtonsScenarioOne;
	public Button[] levelButtonsScenarioTwo;
	public Button[] levelButtonsScenarioThree;
	public Button[] levelButtonsScenarioFour;

	private int filmTitleCount;
	private int currentFilm;
	private bool canSpin;

	private Light[] lights;

	private GameObject levelSelectScreenS1;
	private GameObject levelSelectScreenS2;
	private GameObject levelSelectScreenS3;
	private GameObject levelSelectScreenS4;
	private GameObject waitText;

	private bool canPlay;

	// AUDIO

	private AudioSource aSource;
	public AudioClip playButtonClip;
	public AudioClip fwdbackButtonClip;

	// Camera Animation

	private GameObject mainCamera;
	private GameObject defaultCamPos;
	private GameObject s1CamPos;
	private GameObject s2CamPos;
	private GameObject s3CamPos;
	private GameObject s4CamPos;

	void Awake() {

		mainCamera = GameObject.Find ("Main Camera");
		defaultCamPos = GameObject.Find ("DefaultCamPos");
		s1CamPos = GameObject.Find ("Scenario1CamPos");
		s2CamPos = GameObject.Find ("Scenario2CamPos");
		s3CamPos = GameObject.Find ("Scenario3CamPos");
		s4CamPos = GameObject.Find ("Scenario4CamPos");

		playButtonGO = GameObject.Find ("PlayButton");
		fwdButtonGO = GameObject.Find ("Next");
		backButtonGo = GameObject.Find ("Back");

//		lights = GameObject.Find ("Lighting").GetComponentsInChildren<Light> ();
		titleText = GameObject.Find ("FilmTitle").GetComponent<Text> ();
		playButton = GameObject.Find ("PlayButton").GetComponent<Button> ();


		levelSelectScreenS1 = GameObject.Find ("Hotel Canvas");
		levelSelectScreenS2 = GameObject.Find ("Space Canvas");
		levelSelectScreenS3 = GameObject.Find ("Cave Canvas");
		levelSelectScreenS4 = GameObject.Find ("Sewer Canvas");

		waitText = GameObject.Find ("WaitText");

		backToScenarioSelect = GameObject.Find ("BackToScenario");

		// AUDIO

		aSource = GetComponent<AudioSource> ();
	}


	// Use this for initialization
	void Start () {

		backToScenarioSelect.SetActive (false);

		filmTitleCount = filmTitles.Length;
		currentFilm = 0;
		titleText.text = filmTitles [currentFilm];

		levelSelectScreenS1.SetActive (false);
		levelSelectScreenS2.SetActive (false);
		levelSelectScreenS3.SetActive (false);
		levelSelectScreenS4.SetActive (false);

		waitText.SetActive (false);

		Debug.Log ("Film Index Count : " + filmTitleCount);
		canSpin = true;
		canPlay = true;
	
	}
	
	// Update is called once per frame
	void Update () {
		//		#if UNITY_IPHONE
		if (SwipeManager.IsSwipingLeft ()) 
		{
			if (canSpin) {
				StartCoroutine ("Next");
			}
		}
		if (SwipeManager.IsSwipingRight ()) 
		{
			if (canSpin) {
				StartCoroutine ("Back");
			}
		}
		//		#elif UNITY_EDITOR
		if (Input.GetKeyDown ("left")) 
		{
			if (canSpin) {
				StartCoroutine ("Back");
			}
		}
		if (Input.GetKeyDown ("right")) 
		{
			if (canSpin) {
				StartCoroutine ("Next");
			}
		}
		//		#endif
	
	}

	public void NextButton() {

		if (canSpin) {
			StartCoroutine ("Next");
		}
	}

	public void BackButton() {

		if (canSpin) {
			StartCoroutine ("Back");
		}
	}

	public IEnumerator Back() {
		Debug.Log ("Back");

		canSpin = false;

		EffectManager.Instance.ColoredRaysOn ();
		EffectManager.Instance.GlitchEffectOn ();

		LeanTween.rotateAround (this.gameObject, Vector3.up, -90f, 1f);
		titleText.text = "";
		if (currentFilm == 0) {
			currentFilm = filmTitleCount - 1;
			Debug.Log("Currnet film = " + currentFilm);
//			titleText.text = filmTitles [currentFilm];
		} else {
			currentFilm--;
			Debug.Log("Currnet film = " + currentFilm);
//			titleText.text = filmTitles [currentFilm];
		}
			
		Debug.Log (currentFilm);
		// TODO: Write Unlock Code
		if (currentFilm == 0) {
			Debug.Log ("Scenario 1");
			if (LevelManager.scenarioOneUnlocked ()) {
				Debug.Log ("Scenario One Unlocked");
				playButton.interactable = true;
			} else {
				playButton.interactable = false;
			}
		} 
		if (currentFilm == 1) {
			Debug.Log ("Scenario 2");
			if (LevelManager.scenarioTwoUnlocked ()) {
				Debug.Log ("Scenario Two Unlocked");
				playButton.interactable = true;
			} else {
				playButton.interactable = true;
			}
		}
		if (currentFilm == 2) {
			Debug.Log ("Scenario 3");
			if (LevelManager.scenarioThreeUnlocked ()) {
				Debug.Log ("Scenario Three Unlocked");
				playButton.interactable = true;
			} else {
				playButton.interactable = false;
			}
		}
		if (currentFilm == 3) {
			Debug.Log ("Scenario 4");
			if (LevelManager.scenarioFourUnlocked ()) {
				Debug.Log ("Scenario Four Unlocked");
				playButton.interactable = true;
			} else {
				playButton.interactable = false;
			}
		}

		// Turns lights on or off depending if button is interactable or not AKA is the level enabled yet?
		if (playButton.interactable == false) {
//			foreach (Light l in lights) {
//				l.enabled = false;
//			}
		} else if (playButton.interactable == true) {
//			foreach (Light l in lights) {
//				l.enabled = true;
//			}
		}

		if (aSource.isPlaying) {
			aSource.Stop ();
		}

		//		aSource.clip = fwdbackButtonClip;
		//		aSource.loop = false;
		//		aSource.Play ();
		yield return new WaitForSeconds (1f);

		titleText.font = theFontList[currentFilm];
		titleText.text = filmTitles [currentFilm];

		EffectManager.Instance.ColoredRaysOff ();
		EffectManager.Instance.GlitchEffectOff ();

		canSpin = true;


	}

	public IEnumerator Next() {
		Debug.Log ("Next");
		canSpin = false;

		EffectManager.Instance.ColoredRaysOn ();
		EffectManager.Instance.GlitchEffectOn ();

		LeanTween.rotateAround (this.gameObject, Vector3.up, 90f, 1f);
		titleText.text = "";
		if (currentFilm != filmTitleCount) {
			currentFilm = currentFilm + 1;
			if (currentFilm == filmTitleCount) {
				currentFilm = 0;
			}
		} 

		Debug.Log (currentFilm);
		// TODO: Write Unlock Code
		if (currentFilm == 0) {
			Debug.Log ("Scenario 1");
			if (LevelManager.scenarioOneUnlocked ()) {
				Debug.Log ("Scenario One Unlocked");
				playButton.interactable = true;
			} else {
				Debug.Log ("Scenario One Locked");
				playButton.interactable = false;
			}
		} 
		if (currentFilm == 1) {
			Debug.Log ("Scenario 2");
			if (LevelManager.scenarioTwoUnlocked ()) {
				Debug.Log ("Scenario Two Unlocked");
				playButton.interactable = true;
			} else {
				Debug.Log ("Scenario Two Locked");
				playButton.interactable = false;
			}
		}
		if (currentFilm == 2) {
			Debug.Log ("Scenario 3");
			if (LevelManager.scenarioThreeUnlocked ()) {
				Debug.Log ("Scenario Three Unlocked");
				playButton.interactable = true;
			} else {
				Debug.Log ("Scenario Three Locked");
				playButton.interactable = false;
			}
		}
		if (currentFilm == 3) {
			Debug.Log ("Scenario 4");
			if (LevelManager.scenarioFourUnlocked ()) {
				Debug.Log ("Scenario Four Unlocked");
				playButton.interactable = true;
			} else {
				Debug.Log ("Scenario Four Locked");
				playButton.interactable = false;
			}
		}

		// Turns lights on or off depending if button is interactable or not AKA is the level enabled yet?
		if (playButton.interactable == false) {
//			foreach (Light l in lights) {
//				l.enabled = false;
//			}
		} else if (playButton.interactable == true) {
//			foreach (Light l in lights) {
//				l.enabled = true;
//			}
		}

		if (aSource.isPlaying) {
			aSource.Stop ();
		}

//		aSource.clip = fwdbackButtonClip;
//		aSource.loop = false;
//		aSource.Play ();

		yield return new WaitForSeconds (1f);

		titleText.font = theFontList[currentFilm];
		titleText.text = filmTitles [currentFilm];

		EffectManager.Instance.ColoredRaysOff ();
		EffectManager.Instance.GlitchEffectOff ();

		canSpin = true;

	}
		

	public void PlayScenario() {
		
		EffectManager.Instance.ColoredRaysOn ();
		EffectManager.Instance.GlitchEffectOn ();
		EffectManager.Instance.SetupColoredRays ();

		int i = 0;

		playButtonGO.SetActive (false);
		fwdButtonGO.SetActive (false);
		backButtonGo.SetActive (false);

		waitText.SetActive (false);

		backToScenarioSelect.SetActive (true);

		if (currentFilm == 0) {
			MoveCamera (s1CamPos, new Vector3(0f, 0f, 0f), 2f);
			StartCoroutine(PlayScenarioDealyedStuff(levelSelectScreenS1));
			foreach (Button button in levelButtonsScenarioOne) {
				if (LevelManager.GetLevelProgress (scenarioOneLevels [i])) {
					button.interactable = true;
					button.GetComponentInChildren<Text> ().color = Color.green;
				} else {
					button.interactable = false;
					button.GetComponentInChildren<Text> ().color = Color.red;
				}
				i++;
			}
		}
		if (currentFilm == 1) {
			MoveCamera (s2CamPos,new Vector3(0f, 90f, 0f), 2f);
			StartCoroutine(PlayScenarioDealyedStuff(levelSelectScreenS2));
			foreach (Button button in levelButtonsScenarioTwo) {
				if (LevelManager.GetLevelProgress (scenarioTwoLevels [i])) {
					button.interactable = true;
					button.GetComponentInChildren<Text> ().color = Color.green;
				} else {
					button.interactable = false;
					button.GetComponentInChildren<Text> ().color = Color.red;
				}
				i++;
			}
		}

		if (currentFilm == 2) {
			MoveCamera (s3CamPos,new Vector3(0f, 0f, 0f), 2f);
			StartCoroutine(PlayScenarioDealyedStuff(levelSelectScreenS3));
			foreach (Button button in levelButtonsScenarioThree) {
				if (LevelManager.GetLevelProgress (scenarioThreeLevels [i])) {
					button.interactable = true;
					button.GetComponentInChildren<Text> ().color = Color.green;
				} else {
					button.interactable = false;
					button.GetComponentInChildren<Text> ().color = Color.red;
				}
				i++;
			}
		}
		if (currentFilm == 3) {
			MoveCamera (s4CamPos,new Vector3(0f, 90f, 0f), 2f);
			StartCoroutine(PlayScenarioDealyedStuff(levelSelectScreenS4));
			foreach (Button button in levelButtonsScenarioFour) {
				if (LevelManager.GetLevelProgress (scenarioFourLevels [i])) {
					button.interactable = true;
					button.GetComponentInChildren<Text> ().color = Color.green;
				} else {
					button.interactable = false;
					button.GetComponentInChildren<Text> ().color = Color.red;
				}
				i++;
			}
		}
	}

	public void PlayLevel(string levelToLoad) {
		if (canPlay) {
			StartCoroutine (PlaySceneSoundAndLoad (levelToLoad));
		}
	}

	IEnumerator PlaySceneSoundAndLoad(string levelToLoad) {
		canPlay = false;
		if (LevelManager.GetLevelProgress (levelToLoad) || levelToLoad == "Tutorial" || levelToLoad == LevelManager.GetCurrentLevel()) {
			waitText.SetActive (true);
			Debug.Log ("Can Load: " + levelToLoad + " Prepping audio to play");
			if (aSource.isPlaying) {
				aSource.Stop ();
			}
			aSource.clip = playButtonClip;
			aSource.loop = false;
			Debug.Log ("Playing Audio");
			aSource.Play ();
			yield return new WaitForSeconds (aSource.clip.length);
			Debug.Log ("Loading Scene: " + levelToLoad);
			SceneManager.LoadScene (levelToLoad);

		} else {
			Debug.Log ("Can not load: " + levelToLoad + ". Level not completed.");
		}
	}

	public void BackToScenarioButton() {
		MoveCamera (defaultCamPos, new Vector3(0f, 45f, 0f), 2f);
		StartCoroutine (BackToScenarioDelayedStuff ());
	}

	IEnumerator BackToScenarioDelayedStuff() {
		yield return new WaitForSeconds (2f);
		levelSelectScreenS1.SetActive (false);
		levelSelectScreenS2.SetActive (false);
		levelSelectScreenS3.SetActive (false);
		levelSelectScreenS4.SetActive (false);

		waitText.SetActive (false);
		EffectManager.Instance.ColoredRaysOff ();
		EffectManager.Instance.GlitchEffectOff ();

		backToScenarioSelect.SetActive (false);

		playButtonGO.SetActive (true);
		fwdButtonGO.SetActive (true);
		backButtonGo.SetActive (true);
	}

	IEnumerator PlayScenarioDealyedStuff(GameObject levelSelectCanvaseGO) {
		yield return new WaitForSeconds (2f);
		levelSelectCanvaseGO.SetActive (true);
		
	}

	public void MoveCamera(GameObject camPosition, Vector3 camRotation, float speed) {
		LeanTween.move (mainCamera, camPosition.transform.position, speed);
		LeanTween.rotate (mainCamera, camRotation, speed);
	}
}
