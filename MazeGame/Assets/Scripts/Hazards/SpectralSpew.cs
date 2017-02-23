using UnityEngine;
using System.Collections;

public class SpectralSpew : MonoBehaviour {

	public float despawnTimeMin = 2.0f;
	public float despawnTimeMax = 4.0f;
	private Rigidbody rBody;

	// Use this for initialization
	void Start () {
		PlayerSpeech.Instance.PlayClip(PlayerSpeech.Instance.playerRedFreakSpectralInteraction);
		rBody = GetComponent<Rigidbody> ();
		transform.Rotate (Random.Range (0.0f, 360.0f), Random.Range (0.0f, 360.0f), Random.Range (0.0f, 360.0f));
		rBody.AddForce (Vector3.up * 50, ForceMode.Force);
		StartCoroutine ("DestroySpew");

	}

	IEnumerator DestroySpew() {
		yield return new WaitForSeconds (Random.Range(despawnTimeMin, despawnTimeMax));
		rBody.Sleep ();
		Destroy (this.gameObject);
	}
}
