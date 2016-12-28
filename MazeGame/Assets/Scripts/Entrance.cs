using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Entrance : MonoBehaviour {
	private float countdownValue = 3f;

	public GameObject playerPrefab;

	private float currCountDownValue;
	private Text startText;

	void OnLoad() {
	}

	// Use this for initialization
	void Start () {
		startText = GameObject.Find ("Main Text").GetComponent<Text>();
		//Instantiate (playerPrefab, this.transform.position, Quaternion.identity);
		Player.canMove = false;
		StartCoroutine ("StartCountDown");
	}
	
	// Update is called once per frame
	void Update () {
	
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
		yield return new WaitForSeconds (1.0f);
		startText.enabled = false;
		Player.canMove = true;
	}
}
