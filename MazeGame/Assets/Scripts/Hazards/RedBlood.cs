using UnityEngine;
using System.Collections;

public class RedBlood : MonoBehaviour {

	// Use this for initialization
	void Start () {
		StartCoroutine ("DeSpawnBlood");
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	IEnumerator DeSpawnBlood () {
		yield return new WaitForSeconds(10f);
		Destroy (this.gameObject);

	}
}
