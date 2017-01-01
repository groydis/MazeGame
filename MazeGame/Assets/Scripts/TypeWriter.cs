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
		Destroy (this.gameObject);
	}


}
