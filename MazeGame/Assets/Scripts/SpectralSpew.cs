using UnityEngine;
using System.Collections;

public class SpectralSpew : MonoBehaviour {

	public float despawnTimeMin = 2.0f;
	public float despawnTimeMax = 4.0f;
	private Rigidbody rBody;

	// Use this for initialization
	void Start () {
		rBody = GetComponent<Rigidbody> ();
		rBody.AddForce (-Vector3.forward * 3, ForceMode.Impulse);
		StartCoroutine ("DestroySpew");

	}
	
	// Update is called once per frame
	void Update () {
	
	}

	IEnumerator DestroySpew() {
		yield return new WaitForSeconds (Random.Range(despawnTimeMin, despawnTimeMax));
		rBody.Sleep ();
		Destroy (this.gameObject);
	}
}
