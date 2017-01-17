#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GeneralBasics2dCS
struct  GeneralBasics2dCS_t1013220559  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Texture2D GeneralBasics2dCS::dudeTexture
	Texture2D_t3884108195 * ___dudeTexture_2;
	// UnityEngine.GameObject GeneralBasics2dCS::prefabParticles
	GameObject_t3674682005 * ___prefabParticles_3;

public:
	inline static int32_t get_offset_of_dudeTexture_2() { return static_cast<int32_t>(offsetof(GeneralBasics2dCS_t1013220559, ___dudeTexture_2)); }
	inline Texture2D_t3884108195 * get_dudeTexture_2() const { return ___dudeTexture_2; }
	inline Texture2D_t3884108195 ** get_address_of_dudeTexture_2() { return &___dudeTexture_2; }
	inline void set_dudeTexture_2(Texture2D_t3884108195 * value)
	{
		___dudeTexture_2 = value;
		Il2CppCodeGenWriteBarrier(&___dudeTexture_2, value);
	}

	inline static int32_t get_offset_of_prefabParticles_3() { return static_cast<int32_t>(offsetof(GeneralBasics2dCS_t1013220559, ___prefabParticles_3)); }
	inline GameObject_t3674682005 * get_prefabParticles_3() const { return ___prefabParticles_3; }
	inline GameObject_t3674682005 ** get_address_of_prefabParticles_3() { return &___prefabParticles_3; }
	inline void set_prefabParticles_3(GameObject_t3674682005 * value)
	{
		___prefabParticles_3 = value;
		Il2CppCodeGenWriteBarrier(&___prefabParticles_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
