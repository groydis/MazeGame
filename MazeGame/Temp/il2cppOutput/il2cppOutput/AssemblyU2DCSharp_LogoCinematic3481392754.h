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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LogoCinematic
struct  LogoCinematic_t3481392754  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject LogoCinematic::lean
	GameObject_t3674682005 * ___lean_2;
	// UnityEngine.GameObject LogoCinematic::tween
	GameObject_t3674682005 * ___tween_3;

public:
	inline static int32_t get_offset_of_lean_2() { return static_cast<int32_t>(offsetof(LogoCinematic_t3481392754, ___lean_2)); }
	inline GameObject_t3674682005 * get_lean_2() const { return ___lean_2; }
	inline GameObject_t3674682005 ** get_address_of_lean_2() { return &___lean_2; }
	inline void set_lean_2(GameObject_t3674682005 * value)
	{
		___lean_2 = value;
		Il2CppCodeGenWriteBarrier(&___lean_2, value);
	}

	inline static int32_t get_offset_of_tween_3() { return static_cast<int32_t>(offsetof(LogoCinematic_t3481392754, ___tween_3)); }
	inline GameObject_t3674682005 * get_tween_3() const { return ___tween_3; }
	inline GameObject_t3674682005 ** get_address_of_tween_3() { return &___tween_3; }
	inline void set_tween_3(GameObject_t3674682005 * value)
	{
		___tween_3 = value;
		Il2CppCodeGenWriteBarrier(&___tween_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
