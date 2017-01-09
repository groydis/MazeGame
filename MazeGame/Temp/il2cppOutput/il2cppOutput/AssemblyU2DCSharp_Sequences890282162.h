#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Sequences
struct  Sequences_t890282162  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform Sequences::target
	Transform_t1659122786 * ___target_2;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(Sequences_t890282162, ___target_2)); }
	inline Transform_t1659122786 * get_target_2() const { return ___target_2; }
	inline Transform_t1659122786 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t1659122786 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
