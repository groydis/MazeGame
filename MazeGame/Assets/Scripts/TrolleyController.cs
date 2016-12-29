using UnityEngine;
using System.Collections;

public class TrolleyController : MonoBehaviour {

	public float moveSpeed = 10f;
	private Rigidbody rBody;
	private bool startMoving;
	public float deathTime;
	public float respawnTime;
	//private Vector3 startPosition;

	void Start () {
		startMoving = true;
		rBody = GetComponent<Rigidbody> ();
		//startPosition = transform.position;
	}



	void FixedUpdate () {
		// Adds velocity to the Cleaning Trolley
		if (startMoving) {
			rBody.velocity = transform.forward * moveSpeed;
		}
	}

	void OnTriggerEnter(Collider hit) {
		if (hit.transform.IsChildOf(transform.parent.transform)) {
			Debug.Log ("Trolley hit DeSpawner");
			rBody.Sleep ();
			GetComponentInParent<EnemySpawnTrigger> ().canReSpawn = false;
			StartCoroutine ("DestroyTrolley");
		}
	}

	// Add force to collision object and destroy game object
	void OnCollisionEnter (Collision col)
	{
		if (col.gameObject.tag == "Player") {
			Debug.Log ("Trolley hit player");
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
		
}
