#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t1740077639;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PopCorn
struct  PopCorn_t1269226873  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.AudioSource PopCorn::aSource
	AudioSource_t1740077639 * ___aSource_2;

public:
	inline static int32_t get_offset_of_aSource_2() { return static_cast<int32_t>(offsetof(PopCorn_t1269226873, ___aSource_2)); }
	inline AudioSource_t1740077639 * get_aSource_2() const { return ___aSource_2; }
	inline AudioSource_t1740077639 ** get_address_of_aSource_2() { return &___aSource_2; }
	inline void set_aSource_2(AudioSource_t1740077639 * value)
	{
		___aSource_2 = value;
		Il2CppCodeGenWriteBarrier(&___aSource_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
