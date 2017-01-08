using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using DG.Tweening;
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
			DOTween.To(()=> crtEffect.TextureSize, x=> crtEffect.TextureSize = x, 756.8f, 5f);
			DOTween.To (() => glitchEffect.colorIntensity, x => glitchEffect.colorIntensity = x, 0f, 3f);
	}




}
