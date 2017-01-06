using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Entrance : MonoBehaviour {
	private float countdownValue = 3f;

	public GameObject playerPrefab;

	private float currCountDownValue;
	private Text startText;
	private GameObject mainCamera;

	void OnLoad() {
	}

	// Use this for initialization
	void Start () {
		mainCamera = GameObject.Find ("Main Camera");
		startText = GameObject.Find ("Main Text").GetComponent<Text>();
		Player.canMove = false;
		StartCoroutine ("StartCountDown");
	}
		
	public IEnumerator StartCountDown()
	{
		startText.enabled = true;
		currCountDownValue = countdownValue;
		while (currCountDownValue > 0)
		{
			Player.canMove = false;
			Debug.Log("Countdown: " + currCountDownValue);
			yield return new WaitForSeconds(1.0f);
			currCountDownValue--;
			startText.text = currCountDownValue.ToString();
		}
		startText.text = "Go";
		GameManager.Instance.TweenOutCRT();
		yield return new WaitForSeconds (1f);
		mainCamera.GetComponent<GlitchEffect> ().enabled = false;
		mainCamera.GetComponent<CRT> ().enabled = false;
		startText.enabled = false;
		Player.canMove = true;
	}
}
