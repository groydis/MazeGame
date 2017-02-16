using UnityEngine;
using System.Collections;

public class EnemySpawnTrigger : MonoBehaviour {

	public GameObject spawnPoint;

	private GameObject prefabToSpawn;

	public bool canSpawn;

	public bool canReSpawn; 

	public GameObject enemyBodyPile;
	private GameObject spawnBodyParts;

	void Start() {
		prefabToSpawn = spawnPoint.GetComponent<EnemySpawnPoint> ().enemyPrefab;

		canSpawn = true;
		canReSpawn = true;

		if (enemyBodyPile != null) {
			GameObject spawnBodyParts = Instantiate (enemyBodyPile, this.transform.position, Quaternion.identity) as GameObject;
			spawnBodyParts.transform.parent = transform;
		}
	}
		
	void OnTriggerEnter(Collider hit) {
		if (hit.gameObject.tag == "Player") {
			if (canSpawn) {
				if (canReSpawn) {
					if (enemyBodyPile != null) {
						Destroy (this.spawnBodyParts);
					}
					GameObject spawnedItem = Instantiate (prefabToSpawn, spawnPoint.transform.position, spawnPoint.transform.rotation) as GameObject;
					spawnedItem.transform.parent = transform;
					canSpawn = false;
					StartCoroutine ("ReSpawnCheck");
				}
			}
		}
	}

	IEnumerator ReSpawnCheck() {
		yield return new WaitForSeconds (20f);
		canSpawn = true;
	}

}
