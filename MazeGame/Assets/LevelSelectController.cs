using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using DG.Tweening;

public class LevelSelectController : MonoBehaviour {
	public string[] filmTitles;

	private Quaternion startingRotation;

	private Text titleText;
	private Button playButton;


	private int filmTitleCount;
	private int currentFilm;
	private bool canSpin;

	void Awake() {
		titleText = GameObject.Find ("FilmTitle").GetComponent<Text> ();
		playButton = GameObject.Find ("PlayButton").GetComponent<Button> ();
	}


	// Use this for initialization
	void Start () {

		startingRotation = this.transform.rotation;
		filmTitleCount = filmTitles.Length;
		currentFilm = 0;
		titleText.text = filmTitles [currentFilm];

		Debug.Log ("Film Index Count : " + filmTitleCount);
		canSpin = true;
	
	}
	
	// Update is called once per frame
	void Update () {
		//		#if UNITY_IPHONE
		if (SwipeManager.IsSwipingLeft ()) 
		{
			if (canSpin) {
				StartCoroutine (SpinLeft ()); 
			}
		}
		if (SwipeManager.IsSwipingRight ()) 
		{
			if (canSpin) {
				StartCoroutine (SpinRight ()); 
			}
		}
		//		#elif UNITY_EDITOR
		if (Input.GetKeyDown ("left")) 
		{
			if (canSpin) {
				StartCoroutine (SpinLeft ()); 
			}
		}
		if (Input.GetKeyDown ("right")) 
		{
			if (canSpin) {
				StartCoroutine (SpinRight ()); 
			}
		}
		//		#endif
	
	}

	IEnumerator SpinLeft() {
		canSpin = false;
		transform.DORotate(new Vector3(0f, 90f, 0f), 1f, RotateMode.LocalAxisAdd);

		if (currentFilm != filmTitleCount) {
			currentFilm = currentFilm + 1;
			Debug.Log ("Current Film +1: " + currentFilm);
			if (currentFilm == filmTitleCount) {
				currentFilm = 0;
				Debug.Log ("Current Film should be 0: " + currentFilm);
				titleText.text = filmTitles[currentFilm];
			}
			titleText.text = filmTitles [currentFilm];
		} 
		if (currentFilm != 0) {
			playButton.interactable = false;
		} else {
			playButton.interactable = true;
		}
		Debug.Log("Swiped Left");
		yield return new WaitForSeconds (1f);
		canSpin = true;

	}

	IEnumerator SpinRight() {
		canSpin = false;
		transform.DORotate(new Vector3(0f, -90f, 0f), 1f, RotateMode.LocalAxisAdd);
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
		yield return new WaitForSeconds (1f);
		canSpin = true;
	}

	// TOOD: This is temp
	public void PlayLevel(string levelToLoad) {
		SceneManager.LoadScene (levelToLoad);

	}
}
