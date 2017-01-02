using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public class GameManager : MonoBehaviour {

	public static GameManager Instance { get; set; }

	public static bool pauseGame;

	public static float saveBattery;

	public GameObject pauseText;

	// Use this for initialization
	void Awake () {
		pauseGame = false;
		pauseText = GameObject.Find ("PauseText");
		pauseText.SetActive (false);

		if (Instance != null && Instance != this) {
			Destroy (gameObject);
		} else {
			Instance = this;
		}
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void PauseGame() {
		GameObject.Find ("Main Camera").GetComponent<GlitchEffect>().enabled = true;
		GameObject.Find ("Main Camera").GetComponent<CRT>().enabled = false;
		pauseGame = true;
		pauseText.SetActive (true);
		Time.timeScale = 0;
		Player.canMove = false;
	}

	public void UnPauseGame() {
		GameObject.Find ("Main Camera").GetComponent<GlitchEffect>().enabled = false;
		GameObject.Find ("Main Camera").GetComponent<CRT>().enabled = false;
		pauseGame = false;
		pauseText.SetActive (false);
		Time.timeScale = 1;
		Player.canMove = true;
	}

	public void PlayGame(string levelToLoad) {
		Debug.Log ("PLAY");
		SceneManager.LoadScene (levelToLoad);
	
	}

	public static void FinishLevel() {
		SceneManager.LoadScene (SceneManager.GetActiveScene().buildIndex + 1);
	}
		
}
