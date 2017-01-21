using UnityEngine;
using System.Collections;

public class ExitLevel : MonoBehaviour {

	public string[] dialogue;

	void OnTriggerEnter(Collider hit) {
		if (hit.gameObject.tag == "Player") {
			Player.canMove = false;
			StartCoroutine ("Exiting");
		}
	}

	// Temp Code for Alpha
	IEnumerator Exiting() {
		if (dialogue.Length > 0) {
			DialogueSystem.Instance.AddNewDialogue (dialogue);
			while (DialogueSystem.dialogueActive) {
				yield return new WaitForSeconds (1f);
			}
		}
		GameManager.Instance.GameOverPanel ();
	}
}
