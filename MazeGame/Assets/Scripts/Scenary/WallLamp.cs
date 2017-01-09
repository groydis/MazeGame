using UnityEngine;
using System.Collections;

public class WallLamp : MonoBehaviour {

	public float minFlickerSpeed = 0.1f;
	public float maxFlickerSpeed = 0.1f;

	public bool scarePlayer; 

	private Light wallLampLight;

	private AudioSource aSource;

	void Awake() {
		aSource = GetComponent<AudioSource> ();
	}

	// Use this for initialization
	void Start () {
		wallLampLight = GetComponentInChildren<Light> ();
		scarePlayer = false;
		
	}

	void OnTriggerEnter(Collider hit) 
	{	
		scarePlayer = true;
		if (hit.gameObject.tag == "Player") {
			StartCoroutine("WallLampFlicker");
		}
	}

	void OnTriggerExit(Collider hit) {
		scarePlayer = false;
		if (hit.gameObject.tag == "Player") {
			StopCoroutine("WallLampFlicker");
			if (aSource.isPlaying) {
				aSource.Pause ();
			}
			if (wallLampLight.enabled == true) {
				wallLampLight.enabled = false;
			}
		}
	}
		
	IEnumerator WallLampFlicker() 
	{

		while (scarePlayer) {
			if (!aSource.isPlaying) {
				aSource.pitch = Random.Range (0.97f, 1f);
				aSource.Play ();
			} else {
				aSource.pitch = Random.Range (0.97f, 1f);
				aSource.UnPause ();
			}
			wallLampLight.enabled = true;
			yield return new WaitForSeconds (Random.Range (minFlickerSpeed, maxFlickerSpeed));
			if (aSource.isPlaying) {
				aSource.pitch = Random.Range (0.97f, 1f);
				aSource.Pause ();
			}
			wallLampLight.enabled = false;
			yield return new WaitForSeconds (Random.Range (minFlickerSpeed, maxFlickerSpeed));
		}
	}
}
