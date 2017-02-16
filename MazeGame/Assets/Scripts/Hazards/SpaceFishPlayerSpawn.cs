using UnityEngine;
using System.Collections;

public class SpaceFishPlayerSpawn : MonoBehaviour {
	private float despawnTime = 5f;

	private GameObject[] spacefishies;

	// Use this for initialization
	void Start () {
		StartCoroutine (DeSpawnSpaceFish ());
	}

	void BlowOffSpaceFish() {
		spacefishies = GameObject.FindGameObjectsWithTag ("SpaceFishDead");
		foreach (GameObject fish in spacefishies) {
			fish.GetComponent<BoxCollider> ().enabled = true;
			fish.AddComponent<Rigidbody> ();
			fish.GetComponent<Rigidbody> ().mass = 100f;
		}
		this.gameObject.transform.SetParent (null);
	}
	
	IEnumerator DeSpawnSpaceFish () {
		Player.movementSpeed = .5f;
		// Make Player Spin
		yield return new WaitForSeconds(despawnTime);
		Player.movementSpeed = 2.5f;
		BlowOffSpaceFish ();
		yield return new WaitForSeconds (despawnTime);
		Destroy (this.gameObject);

	}
}
