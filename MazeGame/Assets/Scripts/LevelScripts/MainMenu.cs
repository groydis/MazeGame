using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public class MainMenu : MonoBehaviour {

	private GlitchEffect glitchEffect;
	private CRT crtEffect;
	private GameObject continueButton;

	public string currentLevel;

	void Awake() {

	}
	// Use this for initialization
	void Start () {
		glitchEffect = GameObject.Find ("Main Camera").GetComponent<GlitchEffect> ();
		crtEffect = GameObject.Find ("Main Camera").GetComponent<CRT> ();
		continueButton = GameObject.Find ("ContinueButton");
		currentLevel = LevelManager.GetCurrentLevel ();
		if (currentLevel == "") {
			continueButton.SetActive (false);
		} else {
			continueButton.SetActive (true);
		}
		StartCoroutine ("MainMenuLoad");
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void PlayGame(string levelToLoad) {
		SceneManager.LoadScene (levelToLoad);

	}

	public void ContinueGame() {
		string currentLevel = LevelManager.GetCurrentLevel ();
		if (currentLevel != null) {
			SceneManager.LoadScene (currentLevel);
		}
	}

	public IEnumerator MainMenuLoad() {
		yield return new WaitForSeconds (5f);
		LeanTween.value (this.gameObject, 0, 756.8f, 5.0f).setOnUpdate ((float val) => {
			crtEffect.TextureSize = val;
		});
		LeanTween.value (this.gameObject, 1.0f, 0, 3.0f).setOnUpdate ((float val) => {
			glitchEffect.colorIntensity = val;
		});
	}




}
