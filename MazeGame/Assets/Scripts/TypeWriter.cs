using UnityEngine;
using System.Collections;

public class TypeWriter : MonoBehaviour {

	void OnTriggerEnter(Collider hit) 
	{
		if (hit.gameObject.tag == "Player") {
			interactWithTypeWriter();
		}
	}

	void interactWithTypeWriter() {
		Player.isTriggered = true;
		Destroy (this.gameObject);
	}


}
