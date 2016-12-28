using UnityEngine;
using System.Collections;

public class EnemySpawnTrigger : MonoBehaviour {

	public GameObject spawnPoint;

	private GameObject prefabToSpawn;

	void Start() {
		prefabToSpawn = spawnPoint.GetComponent<EnemySpawnPoint> ().enemyPrefab;
	}

	void OnTriggerEnter(Collider hit) {
		if (hit.gameObject.tag == "Player") {
			Instantiate (prefabToSpawn, spawnPoint.transform.position, spawnPoint.transform.rotation);
		}
	}
}
