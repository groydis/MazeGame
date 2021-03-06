﻿using UnityEngine;
using System.Collections;

public class Soda : MonoBehaviour {

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
					PlayerSpeech.Instance.PlayClip (PlayerSpeech.Instance.playerPickUpSoda);
				}
			}
			Player.PickedUpPowerUp = true;
			InteractWithSoda ();
		}
	}

	void InteractWithSoda() {
		Player.sodaCollectedCount++;
		this.gameObject.GetComponent<Renderer>().enabled = false;
		this.gameObject.GetComponent<BoxCollider> ().enabled = false;
		if (aSource.clip != null) {
			aSource.Stop ();
			aSource.loop = false;
			aSource.Play ();
		}
		Player.activateSoda = true;
		Destroy (this.gameObject, aSource.clip.length);
	}
}
