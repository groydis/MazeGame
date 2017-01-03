using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using DG.Tweening;


public class GameManager : MonoBehaviour {

	public static GameManager Instance { get; set; }

	public static bool pauseGame;

	public static float saveBattery;

	public GameObject pauseText;

	private GlitchEffect glitchEffect;
	private CRT crtEffect;

	private Scene currentScene;
	private string currentSceneName;


	// Use this for initialization
	void Awake () {
		pauseText = GameObject.Find ("PauseText");
		pauseText.SetActive (false);
		pauseGame = false;

		glitchEffect = GameObject.Find ("Main Camera").GetComponent<GlitchEffect> ();
		crtEffect = GameObject.Find ("Main Camera").GetComponent<CRT> ();

		if (Instance != null && Instance != this) {
			Destroy (gameObject);
		} else {
			Instance = this;
		}
	}

	void Start() {
		currentScene = SceneManager.GetActiveScene ();
		currentSceneName = currentScene.name;
		if (currentSceneName == "MainMenu") {
			StartCoroutine ("MainMenuLoad");
		} else {
			DOTween.To(()=> crtEffect.TextureSize, x=> crtEffect.TextureSize = x, 756.8f, 3f);
			DOTween.To (() => glitchEffect.colorIntensity, x => glitchEffect.colorIntensity = x, 0f, 3f);
		}

	}
		
	// Update is called once per frame
	void Update () {

	}

	public void PauseGame() {
		glitchEffect.colorIntensity = 0.2f;
		glitchEffect.intensity = 0.5f;
		glitchEffect.flipIntensity = 0.5f;
		glitchEffect.enabled = true;

		crtEffect.TextureSize = 756.8f;
		crtEffect.Distortion = 0.1f;
		crtEffect.InputGamma = 1f;
		crtEffect.OutputGamma = 1f;
		crtEffect.enabled = true;

		pauseGame = true;
		pauseText.SetActive (true);
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

		pauseGame = false;
		pauseText.SetActive (false);
		Time.timeScale = 1;
	}

	public void PlayGame(string levelToLoad) {
		Debug.Log ("PLAY");
		SceneManager.LoadScene (levelToLoad);
	
	}

	public static void FinishLevel() {
		SceneManager.LoadScene (SceneManager.GetActiveScene().buildIndex + 1);
	}

	IEnumerator MainMenuLoad() {
		yield return new WaitForSeconds (5f);
		if (currentSceneName == "MainMenu") {
			DOTween.To(()=> crtEffect.TextureSize, x=> crtEffect.TextureSize = x, 756.8f, 5f);
			DOTween.To (() => glitchEffect.colorIntensity, x => glitchEffect.colorIntensity = x, 0f, 5f);
		}
	}

	public void TweenOutCRT() {
		DOTween.To(()=> crtEffect.Distortion, x=> crtEffect.Distortion = x, 0f, 2f);
		DOTween.To (() => glitchEffect.flipIntensity, x => glitchEffect.flipIntensity = x, 0f, 2f);
	}
}
