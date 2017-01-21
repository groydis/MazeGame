using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class LevelSelectController : MonoBehaviour {
	public string[] filmTitles;

	private Text titleText;
	private Button playButton;
	//private GameObject backToScenarioSelect;

	public List<string> scenarioOneLevels;

	public Button[] levelButtonsScenarioOne;


	private int filmTitleCount;
	private int currentFilm;
	private bool canSpin;

	private Light[] lights;

	private GameObject levelSelectScreen;
	private GameObject waitText;

	private bool canPlay;

	// AUDIO

	private AudioSource aSource;
	public AudioClip playButtonClip;
	public AudioClip fwdbackButtonClip;

	void Awake() {
		lights = GameObject.Find ("Lighting").GetComponentsInChildren<Light> ();
		titleText = GameObject.Find ("FilmTitle").GetComponent<Text> ();
		playButton = GameObject.Find ("PlayButton").GetComponent<Button> ();


		levelSelectScreen = GameObject.Find ("LevelSelectScreen");
		waitText = GameObject.Find ("WaitText");

		//backToScenarioSelect = GameObject.Find ("BackToScenario");

		// AUDIO

		aSource = GetComponent<AudioSource> ();
	}


	// Use this for initialization
	void Start () {

		filmTitleCount = filmTitles.Length;
		currentFilm = 0;
		titleText.text = filmTitles [currentFilm];

		levelSelectScreen.SetActive (false);
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


		if (currentFilm == 0) {
			currentFilm = filmTitleCount - 1;
		} else {
			currentFilm--;
		}
		if (currentFilm != 0) {
			playButton.interactable = false;
		} else {
			playButton.interactable = true;
		}
		titleText.text = filmTitles [currentFilm];

		// Turns lights on or off depending if button is interactable or not AKA is the level enabled yet?
		if (playButton.interactable == false) {
			foreach (Light l in lights) {
				l.enabled = false;
			}
		} else if (playButton.interactable == true) {
			foreach (Light l in lights) {
				l.enabled = true;
			}
		}

//		if (aSource.isPlaying) {
//			aSource.Stop ();
//		}
//		aSource.clip = fwdbackButtonClip;
//		aSource.loop = false;
//		aSource.Play ();

		yield return new WaitForSeconds (1f);

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

		if (currentFilm != filmTitleCount) {
			currentFilm = currentFilm + 1;
			if (currentFilm == filmTitleCount) {
				currentFilm = 0;
				titleText.text = filmTitles[currentFilm];
			}
			titleText.text = filmTitles [currentFilm];
		} 

		// TODO: Write Unlock Code

		if (currentFilm != 0) {
			playButton.interactable = false;
		} else {
			playButton.interactable = true;
		}

		// Turns lights on or off depending if button is interactable or not AKA is the level enabled yet?
		if (playButton.interactable == false) {
			foreach (Light l in lights) {
				l.enabled = false;
			}
		} else if (playButton.interactable == true) {
			foreach (Light l in lights) {
				l.enabled = true;
			}
		}

		if (aSource.isPlaying) {
			aSource.Stop ();
		}

//		aSource.clip = fwdbackButtonClip;
//		aSource.loop = false;
//		aSource.Play ();

		yield return new WaitForSeconds (1f);

		EffectManager.Instance.ColoredRaysOff ();
		EffectManager.Instance.GlitchEffectOff ();

		canSpin = true;

	}
		

	public void PlayScenario() {
		levelSelectScreen.SetActive (true);
		EffectManager.Instance.ColoredRaysOn ();
		EffectManager.Instance.GlitchEffectOn ();
		int i = 0;
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
		levelSelectScreen.SetActive (false);
		waitText.SetActive (false);
		EffectManager.Instance.ColoredRaysOff ();
		EffectManager.Instance.GlitchEffectOff ();
	}
}
