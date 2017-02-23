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
			if (Random.Range (1, 3) == 2 ) {
				if (Random.Range (1, 3) == 1) {
					PlayerSpeech.Instance.PlayClip (PlayerSpeech.Instance.playerPickUpGeneral);
				} else {
					PlayerSpeech.Instance.PlayClip (PlayerSpeech.Instance.playerPickUpPopcorn);
				}
			}
			Player.PickedUpPowerUp = true;
			InteractWithPopCorn ();
		}
	}

	void InteractWithPopCorn() {
		Player.popcornCollectedCount++;
		this.gameObject.GetComponent<Renderer>().enabled = false;
		this.gameObject.GetComponent<BoxCollider> ().enabled = false;

		if (aSource.clip != null) {
			aSource.Stop ();
			aSource.loop = false;
			aSource.Play ();
		}

		Player.activatePopCorn = true;
		Destroy (this.gameObject, aSource.clip.length);
	}
}
