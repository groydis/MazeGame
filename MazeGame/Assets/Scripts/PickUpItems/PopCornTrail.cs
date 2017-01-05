using UnityEngine;
using System.Collections;

public class PopCornTrail : MonoBehaviour {

	public float despawnTimeMin = 8.0f;
	public float despawnTimeMax = 10.0f;
	private Rigidbody[] rBodys;
	private Transform[] transformsKids;

	// Use this for initialization
	void Start () {
		rBodys = GetComponentsInChildren<Rigidbody> ();
		transformsKids = GetComponentsInChildren<Transform> ();
		foreach (Transform tform in transformsKids) {
			tform.Rotate (Random.Range (0.0f, 360.0f), Random.Range (0.0f, 360.0f), Random.Range (0.0f, 360.0f));
		}
		foreach (Rigidbody rbody in rBodys) {
			rbody.AddForce (Vector3.up * 50, ForceMode.Force);
		}
		StartCoroutine ("DestroyPopCorn");

	}

	IEnumerator DestroyPopCorn() {
		yield return new WaitForSeconds (Random.Range(despawnTimeMin, despawnTimeMax));
		foreach (Rigidbody rbody in rBodys) {
			rbody.Sleep ();
		}
		yield return new WaitForSeconds (Random.Range(despawnTimeMin, despawnTimeMax));
		Destroy (this.gameObject);
	}
}
