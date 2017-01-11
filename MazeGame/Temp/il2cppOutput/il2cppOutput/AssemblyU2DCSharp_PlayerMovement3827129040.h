#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerMovement
struct  PlayerMovement_t3827129040  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Rigidbody PlayerMovement::rbody
	Rigidbody_t3346577219 * ___rbody_2;
	// UnityEngine.Quaternion PlayerMovement::startingRotation
	Quaternion_t1553702882  ___startingRotation_3;
	// System.Single PlayerMovement::rotationSpeed
	float ___rotationSpeed_4;

public:
	inline static int32_t get_offset_of_rbody_2() { return static_cast<int32_t>(offsetof(PlayerMovement_t3827129040, ___rbody_2)); }
	inline Rigidbody_t3346577219 * get_rbody_2() const { return ___rbody_2; }
	inline Rigidbody_t3346577219 ** get_address_of_rbody_2() { return &___rbody_2; }
	inline void set_rbody_2(Rigidbody_t3346577219 * value)
	{
		___rbody_2 = value;
		Il2CppCodeGenWriteBarrier(&___rbody_2, value);
	}

	inline static int32_t get_offset_of_startingRotation_3() { return static_cast<int32_t>(offsetof(PlayerMovement_t3827129040, ___startingRotation_3)); }
	inline Quaternion_t1553702882  get_startingRotation_3() const { return ___startingRotation_3; }
	inline Quaternion_t1553702882 * get_address_of_startingRotation_3() { return &___startingRotation_3; }
	inline void set_startingRotation_3(Quaternion_t1553702882  value)
	{
		___startingRotation_3 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_4() { return static_cast<int32_t>(offsetof(PlayerMovement_t3827129040, ___rotationSpeed_4)); }
	inline float get_rotationSpeed_4() const { return ___rotationSpeed_4; }
	inline float* get_address_of_rotationSpeed_4() { return &___rotationSpeed_4; }
	inline void set_rotationSpeed_4(float value)
	{
		___rotationSpeed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
