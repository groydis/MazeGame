using UnityEngine;
using System.Collections;

public class SpectralController : MonoBehaviour {

	public float moveSpeed = 10f;
	private Rigidbody rBody;
	private bool startMoving;
	public float deathTime;
	public float respawnTime;
	private Vector3 startPosition;

	// Use this for initialization
	void Start () {

		startMoving = false;
		rBody = GetComponent<Rigidbody> ();
		startPosition = transform.position;
	
	}
	
	// Update is called once per frame
	void Update () {

		if (startMoving) {
			rBody.velocity = transform.forward * moveSpeed;
		}
	
	}

	void OnTriggerEnter(Collider hit) {
		if (hit.gameObject.tag == "Player") {
			Debug.Log ("Spectral Collided with: " + hit);
			startMoving = true;
		}
	}

	void OnTriggerExit(Collider hit) {
		if (hit.gameObject.tag == "Player") {
			StartCoroutine ("GoHomeYourDrunk");
		}
	}


	void OnCollisionEnter(Collision coll) {

		if (coll.collider.gameObject.tag == "Player") {
			Debug.Log ("Ooh, that tickles!");
			startMoving = false;
			//Destroy (this.gameObject);
		}

	}

	public IEnumerator DestroySpectral () {
		startMoving = false;
		yield return new WaitForSeconds (deathTime);
		Player.canMove = true;
		Destroy (this.gameObject);
	}

	public IEnumerator GoHomeYourDrunk () {
		startMoving = false;
		rBody.Sleep ();
		yield return new WaitForSeconds (respawnTime);
		transform.position = startPosition;
	}
}
