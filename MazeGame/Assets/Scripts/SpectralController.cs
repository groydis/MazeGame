using UnityEngine;
using System.Collections;

public class SpectralController : MonoBehaviour {

	public float moveSpeed = 10f;
	private Rigidbody rBody;
	private bool startMoving;
	public float deathTime;
	public float respawnTime;
	private Vector3 startPosition;
	private Vector3 deathPosition;

	public GameObject spectralSpew;

	private Renderer[] renderers;

	// Use this for initialization
	void Start () {

		startMoving = false;
		rBody = GetComponent<Rigidbody> ();
		startPosition = transform.position;
		GetComponentInChildren<Light> ().enabled = false;
		renderers = GetComponentsInChildren<MeshRenderer> ();
		foreach (Renderer renderer in renderers) {
			renderer.enabled = false;
		}
	
	}
	
	// Update is called once per frame
	void Update () {

		if (startMoving) {
			rBody.velocity = transform.forward * moveSpeed;
		}
	
	}

	void OnTriggerEnter(Collider hit) {
		if (hit.gameObject.tag == "Player") {
			GetComponentInChildren<Light> ().enabled = true;
			foreach (Renderer renderer in renderers) {
				renderer.enabled = true;
			}
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
			StartCoroutine ("DestroySpectral");
		}

	}

	public IEnumerator DestroySpectral () {
		startMoving = false;
		for (int i = 0; i < 10; i++) {
			Instantiate(spectralSpew, transform.position, Quaternion.identity); 
		}
		Player.canMove = true;
		yield return null;

		Destroy (this.gameObject);
	}

	public IEnumerator GoHomeYourDrunk () {
		yield return new WaitForSeconds (respawnTime);
		startMoving = false;
		rBody.Sleep ();
		transform.position = startPosition;
		GetComponentInChildren<Light> ().enabled = false;
		foreach (Renderer renderer in renderers) {
			renderer.enabled = false;
		}
	}
}
