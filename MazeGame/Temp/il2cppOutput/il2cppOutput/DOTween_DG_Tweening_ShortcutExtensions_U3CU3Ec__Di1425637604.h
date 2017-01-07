#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t3870600107;
// System.String
struct String_t;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.ShortcutExtensions/<>c__DisplayClass27_0
struct  U3CU3Ec__DisplayClass27_0_t1425637604  : public Il2CppObject
{
public:
	// UnityEngine.Material DG.Tweening.ShortcutExtensions/<>c__DisplayClass27_0::target
	Material_t3870600107 * ___target_0;
	// System.String DG.Tweening.ShortcutExtensions/<>c__DisplayClass27_0::property
	String_t* ___property_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass27_0_t1425637604, ___target_0)); }
	inline Material_t3870600107 * get_target_0() const { return ___target_0; }
	inline Material_t3870600107 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Material_t3870600107 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier(&___target_0, value);
	}

	inline static int32_t get_offset_of_property_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass27_0_t1425637604, ___property_1)); }
	inline String_t* get_property_1() const { return ___property_1; }
	inline String_t** get_address_of_property_1() { return &___property_1; }
	inline void set_property_1(String_t* value)
	{
		___property_1 = value;
		Il2CppCodeGenWriteBarrier(&___property_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
