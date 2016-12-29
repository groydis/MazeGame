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
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t440051646;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpectralController
struct  SpectralController_t2859967552  : public MonoBehaviour_t667441552
{
public:
	// System.Single SpectralController::moveSpeed
	float ___moveSpeed_2;
	// UnityEngine.Rigidbody SpectralController::rBody
	Rigidbody_t3346577219 * ___rBody_3;
	// System.Boolean SpectralController::startMoving
	bool ___startMoving_4;
	// System.Single SpectralController::deathTime
	float ___deathTime_5;
	// System.Single SpectralController::respawnTime
	float ___respawnTime_6;
	// UnityEngine.Vector3 SpectralController::deathPosition
	Vector3_t4282066566  ___deathPosition_7;
	// UnityEngine.GameObject SpectralController::spectralSpew
	GameObject_t3674682005 * ___spectralSpew_8;
	// UnityEngine.Renderer[] SpectralController::renderers
	RendererU5BU5D_t440051646* ___renderers_9;

public:
	inline static int32_t get_offset_of_moveSpeed_2() { return static_cast<int32_t>(offsetof(SpectralController_t2859967552, ___moveSpeed_2)); }
	inline float get_moveSpeed_2() const { return ___moveSpeed_2; }
	inline float* get_address_of_moveSpeed_2() { return &___moveSpeed_2; }
	inline void set_moveSpeed_2(float value)
	{
		___moveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_rBody_3() { return static_cast<int32_t>(offsetof(SpectralController_t2859967552, ___rBody_3)); }
	inline Rigidbody_t3346577219 * get_rBody_3() const { return ___rBody_3; }
	inline Rigidbody_t3346577219 ** get_address_of_rBody_3() { return &___rBody_3; }
	inline void set_rBody_3(Rigidbody_t3346577219 * value)
	{
		___rBody_3 = value;
		Il2CppCodeGenWriteBarrier(&___rBody_3, value);
	}

	inline static int32_t get_offset_of_startMoving_4() { return static_cast<int32_t>(offsetof(SpectralController_t2859967552, ___startMoving_4)); }
	inline bool get_startMoving_4() const { return ___startMoving_4; }
	inline bool* get_address_of_startMoving_4() { return &___startMoving_4; }
	inline void set_startMoving_4(bool value)
	{
		___startMoving_4 = value;
	}

	inline static int32_t get_offset_of_deathTime_5() { return static_cast<int32_t>(offsetof(SpectralController_t2859967552, ___deathTime_5)); }
	inline float get_deathTime_5() const { return ___deathTime_5; }
	inline float* get_address_of_deathTime_5() { return &___deathTime_5; }
	inline void set_deathTime_5(float value)
	{
		___deathTime_5 = value;
	}

	inline static int32_t get_offset_of_respawnTime_6() { return static_cast<int32_t>(offsetof(SpectralController_t2859967552, ___respawnTime_6)); }
	inline float get_respawnTime_6() const { return ___respawnTime_6; }
	inline float* get_address_of_respawnTime_6() { return &___respawnTime_6; }
	inline void set_respawnTime_6(float value)
	{
		___respawnTime_6 = value;
	}

	inline static int32_t get_offset_of_deathPosition_7() { return static_cast<int32_t>(offsetof(SpectralController_t2859967552, ___deathPosition_7)); }
	inline Vector3_t4282066566  get_deathPosition_7() const { return ___deathPosition_7; }
	inline Vector3_t4282066566 * get_address_of_deathPosition_7() { return &___deathPosition_7; }
	inline void set_deathPosition_7(Vector3_t4282066566  value)
	{
		___deathPosition_7 = value;
	}

	inline static int32_t get_offset_of_spectralSpew_8() { return static_cast<int32_t>(offsetof(SpectralController_t2859967552, ___spectralSpew_8)); }
	inline GameObject_t3674682005 * get_spectralSpew_8() const { return ___spectralSpew_8; }
	inline GameObject_t3674682005 ** get_address_of_spectralSpew_8() { return &___spectralSpew_8; }
	inline void set_spectralSpew_8(GameObject_t3674682005 * value)
	{
		___spectralSpew_8 = value;
		Il2CppCodeGenWriteBarrier(&___spectralSpew_8, value);
	}

	inline static int32_t get_offset_of_renderers_9() { return static_cast<int32_t>(offsetof(SpectralController_t2859967552, ___renderers_9)); }
	inline RendererU5BU5D_t440051646* get_renderers_9() const { return ___renderers_9; }
	inline RendererU5BU5D_t440051646** get_address_of_renderers_9() { return &___renderers_9; }
	inline void set_renderers_9(RendererU5BU5D_t440051646* value)
	{
		___renderers_9 = value;
		Il2CppCodeGenWriteBarrier(&___renderers_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
