using UnityEngine;
using System.Collections;

public class PopCorn : MonoBehaviour {

	private AudioSource aSource;

	void Awake() {
		aSource = GetComponent<AudioSource> ();
	}

	void OnTriggerEnter(Collider hit) 
	{
		if (hit.gameObject.tag == "Player") {
			Player.PickedUpPowerUp = true;
			InteractWithPopCorn ();
		}
	}

	void InteractWithPopCorn() {
		this.gameObject.GetComponent<Renderer>().enabled = false;
		this.gameObject.GetComponent<BoxCollider> ().enabled = false;

		if (aSource.clip != null) {
			aSource.Stop ();
			aSource.loop = false;
			aSource.Play ();
		}

		Player.activatePopCorn = true;
		Destroy (this.gameObject);
	}
}
