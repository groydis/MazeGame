using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public class MainMenu : MonoBehaviour {
	
	private GameObject continueButton;


	public string currentLevel;

	void Awake() {

	}
	// Use this for initialization
	void Start () {
		EffectManager.Instance.GlitchEffectOn ();
		EffectManager.Instance.ColoredRaysOn ();
		continueButton = GameObject.Find ("ContinueButton");
		currentLevel = LevelManager.GetCurrentLevel ();
		if (currentLevel == "") {
			continueButton.SetActive (false);
		} else {
			continueButton.SetActive (true);
		}
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
		
}
