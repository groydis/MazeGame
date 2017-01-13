using UnityEngine;
using System.Collections;

public class LevelManager : MonoBehaviour {

	public static int tutorial;
	public static int level01;
	public static int level02;
	public static int level03;
	public static int level04;

	void Awake() {
		
	}

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public static bool GetLevelProgress(string level) {
		int collectedInt = PlayerPrefs.GetInt (level);
		if (collectedInt == 1) {
			Debug.Log ("Player has completed the level");
			return true;
		} else {
			Debug.Log("Player has not completed the level");
			return false;
		}
	}

	public static void SaveLevelProgress(string level, int result) {
		Debug.Log ("Player has completed the level, saving data");
		PlayerPrefs.SetInt (level, result);
		PlayerPrefs.Save ();
		Debug.Log ("Data Saved");
	
	}
}
