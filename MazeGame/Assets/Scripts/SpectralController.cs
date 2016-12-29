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

		startMoving = true;
		rBody = GetComponent<Rigidbody> ();
		startPosition = transform.position;
		GetComponentInChildren<Light> ().enabled = true;
		renderers = GetComponentsInChildren<MeshRenderer> ();
		foreach (Renderer renderer in renderers) {
			renderer.enabled = true;
		}
	
	}
	
	// Update is called once per frame
	void Update () {

		if (startMoving) {
			rBody.velocity = transform.forward * moveSpeed;
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
			GameObject Spew = Instantiate(spectralSpew, transform.position, Quaternion.identity) as GameObject; 
			Spew.transform.parent = transform;
		}
		Player.canMove = true;
		yield return null;
		Destroy (this.gameObject);
	}
}
