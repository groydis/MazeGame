using UnityEngine;
using System.Collections;

public class RedFreakController : MonoBehaviour {

	private float moveSpeed = 3.5f;
	private Rigidbody rBody;
	private bool startMoving;
	private bool isDisabling;

	private GameObject[] particleSystem;

	public GameObject redFreakParts;
	public GameObject redFreakBlood;

	private bool hitPlayer;


	public AudioClip crash;
	public AudioClip walk;
	private AudioSource aSource;

	public EnemySpawnTrigger enemySpawnTrigger;

	private bool isAlive;

	private Animator animController;


	void Awake() {
		aSource = GetComponent<AudioSource> ();
		animController = GetComponent<Animator> ();
		particleSystem = GameObject.FindGameObjectsWithTag ("RedFreakBloodParticle");

	}

	void Start () {
		animController.SetBool ("isMoving", false);
		enemySpawnTrigger = GetComponentInParent<EnemySpawnTrigger> ();

		startMoving = false;
		rBody = GetComponent<Rigidbody> ();
		isDisabling = false;
		isAlive = true;
		StartCoroutine ("SpawnBlood");
		StartCoroutine ("SpawnFreak");
	}


	void FixedUpdate () {

		if (startMoving) {
			aSource.clip = walk;
			if (!aSource.isPlaying) {
				aSource.Play();
				aSource.loop = true;
			}
			rBody.velocity = transform.forward * moveSpeed;
		}

	}

	void OnTriggerEnter(Collider hit) {
		if (hit.transform.IsChildOf(transform.parent.transform)) {
			Debug.Log ("Hit Transform Parent Child");
			if (hit.gameObject.tag == "DeSpawner") {
				if (!hitPlayer) {
					isAlive = false;
					Debug.Log ("Hit My Despawner");
					Debug.Log ("Red Freak hit DeSpawner");
					rBody.Sleep ();

					enemySpawnTrigger.canReSpawn = false;
					StartCoroutine ("DeSpawnRedFreak");
				}
			}
		}
	}

	// Add force to collision object and destroy game object
	void OnCollisionEnter (Collision col)
	{
		if (col.gameObject.tag == "Player") {
			startMoving = false;

			if (!isDisabling) {
				Debug.Log ("Swarm hit player");
				if (aSource.clip != null) {
					Debug.Log ("Playing Crash Cause I hit the Player");
					aSource.Stop ();
					aSource.clip = crash;
					aSource.loop = false;
					aSource.Play ();
				}
				isAlive = false;
				GameObject bodyParts = Instantiate(redFreakParts, col.transform.position, Quaternion.identity) as GameObject; 
				bodyParts.transform.SetParent (null);
				Destroy (this.gameObject);
			}
		} 
	}

	IEnumerator SpawnFreak() {
		yield return new WaitForSeconds (1.5f);
		animController.SetBool ("isMoving", true);
		startMoving = true;
		foreach (GameObject particle in particleSystem) {
//			particle.GetComponent<ParticleSystem> ().Stop ();
			particle.SetActive (false);
		}
	}

	IEnumerator SpawnBlood() {
		while (isAlive) {
				Vector3 offset = new Vector3 (0f, 0f, Random.Range (-1f, 1f));
				GameObject blood = Instantiate (redFreakBlood, this.gameObject.transform.position + offset, redFreakBlood.transform.rotation) as GameObject; 
				blood.transform.SetParent (null);
				yield return new WaitForSeconds (0.5f);
		}
	}

	IEnumerator DeSpawnRedFreak () {
		if (!hitPlayer) {
			startMoving = false;
			yield return null;
			Destroy (this.gameObject);
		}
	}

}
