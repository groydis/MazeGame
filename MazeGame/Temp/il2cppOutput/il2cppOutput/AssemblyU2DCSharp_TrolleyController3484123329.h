﻿#pragma once

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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TrolleyController
struct  TrolleyController_t3484123329  : public MonoBehaviour_t667441552
{
public:
	// System.Single TrolleyController::moveSpeed
	float ___moveSpeed_2;
	// UnityEngine.Rigidbody TrolleyController::rBody
	Rigidbody_t3346577219 * ___rBody_3;
	// System.Boolean TrolleyController::startMoving
	bool ___startMoving_4;
	// System.Single TrolleyController::deathTime
	float ___deathTime_5;
	// System.Single TrolleyController::deSpawnTime
	float ___deSpawnTime_6;
	// System.Boolean TrolleyController::flashingEnabled
	bool ___flashingEnabled_7;
	// System.Single TrolleyController::flashInterval
	float ___flashInterval_8;

public:
	inline static int32_t get_offset_of_moveSpeed_2() { return static_cast<int32_t>(offsetof(TrolleyController_t3484123329, ___moveSpeed_2)); }
	inline float get_moveSpeed_2() const { return ___moveSpeed_2; }
	inline float* get_address_of_moveSpeed_2() { return &___moveSpeed_2; }
	inline void set_moveSpeed_2(float value)
	{
		___moveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_rBody_3() { return static_cast<int32_t>(offsetof(TrolleyController_t3484123329, ___rBody_3)); }
	inline Rigidbody_t3346577219 * get_rBody_3() const { return ___rBody_3; }
	inline Rigidbody_t3346577219 ** get_address_of_rBody_3() { return &___rBody_3; }
	inline void set_rBody_3(Rigidbody_t3346577219 * value)
	{
		___rBody_3 = value;
		Il2CppCodeGenWriteBarrier(&___rBody_3, value);
	}

	inline static int32_t get_offset_of_startMoving_4() { return static_cast<int32_t>(offsetof(TrolleyController_t3484123329, ___startMoving_4)); }
	inline bool get_startMoving_4() const { return ___startMoving_4; }
	inline bool* get_address_of_startMoving_4() { return &___startMoving_4; }
	inline void set_startMoving_4(bool value)
	{
		___startMoving_4 = value;
	}

	inline static int32_t get_offset_of_deathTime_5() { return static_cast<int32_t>(offsetof(TrolleyController_t3484123329, ___deathTime_5)); }
	inline float get_deathTime_5() const { return ___deathTime_5; }
	inline float* get_address_of_deathTime_5() { return &___deathTime_5; }
	inline void set_deathTime_5(float value)
	{
		___deathTime_5 = value;
	}

	inline static int32_t get_offset_of_deSpawnTime_6() { return static_cast<int32_t>(offsetof(TrolleyController_t3484123329, ___deSpawnTime_6)); }
	inline float get_deSpawnTime_6() const { return ___deSpawnTime_6; }
	inline float* get_address_of_deSpawnTime_6() { return &___deSpawnTime_6; }
	inline void set_deSpawnTime_6(float value)
	{
		___deSpawnTime_6 = value;
	}

	inline static int32_t get_offset_of_flashingEnabled_7() { return static_cast<int32_t>(offsetof(TrolleyController_t3484123329, ___flashingEnabled_7)); }
	inline bool get_flashingEnabled_7() const { return ___flashingEnabled_7; }
	inline bool* get_address_of_flashingEnabled_7() { return &___flashingEnabled_7; }
	inline void set_flashingEnabled_7(bool value)
	{
		___flashingEnabled_7 = value;
	}

	inline static int32_t get_offset_of_flashInterval_8() { return static_cast<int32_t>(offsetof(TrolleyController_t3484123329, ___flashInterval_8)); }
	inline float get_flashInterval_8() const { return ___flashInterval_8; }
	inline float* get_address_of_flashInterval_8() { return &___flashInterval_8; }
	inline void set_flashInterval_8(float value)
	{
		___flashInterval_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
