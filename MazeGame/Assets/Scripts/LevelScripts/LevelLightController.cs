using UnityEngine;
using System.Collections;

public class LevelLightController : MonoBehaviour {

	private	Light[] leveLights;
	private Animator[] levelAnimations;
	private GameObject player;

	private bool playerInBounds;

	void Awake() {
		playerInBounds = false;
		leveLights = GetComponentsInChildren<Light> ();
		levelAnimations = GetComponentsInChildren<Animator> ();
		player = GameObject.FindGameObjectWithTag ("Player");

	}

	// Use this for initialization
	void Start () {
		if (playerInBounds) {
			foreach (Animator anim in levelAnimations) {
				anim.enabled = true;
			}
			foreach (Light light in leveLights) {
				light.enabled = true;
			}
		} else if (!playerInBounds) {
			foreach (Animator anim in levelAnimations) {
				anim.enabled = false;
			}
			foreach (Light light in leveLights) {
				light.enabled = false;
			}
		}
	}
	
	// Update is called once per frame
	void Update () {
	
	}


	void OnTriggerEnter(Collider col) {
		if (col.gameObject.tag == "Player") {
			Debug.Log ("Fans On");
			playerInBounds = true;
			StopCoroutine ("TurnThatShitOff");
			foreach (Animator anim in levelAnimations) {
				anim.enabled = true;
			}
			foreach (Light light in leveLights) {
				light.enabled = true;
			}
		}
	}

	void OnTriggerExit(Collider col) {
		if (col.gameObject.tag == "Player") {
			Debug.Log ("Fans Off");
			StartCoroutine ("TurnThatShitOff");
		}
	}

	IEnumerator TurnThatShitOff() {
		yield return new WaitForSeconds (3);
		foreach (Animator anim in levelAnimations) {
			anim.enabled = false;
		}
		foreach (Light light in leveLights) {
			light.enabled = false;
		}
	}
}
