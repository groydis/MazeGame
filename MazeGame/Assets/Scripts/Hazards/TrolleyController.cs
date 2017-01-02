using UnityEngine;
using System.Collections;

public class TrolleyController : MonoBehaviour {

	private float moveSpeed = 10f;
	private Rigidbody rBody;
	private bool startMoving;
	private float deathTime = 5f;
	private float deSpawnTime = 3f;
	private bool flashingEnabled;
	private float flashInterval = 0.5f;
	private bool isDisabling;

	void Start () {
		startMoving = true;
		rBody = GetComponent<Rigidbody> ();
		flashingEnabled = false;
		isDisabling = false;
	}



	void FixedUpdate () {
		// Adds velocity to the Cleaning Trolley
		if (startMoving) {
			rBody.velocity = transform.forward * moveSpeed;
		}
			
	}

	void OnTriggerEnter(Collider hit) {
		if (hit.transform.IsChildOf(transform.parent.transform)) {
			Debug.Log ("Detect Hit");
			if (hit.GetComponent<Collider>().gameObject.tag == "DeSpawner") {
				Debug.Log ("Trolley hit DeSpawner");
				rBody.Sleep ();
				GetComponentInParent<EnemySpawnTrigger> ().canReSpawn = false;
				flashingEnabled = true;
				isDisabling = true;
				gameObject.layer = 12;
				StartCoroutine ("FlashingRenderer");
				StartCoroutine ("DeSpawnTrolley");
			}
		}
	}

	IEnumerator FlashingRenderer() {
		while (GameManager.pauseGame) 
		{
			yield return new WaitForFixedUpdate();	
		}
		yield return new WaitForSeconds(1f);
		while (flashingEnabled) {
			if (gameObject.GetComponent<MeshRenderer> ().enabled) {
				gameObject.GetComponent<MeshRenderer> ().enabled = false;
				yield return new WaitForSeconds (flashInterval);
			} else {
				gameObject.GetComponent<MeshRenderer> ().enabled = true;
				yield return new WaitForSeconds (flashInterval);
			}
		}
	}

	// Add force to collision object and destroy game object
	void OnCollisionEnter (Collision col)
	{
		if (col.gameObject.tag == "Player") {
			if (!isDisabling) {
				Debug.Log ("Trolley hit player");
				Player.canMove = false;
				rBody.AddForce (-transform.right * moveSpeed);
				col.rigidbody.AddForce (-transform.forward);
				flashingEnabled = true;
				gameObject.layer = 12;
				StartCoroutine ("FlashingRenderer");
				StartCoroutine ("DestroyTrolley");
			}
		} 
	}

	public IEnumerator DestroyTrolley () {
		var material = GetComponent<Renderer>().material;
		var color = material.color;
		material.color = new Color(color.r, color.g, color.b, color.a - (25f * Time.deltaTime));
		startMoving = false;
		yield return new WaitForSeconds (deathTime);
		Player.canMove = true;
		Destroy (this.gameObject);
	}

	IEnumerator DeSpawnTrolley() {
		Player.canMove = true;
		var material = GetComponent<Renderer>().material;
		var color = material.color;
		material.color = new Color(color.r, color.g, color.b, color.a - (25f * Time.deltaTime));
		yield return new WaitForSeconds (deSpawnTime);
		Player.canMove = true;
		Destroy (this.gameObject);
	}
		
}
