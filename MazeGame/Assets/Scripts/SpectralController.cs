using UnityEngine;
using System.Collections;

public class SpectralController : MonoBehaviour {

	private float moveSpeed = 10f;
	private Rigidbody rBody;
	private bool startMoving;
	private Vector3 deathPosition;

	public GameObject spectralSpew;

	private Renderer[] renderers;

	private GameObject playerObject;

	// Use this for initialization
	void Start () {

		startMoving = true;
		rBody = GetComponent<Rigidbody> ();
		GetComponentInChildren<Light> ().enabled = true;
		renderers = GetComponentsInChildren<MeshRenderer> ();
		foreach (Renderer renderer in renderers) {
			renderer.enabled = true;
		}

		playerObject = GameObject.FindGameObjectWithTag ("Player");
	
	}
	
	// Update is called once per frame
	void Update () {

		if (startMoving) {
			rBody.velocity = transform.forward * moveSpeed;
		}
	
	}

	void OnTriggerEnter(Collider hit) {
		if (hit.transform.IsChildOf(transform.parent.transform)) {
			if (hit.GetComponent<Collider>().gameObject.tag == "deSpawner") {
				Debug.Log ("Spectral hit DeSpawner");
				rBody.Sleep ();
				GetComponentInParent<EnemySpawnTrigger> ().canReSpawn = false;
				StartCoroutine ("DeSpawnSpectral");
			}
		}
	}
		
	void OnCollisionEnter(Collision coll) {

		if (coll.collider.gameObject.tag == "Player") {
			Debug.Log ("Ooh, that tickles!");
			startMoving = false;
			Renderer renderer = GameObject.FindGameObjectWithTag("Player").GetComponent<Renderer>();
			Material mat = renderer.material;
			mat.SetColor("_EmissionColor", Color.red);

			StartCoroutine ("HitPlayer");
		}

	}

	IEnumerator DeSpawnSpectral () {
		startMoving = false;
		yield return null;
		Destroy (this.gameObject);
	}

	IEnumerator HitPlayer() {
		Player.movementSpeed = 1f;
		startMoving = false;
		foreach (Renderer renderer in renderers) {
			renderer.enabled = false;
		}
		GetComponentInChildren<Light> ().enabled = false;
		GetComponent<BoxCollider> ().enabled = false;
		for (int i = 0; i < 10; i++) {
			Debug.Log ("Spawning Spew");
			GameObject Spew = Instantiate(spectralSpew, transform.position, Quaternion.identity) as GameObject; 
			Spew.transform.parent = transform.parent;
		}
		yield return new WaitForSeconds (10f);
		Player.movementSpeed = 2.5f;
		Destroy (this.gameObject);
	}
}
