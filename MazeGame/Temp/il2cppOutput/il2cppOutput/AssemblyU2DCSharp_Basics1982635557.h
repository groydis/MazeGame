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

// Basics
struct  Basics_t1982635557  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform Basics::cubeA
	Transform_t1659122786 * ___cubeA_2;
	// UnityEngine.Transform Basics::cubeB
	Transform_t1659122786 * ___cubeB_3;

public:
	inline static int32_t get_offset_of_cubeA_2() { return static_cast<int32_t>(offsetof(Basics_t1982635557, ___cubeA_2)); }
	inline Transform_t1659122786 * get_cubeA_2() const { return ___cubeA_2; }
	inline Transform_t1659122786 ** get_address_of_cubeA_2() { return &___cubeA_2; }
	inline void set_cubeA_2(Transform_t1659122786 * value)
	{
		___cubeA_2 = value;
		Il2CppCodeGenWriteBarrier(&___cubeA_2, value);
	}

	inline static int32_t get_offset_of_cubeB_3() { return static_cast<int32_t>(offsetof(Basics_t1982635557, ___cubeB_3)); }
	inline Transform_t1659122786 * get_cubeB_3() const { return ___cubeB_3; }
	inline Transform_t1659122786 ** get_address_of_cubeB_3() { return &___cubeB_3; }
	inline void set_cubeB_3(Transform_t1659122786 * value)
	{
		___cubeB_3 = value;
		Il2CppCodeGenWriteBarrier(&___cubeB_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
