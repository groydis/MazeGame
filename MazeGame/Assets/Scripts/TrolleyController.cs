using UnityEngine;
using System.Collections;

public class TrolleyController : MonoBehaviour {

	public float moveSpeed = 10f;
	private Rigidbody rBody;
	private bool startMoving;
	public float deathTime;
	public float respawnTime;
	private Vector3 startPosition;

	void Start () {
		rBody = GetComponent<Rigidbody> ();
		startPosition = transform.position;
	}

	void FixedUpdate () {
		// Start Moving is Flagged by the player entering the collider
		// Adds velocity to the Cleaning Trolley
		if (startMoving) {
			rBody.velocity = transform.forward * moveSpeed;
		}
	}

	// Starts moving the Trolley
	void OnTriggerEnter(Collider hit) 
	{
		if (hit.gameObject.tag == "Player") {
			Debug.Log ("Trolley Collided with: " + hit);
			startMoving = true;
		}
	}

	// Returns Trolley to start position
	void OnTriggerExit(Collider hit) {
		if (hit.gameObject.tag == "Player") {
			StartCoroutine ("GoHomeYourDrunk");
		}
	}

	// Add force to collision object and destroy game object
	void OnCollisionEnter (Collision col)
	{
		if (col.gameObject.tag == "Player") {
			Player.canMove = false;
			col.rigidbody.AddForce (-transform.forward);
			StartCoroutine ("DestroyTrolley");
		} 
	}

	// Is called when player is hit by the troll
	// Player movement stops
	// Trolley is destroyed 
	public IEnumerator DestroyTrolley () {
		startMoving = false;
		yield return new WaitForSeconds (deathTime);
		Player.canMove = true;
		Destroy (this.gameObject);
	}

	// Returns teh Trolley back to it's stating location
	public IEnumerator GoHomeYourDrunk () {
		startMoving = false;
		yield return new WaitForSeconds (respawnTime);
		transform.position = startPosition;
	}
}
