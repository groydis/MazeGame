using UnityEngine;
using System.Collections;

public class Battery : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnTrigerEnter(Collider player) {
		Debug.Log ("Battery Script : Trigger Occured");
	}

	void OnCollisionEnter() {
		Debug.Log ("Battery Script : Collision Occured");
	}

	void OnControllerColliderHit() {
		Debug.Log ("Battery Script : Collision Collider Occured");
	}
}
