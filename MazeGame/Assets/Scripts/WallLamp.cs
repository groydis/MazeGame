using UnityEngine;
using System.Collections;

public class WallLamp : MonoBehaviour {

	public float minFlickerSpeed = 0.1f;
	public float maxFlickerSpeed = 0.5f;

	public bool scarePlayer; 

	// Use this for initialization
	void Start () {
		scarePlayer = false;
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnTriggerEnter(Collider hit) 
	{	
		scarePlayer = true;
		if (hit.gameObject.tag == "Player") {
			Debug.Log ("Wall Lamp Detected collision");
			StartCoroutine("WallLampFlicker");
		}
	}

	void OnTriggerExit(Collider hit) {
		scarePlayer = false;
		if (hit.gameObject.tag == "Player") {
			Debug.Log ("Wall Lamp Detected collision");
			StopCoroutine("WallLampFlicker");
		}
	}
		
	IEnumerator WallLampFlicker() 
	{
		while (scarePlayer) {
			GetComponentInChildren<Light> ().enabled = true;
			yield return new WaitForSeconds (Random.Range (minFlickerSpeed, maxFlickerSpeed));
			GetComponentInChildren<Light> ().enabled = false;
			yield return new WaitForSeconds (Random.Range (minFlickerSpeed, maxFlickerSpeed));
		}
	}
}
