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
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t440051646;
// EnemySpawnTrigger
struct EnemySpawnTrigger_t3933962565;
// UnityEngine.Light
struct Light_t4202674828;
// UnityEngine.BoxCollider
struct BoxCollider_t2538127765;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// UnityEngine.AudioClip
struct AudioClip_t794140988;

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
	// UnityEngine.Vector3 SpectralController::deathPosition
	Vector3_t4282066566  ___deathPosition_5;
	// UnityEngine.GameObject SpectralController::spectralSpew
	GameObject_t3674682005 * ___spectralSpew_6;
	// UnityEngine.Renderer[] SpectralController::renderers
	RendererU5BU5D_t440051646* ___renderers_7;
	// EnemySpawnTrigger SpectralController::enemySpawnTrigger
	EnemySpawnTrigger_t3933962565 * ___enemySpawnTrigger_8;
	// UnityEngine.Light SpectralController::spectralLight
	Light_t4202674828 * ___spectralLight_9;
	// UnityEngine.BoxCollider SpectralController::spectralBoxCollider
	BoxCollider_t2538127765 * ___spectralBoxCollider_10;
	// System.Boolean SpectralController::hitPlayer
	bool ___hitPlayer_11;
	// UnityEngine.AudioSource SpectralController::aSource
	AudioSource_t1740077639 * ___aSource_12;
	// UnityEngine.AudioClip SpectralController::spectralSplat
	AudioClip_t794140988 * ___spectralSplat_13;

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

	inline static int32_t get_offset_of_deathPosition_5() { return static_cast<int32_t>(offsetof(SpectralController_t2859967552, ___deathPosition_5)); }
	inline Vector3_t4282066566  get_deathPosition_5() const { return ___deathPosition_5; }
	inline Vector3_t4282066566 * get_address_of_deathPosition_5() { return &___deathPosition_5; }
	inline void set_deathPosition_5(Vector3_t4282066566  value)
	{
		___deathPosition_5 = value;
	}

	inline static int32_t get_offset_of_spectralSpew_6() { return static_cast<int32_t>(offsetof(SpectralController_t2859967552, ___spectralSpew_6)); }
	inline GameObject_t3674682005 * get_spectralSpew_6() const { return ___spectralSpew_6; }
	inline GameObject_t3674682005 ** get_address_of_spectralSpew_6() { return &___spectralSpew_6; }
	inline void set_spectralSpew_6(GameObject_t3674682005 * value)
	{
		___spectralSpew_6 = value;
		Il2CppCodeGenWriteBarrier(&___spectralSpew_6, value);
	}

	inline static int32_t get_offset_of_renderers_7() { return static_cast<int32_t>(offsetof(SpectralController_t2859967552, ___renderers_7)); }
	inline RendererU5BU5D_t440051646* get_renderers_7() const { return ___renderers_7; }
	inline RendererU5BU5D_t440051646** get_address_of_renderers_7() { return &___renderers_7; }
	inline void set_renderers_7(RendererU5BU5D_t440051646* value)
	{
		___renderers_7 = value;
		Il2CppCodeGenWriteBarrier(&___renderers_7, value);
	}

	inline static int32_t get_offset_of_enemySpawnTrigger_8() { return static_cast<int32_t>(offsetof(SpectralController_t2859967552, ___enemySpawnTrigger_8)); }
	inline EnemySpawnTrigger_t3933962565 * get_enemySpawnTrigger_8() const { return ___enemySpawnTrigger_8; }
	inline EnemySpawnTrigger_t3933962565 ** get_address_of_enemySpawnTrigger_8() { return &___enemySpawnTrigger_8; }
	inline void set_enemySpawnTrigger_8(EnemySpawnTrigger_t3933962565 * value)
	{
		___enemySpawnTrigger_8 = value;
		Il2CppCodeGenWriteBarrier(&___enemySpawnTrigger_8, value);
	}

	inline static int32_t get_offset_of_spectralLight_9() { return static_cast<int32_t>(offsetof(SpectralController_t2859967552, ___spectralLight_9)); }
	inline Light_t4202674828 * get_spectralLight_9() const { return ___spectralLight_9; }
	inline Light_t4202674828 ** get_address_of_spectralLight_9() { return &___spectralLight_9; }
	inline void set_spectralLight_9(Light_t4202674828 * value)
	{
		___spectralLight_9 = value;
		Il2CppCodeGenWriteBarrier(&___spectralLight_9, value);
	}

	inline static int32_t get_offset_of_spectralBoxCollider_10() { return static_cast<int32_t>(offsetof(SpectralController_t2859967552, ___spectralBoxCollider_10)); }
	inline BoxCollider_t2538127765 * get_spectralBoxCollider_10() const { return ___spectralBoxCollider_10; }
	inline BoxCollider_t2538127765 ** get_address_of_spectralBoxCollider_10() { return &___spectralBoxCollider_10; }
	inline void set_spectralBoxCollider_10(BoxCollider_t2538127765 * value)
	{
		___spectralBoxCollider_10 = value;
		Il2CppCodeGenWriteBarrier(&___spectralBoxCollider_10, value);
	}

	inline static int32_t get_offset_of_hitPlayer_11() { return static_cast<int32_t>(offsetof(SpectralController_t2859967552, ___hitPlayer_11)); }
	inline bool get_hitPlayer_11() const { return ___hitPlayer_11; }
	inline bool* get_address_of_hitPlayer_11() { return &___hitPlayer_11; }
	inline void set_hitPlayer_11(bool value)
	{
		___hitPlayer_11 = value;
	}

	inline static int32_t get_offset_of_aSource_12() { return static_cast<int32_t>(offsetof(SpectralController_t2859967552, ___aSource_12)); }
	inline AudioSource_t1740077639 * get_aSource_12() const { return ___aSource_12; }
	inline AudioSource_t1740077639 ** get_address_of_aSource_12() { return &___aSource_12; }
	inline void set_aSource_12(AudioSource_t1740077639 * value)
	{
		___aSource_12 = value;
		Il2CppCodeGenWriteBarrier(&___aSource_12, value);
	}

	inline static int32_t get_offset_of_spectralSplat_13() { return static_cast<int32_t>(offsetof(SpectralController_t2859967552, ___spectralSplat_13)); }
	inline AudioClip_t794140988 * get_spectralSplat_13() const { return ___spectralSplat_13; }
	inline AudioClip_t794140988 ** get_address_of_spectralSplat_13() { return &___spectralSplat_13; }
	inline void set_spectralSplat_13(AudioClip_t794140988 * value)
	{
		___spectralSplat_13 = value;
		Il2CppCodeGenWriteBarrier(&___spectralSplat_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
