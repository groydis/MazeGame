using UnityEngine;
using System.Collections;
using UnityEngine.Audio;

public class AudioManager : MonoBehaviour {

	public static AudioManager Instance { get; set; }

	public AudioMixerGroup scenary;
	public AudioMixerGroup music;
	public AudioMixerGroup hazards;
	public AudioMixerGroup pickupeffects;

	public static bool sfxIsMuted;

	public static bool musicIsMuted;

	void Awake() {
		if (Instance != null && Instance != this) {
			Destroy (gameObject);
		} else {
			Instance = this;
		}
	}
		
	public void MuteMusic() {
		music.audioMixer.SetFloat ("MusicVolume", -80.00f);
	}

	public void MuteSFX() {
		scenary.audioMixer.SetFloat ("ScenaryVolume", -80.00f);
		hazards.audioMixer.SetFloat ("HazardVolume", -80.00f);
		pickupeffects.audioMixer.SetFloat ("PickUpEffectVolume", -80.00f);
	}

	public void UnMuteMusic() {
		music.audioMixer.SetFloat ("MusicVolume", 0.00f);
	}

	public void UnMuteSFX() {
		scenary.audioMixer.SetFloat ("ScenaryVolume", -20.00f);
		hazards.audioMixer.SetFloat ("HazardVolume", 0.00f);
		pickupeffects.audioMixer.SetFloat ("PickUpEffectVolume", 0.00f);
	}
}
