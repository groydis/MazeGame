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
// EnemySpawnTrigger
struct EnemySpawnTrigger_t3933962565;
// UnityEngine.MeshRenderer
struct MeshRenderer_t2804666580;
// UnityEngine.AudioClip
struct AudioClip_t794140988;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;

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
	// System.Boolean TrolleyController::isDisabling
	bool ___isDisabling_9;
	// EnemySpawnTrigger TrolleyController::enemySpawnTrigger
	EnemySpawnTrigger_t3933962565 * ___enemySpawnTrigger_10;
	// UnityEngine.MeshRenderer TrolleyController::objectMeshRenderer
	MeshRenderer_t2804666580 * ___objectMeshRenderer_11;
	// UnityEngine.AudioClip TrolleyController::crash
	AudioClip_t794140988 * ___crash_12;
	// UnityEngine.AudioSource TrolleyController::aSource
	AudioSource_t1740077639 * ___aSource_13;

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

	inline static int32_t get_offset_of_isDisabling_9() { return static_cast<int32_t>(offsetof(TrolleyController_t3484123329, ___isDisabling_9)); }
	inline bool get_isDisabling_9() const { return ___isDisabling_9; }
	inline bool* get_address_of_isDisabling_9() { return &___isDisabling_9; }
	inline void set_isDisabling_9(bool value)
	{
		___isDisabling_9 = value;
	}

	inline static int32_t get_offset_of_enemySpawnTrigger_10() { return static_cast<int32_t>(offsetof(TrolleyController_t3484123329, ___enemySpawnTrigger_10)); }
	inline EnemySpawnTrigger_t3933962565 * get_enemySpawnTrigger_10() const { return ___enemySpawnTrigger_10; }
	inline EnemySpawnTrigger_t3933962565 ** get_address_of_enemySpawnTrigger_10() { return &___enemySpawnTrigger_10; }
	inline void set_enemySpawnTrigger_10(EnemySpawnTrigger_t3933962565 * value)
	{
		___enemySpawnTrigger_10 = value;
		Il2CppCodeGenWriteBarrier(&___enemySpawnTrigger_10, value);
	}

	inline static int32_t get_offset_of_objectMeshRenderer_11() { return static_cast<int32_t>(offsetof(TrolleyController_t3484123329, ___objectMeshRenderer_11)); }
	inline MeshRenderer_t2804666580 * get_objectMeshRenderer_11() const { return ___objectMeshRenderer_11; }
	inline MeshRenderer_t2804666580 ** get_address_of_objectMeshRenderer_11() { return &___objectMeshRenderer_11; }
	inline void set_objectMeshRenderer_11(MeshRenderer_t2804666580 * value)
	{
		___objectMeshRenderer_11 = value;
		Il2CppCodeGenWriteBarrier(&___objectMeshRenderer_11, value);
	}

	inline static int32_t get_offset_of_crash_12() { return static_cast<int32_t>(offsetof(TrolleyController_t3484123329, ___crash_12)); }
	inline AudioClip_t794140988 * get_crash_12() const { return ___crash_12; }
	inline AudioClip_t794140988 ** get_address_of_crash_12() { return &___crash_12; }
	inline void set_crash_12(AudioClip_t794140988 * value)
	{
		___crash_12 = value;
		Il2CppCodeGenWriteBarrier(&___crash_12, value);
	}

	inline static int32_t get_offset_of_aSource_13() { return static_cast<int32_t>(offsetof(TrolleyController_t3484123329, ___aSource_13)); }
	inline AudioSource_t1740077639 * get_aSource_13() const { return ___aSource_13; }
	inline AudioSource_t1740077639 ** get_address_of_aSource_13() { return &___aSource_13; }
	inline void set_aSource_13(AudioSource_t1740077639 * value)
	{
		___aSource_13 = value;
		Il2CppCodeGenWriteBarrier(&___aSource_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
