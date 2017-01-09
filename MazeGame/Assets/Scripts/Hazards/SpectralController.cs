using UnityEngine;
using System.Collections;

public class SpectralController : MonoBehaviour {

	private float moveSpeed = 10f;
	private Rigidbody rBody;
	private bool startMoving;
	private Vector3 deathPosition;

	public GameObject spectralSpew;

	private Renderer[] renderers;

	private EnemySpawnTrigger enemySpawnTrigger;

	private Light spectralLight;
	private BoxCollider spectralBoxCollider;

	private bool hitPlayer;

	// Use this for initialization
	void Start () {
		hitPlayer = false;
		enemySpawnTrigger = GetComponentInParent<EnemySpawnTrigger> ();
		spectralLight = GetComponentInChildren<Light> ();
		spectralBoxCollider = GetComponent<BoxCollider> ();
		rBody = GetComponent<Rigidbody> ();


		startMoving = true;
		spectralLight.enabled = true;

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

	void OnTriggerEnter(Collider hit) {
		if (hit.transform.IsChildOf(transform.parent.transform)) {
			Debug.Log ("Hit Transform Parent Child");
			if (hit.gameObject.tag == "DeSpawner") {
				if (!hitPlayer) {
					Debug.Log ("Hit My Despawner");
					Debug.Log ("Spectral hit DeSpawner");
					rBody.Sleep ();
					enemySpawnTrigger.canReSpawn = false;
					StartCoroutine ("DeSpawnSpectral");
				}
			}
		}
	}
		
	void OnCollisionEnter(Collision coll) {

		if (coll.collider.gameObject.tag == "Player") {
			hitPlayer = true;
			Debug.Log ("Ooh, that tickles!");
			startMoving = false;
//				Renderer renderer = GameObject.FindGameObjectWithTag ("Player").GetComponentInChildren<Renderer> ();
//				Material mat = renderer.material;
//				mat.SetColor ("_EmissionColor", Color.red);

			StartCoroutine ("HitPlayer");
		}

	}

	IEnumerator DeSpawnSpectral () {
		if (!hitPlayer) {
			startMoving = false;
			yield return null;
			Destroy (this.gameObject);
		}
	}

	IEnumerator HitPlayer() {

		Player.movementSpeed = 1f;
		startMoving = false;

		foreach (Renderer renderer in renderers) {
			renderer.enabled = false;
		}

		spectralLight.enabled = false;
		spectralBoxCollider.enabled = false;

		for (int i = 0; i < 10; i++) {
			Debug.Log ("Spawning Spew");
			GameObject Spew = Instantiate(spectralSpew, transform.position, Quaternion.identity) as GameObject; 
			Spew.transform.parent = transform.parent;
		}

		yield return new WaitForSeconds (Player.spectralEffect);

		Player.movementSpeed = 2.5f;
		Destroy (this.gameObject);
	}
}
