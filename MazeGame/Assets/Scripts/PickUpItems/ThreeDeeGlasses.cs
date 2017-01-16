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
