using UnityEngine;
using System.Collections;

public class ThreeDeeGlasses : MonoBehaviour {

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
					PlayerSpeech.Instance.PlayClip (PlayerSpeech.Instance.playerPickUpThreeDee);
				}
			}
			Player.PickedUpPowerUp = true;
			InteractWithThreeDeeGlasses();
		}
	}

	void InteractWithThreeDeeGlasses() {
		Player.threedeeglassesCollectedCount++;
		Player.activateThreeDee = true;
		Player.batteryDrainRate = 0.5f;
		this.gameObject.GetComponent<Renderer>().enabled = false;
		this.gameObject.GetComponent<BoxCollider> ().enabled = false;
		if (aSource.clip != null) {
			aSource.Stop ();
			aSource.loop = false;
			aSource.Play ();
		}
		Destroy (this.gameObject, aSource.clip.length);
	}
}
