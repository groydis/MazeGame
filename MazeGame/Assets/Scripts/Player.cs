using UnityEngine;
using System.Collections;

public class Player : MonoBehaviour {

	public float battery = 100f;
	public Light torch; 

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		battery -= Time.deltaTime;
		if (battery > 0.0f) {
			torch.enabled = false;
		} else {
			torch.enabled = true;
		}
	}
}
