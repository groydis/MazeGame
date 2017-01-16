using UnityEngine;
using System.Collections;

public class LevelManager : MonoBehaviour {

	//public static string currentLevel;

	public static bool GetLevelProgress(string level) {
		int collectedInt = PlayerPrefs.GetInt (level);
		if (collectedInt >= 1) {
			return true;
		} else if (level == GetCurrentLevel ()) {
			Debug.Log ("Found One: " + level);
			return true;
		} else {
			return false;
		}
	}

	public static int GetLevelRuns(string level) {
		int result = PlayerPrefs.GetInt (level);
		return result;
	}

	public static void SaveLevelProgress(string level, int result) {
		Debug.Log ("Player has completed: " + level +  " , saving data");
		PlayerPrefs.SetInt (level, result);
		PlayerPrefs.Save ();
		Debug.Log ("Data Saved");
	
	}

	public static void SaveCurrentLevel(string currentLevel) {
		PlayerPrefs.SetString ("CurrentLevel", currentLevel);
		PlayerPrefs.Save ();
	}

	public static string GetCurrentLevel() {
		string currentLevel = PlayerPrefs.GetString ("CurrentLevel");
		return currentLevel;
	}

}
