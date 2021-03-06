﻿using UnityEngine;
using System.Collections;

public class EnemySpawnTrigger : MonoBehaviour {

	public GameObject spawnPoint;

	private GameObject prefabToSpawn;

	public bool canSpawn;

	public bool canReSpawn; 


	void Start() {
		prefabToSpawn = spawnPoint.GetComponent<EnemySpawnPoint> ().enemyPrefab;

		canSpawn = true;
		canReSpawn = true;
	}
		
	void OnTriggerEnter(Collider hit) {
		if (hit.gameObject.tag == "Player") {
			if (canSpawn) {
				if (Random.Range (1, 3) == 2 ) {
					if (Random.Range (1, 3) == 1) {
						PlayerSpeech.Instance.PlayClip (PlayerSpeech.Instance.playerExpressionsGeneral);
					} else {
						PlayerSpeech.Instance.PlayClip (PlayerSpeech.Instance.playerScared);
					}
				}
				GameObject spawnedItem = Instantiate (prefabToSpawn, spawnPoint.transform.position, spawnPoint.transform.rotation) as GameObject;
				spawnedItem.transform.parent = transform;
				canSpawn = false;
				StartCoroutine ("ReSpawnCheck");
			}
		}
	}

	IEnumerator ReSpawnCheck() {
		yield return new WaitForSeconds (20f);
		canSpawn = true;
	}

}
