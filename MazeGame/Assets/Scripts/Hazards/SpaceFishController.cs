using UnityEngine;
using System.Collections;

public class SpaceFishController : MonoBehaviour {

	private float moveSpeed = 4f;
	private Rigidbody rBody;
	private bool startMoving;
	private bool isDisabling;

	private GameObject[] spaceFishesGO;

	public GameObject spaceFishPlayer;

	private bool hitPlayer;


	public AudioClip crash;
	public AudioClip walk;
	public AudioClip spawn;
	private AudioSource aSource;

	public EnemySpawnTrigger enemySpawnTrigger;

	private Animator animController;


	public GameObject spaceFishParticles;

	private Renderer[] renderers;

	void Awake() {
		aSource = GetComponent<AudioSource> ();
		animController = GetComponent<Animator> ();
		renderers = GetComponentsInChildren<MeshRenderer> ();

	}

	void Start () {
		enemySpawnTrigger = GetComponentInParent<EnemySpawnTrigger> ();

		rBody = GetComponent<Rigidbody> ();
		isDisabling = false;
		foreach (Renderer renderer in renderers) {
			renderer.enabled = false;
		}
		StartCoroutine ("Spawn");
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
					Debug.Log ("Hit My Despawner");
					Debug.Log ("Space Fish hit DeSpawner");
					rBody.Sleep ();
					enemySpawnTrigger.canReSpawn = false;
					StartCoroutine ("DeSpawnSpacefish");
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

				GameObject fishAttachment = Instantiate(spaceFishPlayer, col.transform.position, Quaternion.identity) as GameObject; 
				fishAttachment.transform.SetParent (col.transform);
				Destroy (this.gameObject);
			}
		} 
	}

	IEnumerator DeSpawnSpacefish () {
		if (!hitPlayer) {
			
			aSource.Stop ();
			aSource.clip = spawn;
			aSource.loop = false;
			aSource.Play ();

			GameObject particles = Instantiate (spaceFishParticles, this.transform.position, spaceFishParticles.transform.rotation) as GameObject;
			particles.transform.SetParent (this.gameObject.transform);
			animController.SetBool ("despawning", true);
//			startMoving = false;
			yield return new WaitForSeconds(.5f);
			Destroy (this.gameObject, 1f);
		}
	}

	IEnumerator Spawn() {

		GameObject particles = Instantiate (spaceFishParticles, this.transform.position, spaceFishParticles.transform.rotation) as GameObject;
		particles.transform.SetParent (this.gameObject.transform);

		yield return new WaitForSeconds (1f);

		foreach (Renderer renderer in renderers) {
			renderer.enabled = true;
		}

		animController.SetBool ("spawning", true);
		yield return new WaitForSeconds (1f);
		animController.SetBool ("spawning", false);
		startMoving = true;
		Destroy (particles);
	}
}
