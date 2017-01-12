using UnityEngine;
using System.Collections;

public class Soda : MonoBehaviour {

	private AudioSource aSource;

	void Awake() {
		aSource = GetComponent<AudioSource> ();
	}

	void OnTriggerEnter(Collider hit) 
	{
		if (hit.gameObject.tag == "Player") {
			Player.PickedUpPowerUp = true;
			InteractWithSoda ();
		}
	}

	void InteractWithSoda() {
		Player.activateSoda = true;
		if (aSource.clip != null) {
			Debug.Log ("Playing Crash Cause I hit the Player");
			aSource.Stop ();
			aSource.loop = false;
			aSource.Play ();
		}
		Destroy (this.gameObject, aSource.clip.length);
	}
}
