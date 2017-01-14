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
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraMovement
struct  CameraMovement_t1977483028  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject CameraMovement::player
	GameObject_t3674682005 * ___player_2;
	// UnityEngine.Vector3 CameraMovement::offset
	Vector3_t4282066566  ___offset_3;
	// System.Single CameraMovement::smoothTime
	float ___smoothTime_4;
	// UnityEngine.Vector3 CameraMovement::velocity
	Vector3_t4282066566  ___velocity_5;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(CameraMovement_t1977483028, ___player_2)); }
	inline GameObject_t3674682005 * get_player_2() const { return ___player_2; }
	inline GameObject_t3674682005 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t3674682005 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_offset_3() { return static_cast<int32_t>(offsetof(CameraMovement_t1977483028, ___offset_3)); }
	inline Vector3_t4282066566  get_offset_3() const { return ___offset_3; }
	inline Vector3_t4282066566 * get_address_of_offset_3() { return &___offset_3; }
	inline void set_offset_3(Vector3_t4282066566  value)
	{
		___offset_3 = value;
	}

	inline static int32_t get_offset_of_smoothTime_4() { return static_cast<int32_t>(offsetof(CameraMovement_t1977483028, ___smoothTime_4)); }
	inline float get_smoothTime_4() const { return ___smoothTime_4; }
	inline float* get_address_of_smoothTime_4() { return &___smoothTime_4; }
	inline void set_smoothTime_4(float value)
	{
		___smoothTime_4 = value;
	}

	inline static int32_t get_offset_of_velocity_5() { return static_cast<int32_t>(offsetof(CameraMovement_t1977483028, ___velocity_5)); }
	inline Vector3_t4282066566  get_velocity_5() const { return ___velocity_5; }
	inline Vector3_t4282066566 * get_address_of_velocity_5() { return &___velocity_5; }
	inline void set_velocity_5(Vector3_t4282066566  value)
	{
		___velocity_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
