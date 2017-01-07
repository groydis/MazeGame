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

#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.ShortcutExtensions/<>c__DisplayClass77_0
struct  U3CU3Ec__DisplayClass77_0_t1425786559  : public Il2CppObject
{
public:
	// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions/<>c__DisplayClass77_0::to
	Vector3_t4282066566  ___to_0;
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions/<>c__DisplayClass77_0::target
	Transform_t1659122786 * ___target_1;

public:
	inline static int32_t get_offset_of_to_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass77_0_t1425786559, ___to_0)); }
	inline Vector3_t4282066566  get_to_0() const { return ___to_0; }
	inline Vector3_t4282066566 * get_address_of_to_0() { return &___to_0; }
	inline void set_to_0(Vector3_t4282066566  value)
	{
		___to_0 = value;
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass77_0_t1425786559, ___target_1)); }
	inline Transform_t1659122786 * get_target_1() const { return ___target_1; }
	inline Transform_t1659122786 ** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(Transform_t1659122786 * value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier(&___target_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
