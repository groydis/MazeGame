using UnityEngine;
using System.Collections;

public class RedFreakBodyParts : MonoBehaviour {

	private float despawnTime = 5f;

	private GameObject[] bodyParts;

	// Use this for initialization
	void Start () {
		PlayerSpeech.Instance.PlayClip(PlayerSpeech.Instance.playerRedFreakSpectralInteraction);
		StartCoroutine (DeSpawnSpaceFish ());
	}

	void DropParts() {
		bodyParts = GameObject.FindGameObjectsWithTag ("RedFreak BodyPart");
		foreach (GameObject part in bodyParts) {
			part.GetComponent<BoxCollider> ().enabled = true;
			part.AddComponent<Rigidbody> ();
//			part.GetComponent<Rigidbody> ().mass = 100f;
		}
		this.gameObject.transform.SetParent (null);
	}

	IEnumerator DeSpawnSpaceFish () {
		DropParts ();
		yield return new WaitForSeconds (despawnTime);
		Destroy (this.gameObject);

	}
}
