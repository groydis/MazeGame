using UnityEngine;
using System.Collections;

public class ThreeDeeGlasses : MonoBehaviour {

	void OnTriggerEnter(Collider hit) 
	{
		if (hit.gameObject.tag == "Player") {
			Player.PickedUpPowerUp = true;
			InteractWithThreeDeeGlasses();
		}
	}

	void InteractWithThreeDeeGlasses() {
		Player.activateThreeDee = true;
		Destroy (this.gameObject);
	}
}
