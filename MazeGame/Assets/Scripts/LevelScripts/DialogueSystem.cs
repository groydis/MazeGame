using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class DialogueSystem : MonoBehaviour {

	public static DialogueSystem Instance { get; set; }

	public GameObject dialoguePanel;

	public List <string> dialogueLines = new List <string> ();



	Text dialogueText;
	int dialogueIndex;

	void Awake () {
		dialogueText = dialoguePanel.transform.FindChild ("Text").GetComponent<Text> ();

		dialoguePanel.SetActive (false);

		if (Instance != null && Instance != this) {
			Destroy (gameObject);
		} else {
			Instance = this;
		}
	
	}

	void Update() {
		if (Input.GetMouseButtonDown(0)) {
			if (dialoguePanel.activeSelf) {
				ContinueDialogue ();
			}
		}
	}

	public void AddNewDialogue(string[] lines) {

		dialogueIndex = 0; 

		dialogueLines = new List<string> (lines.Length);
		dialogueLines.AddRange (lines);
		CreateDialogue ();
		
	}

	public void CreateDialogue() {
		GameManager.Instance.PauseGame ();
		dialogueText.text = dialogueLines[dialogueIndex];
		dialoguePanel.SetActive (true);
	}

	public void ContinueDialogue() {
		if (dialogueIndex < dialogueLines.Count - 1) {
			dialogueIndex++;
			dialogueText.text = dialogueLines [dialogueIndex];
		} else {
			dialoguePanel.SetActive (false);
			GameManager.Instance.UnPauseGame ();
		}
	}
}
