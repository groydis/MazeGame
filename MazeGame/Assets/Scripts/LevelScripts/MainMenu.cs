using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;


public class MainMenu : MonoBehaviour {

	private GlitchEffect glitchEffect;
	private CRT crtEffect;

	void Awake() {
		glitchEffect = GameObject.Find ("Main Camera").GetComponent<GlitchEffect> ();
		crtEffect = GameObject.Find ("Main Camera").GetComponent<CRT> ();
	}
	// Use this for initialization
	void Start () {
		StartCoroutine ("MainMenuLoad");
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void PlayGame(string levelToLoad) {
		SceneManager.LoadScene (levelToLoad);

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
