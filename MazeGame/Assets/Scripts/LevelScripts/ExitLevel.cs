using UnityEngine;
using System.Collections;

public class ExitLevel : MonoBehaviour {

	void OnTriggerEnter(Collider hit) {
		if (hit.gameObject.tag == "Player") {
				GameManager.FinishLevel ();
		}
	}
}
