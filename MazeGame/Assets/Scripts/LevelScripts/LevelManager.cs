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
			Debug.Log (level + " Not Complete");
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

	//TODO: Write code to read this info from player prefs for a progress screen
	public static void SaveHundredPercent(string currentLevel) {
		if (CheckIfHundredPercent ()) {
			PlayerPrefs.SetString (currentLevel, "100%");
		}
	}

	public static bool CheckIfHundredPercent() {
		if (Player.vhsCollectedCount == GameManager.vhsCount &&
		    Player.batteryCollectedCount == GameManager.batteryCount &&
		    Player.popcornCollectedCount == GameManager.popcornCount &&
		    Player.sodaCollectedCount == GameManager.sodaCount &&
		    Player.threedeeglassesCollectedCount == GameManager.threedeeglassesCount) {
			Debug.Log ("100% FULLY LIT");
			Debug.Log ("VHS: " + GameManager.vhsCount + " Battery: " + GameManager.batteryCount + " Popcorn: " + GameManager.popcornCount + " Soda: " + GameManager.sodaCount + " 3D Glasses: " + GameManager.threedeeglassesCount);
			Debug.Log ("VHS: " + Player.vhsCollectedCount + " Battery: " + Player.batteryCollectedCount + " Popcorn: " + Player.popcornCollectedCount + " Soda: " + Player.sodaCollectedCount + " 3D Glasses: " + Player.threedeeglassesCollectedCount);
			return true;
		} else {
			Debug.Log ("Neg on that 100% fam, try harder");
			Debug.Log ("VHS: " + GameManager.vhsCount + " Battery: " + GameManager.batteryCount + " Popcorn: " + GameManager.popcornCount + " Soda: " + GameManager.sodaCount + " 3D Glasses: " + GameManager.threedeeglassesCount);
			Debug.Log ("VHS: " + Player.vhsCollectedCount + " Battery: " + Player.batteryCollectedCount + " Popcorn: " + Player.popcornCollectedCount + " Soda: " + Player.sodaCollectedCount + " 3D Glasses: " + Player.threedeeglassesCollectedCount);
			return false;
		}
	}

	public static void SaveNewBestLevelTime(string currentLevel, float time) {
		PlayerPrefs.SetFloat (currentLevel + "Time", time);
		PlayerPrefs.Save ();
		Debug.Log ("Time Saved for " + currentLevel + "Time" + " : " + time);
	}

	public static float GetBestLevelTime(string level) {
		float time = PlayerPrefs.GetFloat (level + "Time");
		return time;
	}
	public static bool scenarioOneUnlocked() {
		return true;
	}

	public static bool scenarioTwoUnlocked() {
		if (GetLevelProgress("S1Level04")) {
			Debug.Log ("S1 Level 04 is completed");
			return true;
		} else {
			Debug.Log ("S1 Level 04 is not complete");
			return false;
		}
	}
	public static bool scenarioThreeUnlocked() {
		return false;
	}
	public static bool scenarioFourUnlocked() {
		return false;

	}
}
