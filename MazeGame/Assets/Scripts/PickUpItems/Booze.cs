using UnityEngine;
using System.Collections;

public class Booze : MonoBehaviour {


	void OnTriggerEnter(Collider hit) 
	{
		if (hit.gameObject.tag == "Player") {
			Player.PickedUpPowerUp = true;
			InteractWithBooze ();
		}
	}

	void InteractWithBooze() {
		Player.isDrunk = true;
		Destroy (this.gameObject);
	}
}
