using UnityEngine;
using System.Collections;

public class PopCorn : MonoBehaviour {

	void OnTriggerEnter(Collider hit) 
	{
		if (hit.gameObject.tag == "Player") {
			Player.PickedUpPowerUp = true;
			InteractWithPopCorn ();
		}
	}

	void InteractWithPopCorn() {
		Player.activatePopCorn = true;
		Destroy (this.gameObject);
	}
}
