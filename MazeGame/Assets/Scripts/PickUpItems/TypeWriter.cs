using UnityEngine;
using System.Collections;

public class TypeWriter : MonoBehaviour {

	public string[] dialogue;

	void OnTriggerEnter(Collider hit) 
	{
		if (hit.gameObject.tag == "Player") {
				DialogueSystem.Instance.AddNewDialogue (dialogue);
			//interactWithTypeWriter();
		}
	}

	void interactWithTypeWriter() {
		//Destroy (this.gameObject);
	}


}
