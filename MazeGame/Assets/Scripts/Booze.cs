using UnityEngine;
using System.Collections;

public class Booze : MonoBehaviour {


	void OnTriggerEnter(Collider hit) 
	{
		if (hit.gameObject.tag == "Player") {
			interactWithBooze();
		}
	}

	void interactWithBooze() {
		Player.isDrunk = true;
		Destroy (this.gameObject);
	}
}
