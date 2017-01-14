#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.AudioClip
struct AudioClip_t794140988;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GeneralCameraShake
struct  GeneralCameraShake_t3364553977  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject GeneralCameraShake::avatarBig
	GameObject_t3674682005 * ___avatarBig_2;
	// System.Single GeneralCameraShake::jumpIter
	float ___jumpIter_3;
	// UnityEngine.AudioClip GeneralCameraShake::boomAudioClip
	AudioClip_t794140988 * ___boomAudioClip_4;

public:
	inline static int32_t get_offset_of_avatarBig_2() { return static_cast<int32_t>(offsetof(GeneralCameraShake_t3364553977, ___avatarBig_2)); }
	inline GameObject_t3674682005 * get_avatarBig_2() const { return ___avatarBig_2; }
	inline GameObject_t3674682005 ** get_address_of_avatarBig_2() { return &___avatarBig_2; }
	inline void set_avatarBig_2(GameObject_t3674682005 * value)
	{
		___avatarBig_2 = value;
		Il2CppCodeGenWriteBarrier(&___avatarBig_2, value);
	}

	inline static int32_t get_offset_of_jumpIter_3() { return static_cast<int32_t>(offsetof(GeneralCameraShake_t3364553977, ___jumpIter_3)); }
	inline float get_jumpIter_3() const { return ___jumpIter_3; }
	inline float* get_address_of_jumpIter_3() { return &___jumpIter_3; }
	inline void set_jumpIter_3(float value)
	{
		___jumpIter_3 = value;
	}

	inline static int32_t get_offset_of_boomAudioClip_4() { return static_cast<int32_t>(offsetof(GeneralCameraShake_t3364553977, ___boomAudioClip_4)); }
	inline AudioClip_t794140988 * get_boomAudioClip_4() const { return ___boomAudioClip_4; }
	inline AudioClip_t794140988 ** get_address_of_boomAudioClip_4() { return &___boomAudioClip_4; }
	inline void set_boomAudioClip_4(AudioClip_t794140988 * value)
	{
		___boomAudioClip_4 = value;
		Il2CppCodeGenWriteBarrier(&___boomAudioClip_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
