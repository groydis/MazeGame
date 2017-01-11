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
// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VideoCamera
struct  VideoCamera_t2235032416  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject VideoCamera::cameraHead
	GameObject_t3674682005 * ___cameraHead_2;
	// UnityEngine.Transform VideoCamera::target
	Transform_t1659122786 * ___target_3;
	// System.Boolean VideoCamera::moveHead
	bool ___moveHead_4;

public:
	inline static int32_t get_offset_of_cameraHead_2() { return static_cast<int32_t>(offsetof(VideoCamera_t2235032416, ___cameraHead_2)); }
	inline GameObject_t3674682005 * get_cameraHead_2() const { return ___cameraHead_2; }
	inline GameObject_t3674682005 ** get_address_of_cameraHead_2() { return &___cameraHead_2; }
	inline void set_cameraHead_2(GameObject_t3674682005 * value)
	{
		___cameraHead_2 = value;
		Il2CppCodeGenWriteBarrier(&___cameraHead_2, value);
	}

	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(VideoCamera_t2235032416, ___target_3)); }
	inline Transform_t1659122786 * get_target_3() const { return ___target_3; }
	inline Transform_t1659122786 ** get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(Transform_t1659122786 * value)
	{
		___target_3 = value;
		Il2CppCodeGenWriteBarrier(&___target_3, value);
	}

	inline static int32_t get_offset_of_moveHead_4() { return static_cast<int32_t>(offsetof(VideoCamera_t2235032416, ___moveHead_4)); }
	inline bool get_moveHead_4() const { return ___moveHead_4; }
	inline bool* get_address_of_moveHead_4() { return &___moveHead_4; }
	inline void set_moveHead_4(bool value)
	{
		___moveHead_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
