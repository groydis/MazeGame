using UnityEngine;
using System.Collections;

public class Soda : MonoBehaviour {

	void OnTriggerEnter(Collider hit) 
	{
		if (hit.gameObject.tag == "Player") {
			Player.PickedUpPowerUp = true;
			InteractWithSoda ();
		}
	}

	void InteractWithSoda() {
		Player.activateSoda = true;
		Destroy (this.gameObject);
	}
}
