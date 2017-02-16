using UnityEngine;
using System.Collections;

public class PipeScare : MonoBehaviour {

	private ParticleSystem particleSystem;

	private AudioSource aSource;


	void Awake() {
		aSource = GetComponent<AudioSource> ();
		particleSystem = GetComponentInChildren<ParticleSystem> ();
	}

	void OnTriggerEnter(Collider hit) {
		if (hit.gameObject.tag == "Player") {
			particleSystem.Play ();

			if (aSource.clip != null) {
				Debug.Log ("Playing Steam Sound cause player entered my area");
				aSource.Play ();
			}
		}
	}
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
