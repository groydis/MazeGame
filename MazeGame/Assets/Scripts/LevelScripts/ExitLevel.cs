using UnityEngine;
using System.Collections;

public class ExitLevel : MonoBehaviour {

	public string[] dialogue;

	void OnTriggerEnter(Collider hit) {
		if (hit.gameObject.tag == "Player") {
			StartCoroutine ("Exiting");
		}
	}

	IEnumerator Exiting() {
		DialogueSystem.Instance.AddNewDialogue (dialogue);
		while (DialogueSystem.dialogueActive) {
			yield return new WaitForSeconds (1f);
		}
		GameManager.FinishLevel ();
	}
}
