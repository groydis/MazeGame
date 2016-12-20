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
	// System.Single PlayerMovement::movementSpeed
	float ___movementSpeed_2;
	// UnityEngine.Rigidbody PlayerMovement::rbody
	Rigidbody_t3346577219 * ___rbody_3;
	// UnityEngine.Quaternion PlayerMovement::startingRotation
	Quaternion_t1553702882  ___startingRotation_4;
	// System.Single PlayerMovement::rotationSpeed
	float ___rotationSpeed_5;

public:
	inline static int32_t get_offset_of_movementSpeed_2() { return static_cast<int32_t>(offsetof(PlayerMovement_t3827129040, ___movementSpeed_2)); }
	inline float get_movementSpeed_2() const { return ___movementSpeed_2; }
	inline float* get_address_of_movementSpeed_2() { return &___movementSpeed_2; }
	inline void set_movementSpeed_2(float value)
	{
		___movementSpeed_2 = value;
	}

	inline static int32_t get_offset_of_rbody_3() { return static_cast<int32_t>(offsetof(PlayerMovement_t3827129040, ___rbody_3)); }
	inline Rigidbody_t3346577219 * get_rbody_3() const { return ___rbody_3; }
	inline Rigidbody_t3346577219 ** get_address_of_rbody_3() { return &___rbody_3; }
	inline void set_rbody_3(Rigidbody_t3346577219 * value)
	{
		___rbody_3 = value;
		Il2CppCodeGenWriteBarrier(&___rbody_3, value);
	}

	inline static int32_t get_offset_of_startingRotation_4() { return static_cast<int32_t>(offsetof(PlayerMovement_t3827129040, ___startingRotation_4)); }
	inline Quaternion_t1553702882  get_startingRotation_4() const { return ___startingRotation_4; }
	inline Quaternion_t1553702882 * get_address_of_startingRotation_4() { return &___startingRotation_4; }
	inline void set_startingRotation_4(Quaternion_t1553702882  value)
	{
		___startingRotation_4 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_5() { return static_cast<int32_t>(offsetof(PlayerMovement_t3827129040, ___rotationSpeed_5)); }
	inline float get_rotationSpeed_5() const { return ___rotationSpeed_5; }
	inline float* get_address_of_rotationSpeed_5() { return &___rotationSpeed_5; }
	inline void set_rotationSpeed_5(float value)
	{
		___rotationSpeed_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
