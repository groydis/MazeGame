using UnityEngine;
using System.Collections;

public class TutorialText : MonoBehaviour {

	public string[] dialogue;
	public bool batteryPickUp;
	public bool batteryDrain;
	public bool attackType;

	void OnTriggerEnter(Collider hit) 
	{
		if (!attackType) {
			if (hit.gameObject.tag == "Player") {
				if (batteryPickUp) {
					Player.batteryCharge = 60f;
				}
				if (batteryDrain) {
					Player.batteryCharge = 10f;
				}
				DialogueSystem.Instance.AddNewDialogue (dialogue);
				this.gameObject.SetActive (false);
			}
		}
	}

	void OnTriggerExit(Collider hit) {
		if (attackType) {
			DialogueSystem.Instance.AddNewDialogue (dialogue);
			this.gameObject.SetActive (false);
		}
	}

}
