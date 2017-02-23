using UnityEngine;
using System.Collections;

public class PlayerSpeech : MonoBehaviour {

	public static PlayerSpeech Instance { get; set; }
	
	public AudioClip[] playerExpressionsGeneral;
	public AudioClip[] playerExpressionsHotel;
	public AudioClip[] playerExpressionsSciFi;
	public AudioClip[] playerExpressionsCave;
	public AudioClip[] playerExpressionsSewer;

	public AudioClip[] playerHit;
	public AudioClip[] playerScared;
	public AudioClip[] playerSpaceFishInteraction;
	public AudioClip[] playerRedFreakSpectralInteraction;

	public AudioClip[] playerPickUpThreeDee;
	public AudioClip[] playerPickUpGeneral;
	public AudioClip[] playerPickUpPopcorn;
	public AudioClip[] playerPickUpSoda;

	private AudioSource aSource;

	void Awake() {

		aSource = GetComponent<AudioSource> ();


		if (Instance != null && Instance != this) {
			Destroy (gameObject);
		} else {
			Instance = this;
		}
	}
		
	public void PlayClip(AudioClip[] clips) {
		AudioClip clipToPlay = clips [Random.Range (0, clips.Length)];
		if (aSource.isPlaying) {
			aSource.Stop ();
			aSource.clip = clipToPlay;
			aSource.Play ();
		}
	}
}
