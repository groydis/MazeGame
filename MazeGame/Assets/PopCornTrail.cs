using UnityEngine;
using System.Collections;

public class PopCornTrail : MonoBehaviour {

	public float despawnTimeMin = 4.0f;
	public float despawnTimeMax = 5.0f;
	private Rigidbody[] rBodys;

	// Use this for initialization
	void Start () {
		rBodys = GetComponentsInChildren<Rigidbody> ();

		foreach (Rigidbody rbody in rBodys) {
			rbody.AddForce (Vector3.up * 50, ForceMode.Force);
		}
		StartCoroutine ("DestroyPopCorn");

	}

	void OnCollisionEnter() {
		//rBody.Sleep ();
	}

	// Update is called once per frame
	void Update () {

	}

	IEnumerator DestroyPopCorn() {
		yield return new WaitForSeconds (Random.Range(despawnTimeMin, despawnTimeMax));
		foreach (Rigidbody rbody in rBodys) {
			rbody.Sleep ();
		}
		Destroy (this.gameObject);
	}
}
