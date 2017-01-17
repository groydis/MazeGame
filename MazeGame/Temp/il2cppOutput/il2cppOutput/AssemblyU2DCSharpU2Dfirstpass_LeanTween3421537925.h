#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// LTDescr[]
struct LTDescrU5BU5D_t1413804836;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// LTDescr
struct LTDescr_t1201573721;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3667593487;
// System.Action`1<LTEvent>[]
struct Action_1U5BU5D_t2012336415;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeanTween
struct  LeanTween_t3421537925  : public MonoBehaviour_t667441552
{
public:

public:
};

struct LeanTween_t3421537925_StaticFields
{
public:
	// System.Boolean LeanTween::throwErrors
	bool ___throwErrors_2;
	// System.Single LeanTween::tau
	float ___tau_3;
	// System.Single LeanTween::PI_DIV2
	float ___PI_DIV2_4;
	// LTDescr[] LeanTween::tweens
	LTDescrU5BU5D_t1413804836* ___tweens_5;
	// System.Int32[] LeanTween::tweensFinished
	Int32U5BU5D_t3230847821* ___tweensFinished_6;
	// LTDescr LeanTween::tween
	LTDescr_t1201573721 * ___tween_7;
	// System.Int32 LeanTween::tweenMaxSearch
	int32_t ___tweenMaxSearch_8;
	// System.Int32 LeanTween::maxTweens
	int32_t ___maxTweens_9;
	// System.Int32 LeanTween::frameRendered
	int32_t ___frameRendered_10;
	// UnityEngine.GameObject LeanTween::_tweenEmpty
	GameObject_t3674682005 * ____tweenEmpty_11;
	// System.Single LeanTween::dtEstimated
	float ___dtEstimated_12;
	// System.Single LeanTween::dtManual
	float ___dtManual_13;
	// System.Single LeanTween::dtActual
	float ___dtActual_14;
	// System.Int32 LeanTween::i
	int32_t ___i_15;
	// System.Int32 LeanTween::j
	int32_t ___j_16;
	// System.Int32 LeanTween::finishedCnt
	int32_t ___finishedCnt_17;
	// UnityEngine.AnimationCurve LeanTween::punch
	AnimationCurve_t3667593487 * ___punch_18;
	// UnityEngine.AnimationCurve LeanTween::shake
	AnimationCurve_t3667593487 * ___shake_19;
	// System.Int32 LeanTween::maxTweenReached
	int32_t ___maxTweenReached_20;
	// System.Int32 LeanTween::startSearch
	int32_t ___startSearch_21;
	// LTDescr LeanTween::d
	LTDescr_t1201573721 * ___d_22;
	// System.Action`1<LTEvent>[] LeanTween::eventListeners
	Action_1U5BU5D_t2012336415* ___eventListeners_23;
	// UnityEngine.GameObject[] LeanTween::goListeners
	GameObjectU5BU5D_t2662109048* ___goListeners_24;
	// System.Int32 LeanTween::eventsMaxSearch
	int32_t ___eventsMaxSearch_25;
	// System.Int32 LeanTween::EVENTS_MAX
	int32_t ___EVENTS_MAX_26;
	// System.Int32 LeanTween::LISTENERS_MAX
	int32_t ___LISTENERS_MAX_27;
	// System.Int32 LeanTween::INIT_LISTENERS_MAX
	int32_t ___INIT_LISTENERS_MAX_28;

public:
	inline static int32_t get_offset_of_throwErrors_2() { return static_cast<int32_t>(offsetof(LeanTween_t3421537925_StaticFields, ___throwErrors_2)); }
	inline bool get_throwErrors_2() const { return ___throwErrors_2; }
	inline bool* get_address_of_throwErrors_2() { return &___throwErrors_2; }
	inline void set_throwErrors_2(bool value)
	{
		___throwErrors_2 = value;
	}

	inline static int32_t get_offset_of_tau_3() { return static_cast<int32_t>(offsetof(LeanTween_t3421537925_StaticFields, ___tau_3)); }
	inline float get_tau_3() const { return ___tau_3; }
	inline float* get_address_of_tau_3() { return &___tau_3; }
	inline void set_tau_3(float value)
	{
		___tau_3 = value;
	}

	inline static int32_t get_offset_of_PI_DIV2_4() { return static_cast<int32_t>(offsetof(LeanTween_t3421537925_StaticFields, ___PI_DIV2_4)); }
	inline float get_PI_DIV2_4() const { return ___PI_DIV2_4; }
	inline float* get_address_of_PI_DIV2_4() { return &___PI_DIV2_4; }
	inline void set_PI_DIV2_4(float value)
	{
		___PI_DIV2_4 = value;
	}

	inline static int32_t get_offset_of_tweens_5() { return static_cast<int32_t>(offsetof(LeanTween_t3421537925_StaticFields, ___tweens_5)); }
	inline LTDescrU5BU5D_t1413804836* get_tweens_5() const { return ___tweens_5; }
	inline LTDescrU5BU5D_t1413804836** get_address_of_tweens_5() { return &___tweens_5; }
	inline void set_tweens_5(LTDescrU5BU5D_t1413804836* value)
	{
		___tweens_5 = value;
		Il2CppCodeGenWriteBarrier(&___tweens_5, value);
	}

	inline static int32_t get_offset_of_tweensFinished_6() { return static_cast<int32_t>(offsetof(LeanTween_t3421537925_StaticFields, ___tweensFinished_6)); }
	inline Int32U5BU5D_t3230847821* get_tweensFinished_6() const { return ___tweensFinished_6; }
	inline Int32U5BU5D_t3230847821** get_address_of_tweensFinished_6() { return &___tweensFinished_6; }
	inline void set_tweensFinished_6(Int32U5BU5D_t3230847821* value)
	{
		___tweensFinished_6 = value;
		Il2CppCodeGenWriteBarrier(&___tweensFinished_6, value);
	}

	inline static int32_t get_offset_of_tween_7() { return static_cast<int32_t>(offsetof(LeanTween_t3421537925_StaticFields, ___tween_7)); }
	inline LTDescr_t1201573721 * get_tween_7() const { return ___tween_7; }
	inline LTDescr_t1201573721 ** get_address_of_tween_7() { return &___tween_7; }
	inline void set_tween_7(LTDescr_t1201573721 * value)
	{
		___tween_7 = value;
		Il2CppCodeGenWriteBarrier(&___tween_7, value);
	}

	inline static int32_t get_offset_of_tweenMaxSearch_8() { return static_cast<int32_t>(offsetof(LeanTween_t3421537925_StaticFields, ___tweenMaxSearch_8)); }
	inline int32_t get_tweenMaxSearch_8() const { return ___tweenMaxSearch_8; }
	inline int32_t* get_address_of_tweenMaxSearch_8() { return &___tweenMaxSearch_8; }
	inline void set_tweenMaxSearch_8(int32_t value)
	{
		___tweenMaxSearch_8 = value;
	}

	inline static int32_t get_offset_of_maxTweens_9() { return static_cast<int32_t>(offsetof(LeanTween_t3421537925_StaticFields, ___maxTweens_9)); }
	inline int32_t get_maxTweens_9() const { return ___maxTweens_9; }
	inline int32_t* get_address_of_maxTweens_9() { return &___maxTweens_9; }
	inline void set_maxTweens_9(int32_t value)
	{
		___maxTweens_9 = value;
	}

	inline static int32_t get_offset_of_frameRendered_10() { return static_cast<int32_t>(offsetof(LeanTween_t3421537925_StaticFields, ___frameRendered_10)); }
	inline int32_t get_frameRendered_10() const { return ___frameRendered_10; }
	inline int32_t* get_address_of_frameRendered_10() { return &___frameRendered_10; }
	inline void set_frameRendered_10(int32_t value)
	{
		___frameRendered_10 = value;
	}

	inline static int32_t get_offset_of__tweenEmpty_11() { return static_cast<int32_t>(offsetof(LeanTween_t3421537925_StaticFields, ____tweenEmpty_11)); }
	inline GameObject_t3674682005 * get__tweenEmpty_11() const { return ____tweenEmpty_11; }
	inline GameObject_t3674682005 ** get_address_of__tweenEmpty_11() { return &____tweenEmpty_11; }
	inline void set__tweenEmpty_11(GameObject_t3674682005 * value)
	{
		____tweenEmpty_11 = value;
		Il2CppCodeGenWriteBarrier(&____tweenEmpty_11, value);
	}

	inline static int32_t get_offset_of_dtEstimated_12() { return static_cast<int32_t>(offsetof(LeanTween_t3421537925_StaticFields, ___dtEstimated_12)); }
	inline float get_dtEstimated_12() const { return ___dtEstimated_12; }
	inline float* get_address_of_dtEstimated_12() { return &___dtEstimated_12; }
	inline void set_dtEstimated_12(float value)
	{
		___dtEstimated_12 = value;
	}

	inline static int32_t get_offset_of_dtManual_13() { return static_cast<int32_t>(offsetof(LeanTween_t3421537925_StaticFields, ___dtManual_13)); }
	inline float get_dtManual_13() const { return ___dtManual_13; }
	inline float* get_address_of_dtManual_13() { return &___dtManual_13; }
	inline void set_dtManual_13(float value)
	{
		___dtManual_13 = value;
	}

	inline static int32_t get_offset_of_dtActual_14() { return static_cast<int32_t>(offsetof(LeanTween_t3421537925_StaticFields, ___dtActual_14)); }
	inline float get_dtActual_14() const { return ___dtActual_14; }
	inline float* get_address_of_dtActual_14() { return &___dtActual_14; }
	inline void set_dtActual_14(float value)
	{
		___dtActual_14 = value;
	}

	inline static int32_t get_offset_of_i_15() { return static_cast<int32_t>(offsetof(LeanTween_t3421537925_StaticFields, ___i_15)); }
	inline int32_t get_i_15() const { return ___i_15; }
	inline int32_t* get_address_of_i_15() { return &___i_15; }
	inline void set_i_15(int32_t value)
	{
		___i_15 = value;
	}

	inline static int32_t get_offset_of_j_16() { return static_cast<int32_t>(offsetof(LeanTween_t3421537925_StaticFields, ___j_16)); }
	inline int32_t get_j_16() const { return ___j_16; }
	inline int32_t* get_address_of_j_16() { return &___j_16; }
	inline void set_j_16(int32_t value)
	{
		___j_16 = value;
	}

	inline static int32_t get_offset_of_finishedCnt_17() { return static_cast<int32_t>(offsetof(LeanTween_t3421537925_StaticFields, ___finishedCnt_17)); }
	inline int32_t get_finishedCnt_17() const { return ___finishedCnt_17; }
	inline int32_t* get_address_of_finishedCnt_17() { return &___finishedCnt_17; }
	inline void set_finishedCnt_17(int32_t value)
	{
		___finishedCnt_17 = value;
	}

	inline static int32_t get_offset_of_punch_18() { return static_cast<int32_t>(offsetof(LeanTween_t3421537925_StaticFields, ___punch_18)); }
	inline AnimationCurve_t3667593487 * get_punch_18() const { return ___punch_18; }
	inline AnimationCurve_t3667593487 ** get_address_of_punch_18() { return &___punch_18; }
	inline void set_punch_18(AnimationCurve_t3667593487 * value)
	{
		___punch_18 = value;
		Il2CppCodeGenWriteBarrier(&___punch_18, value);
	}

	inline static int32_t get_offset_of_shake_19() { return static_cast<int32_t>(offsetof(LeanTween_t3421537925_StaticFields, ___shake_19)); }
	inline AnimationCurve_t3667593487 * get_shake_19() const { return ___shake_19; }
	inline AnimationCurve_t3667593487 ** get_address_of_shake_19() { return &___shake_19; }
	inline void set_shake_19(AnimationCurve_t3667593487 * value)
	{
		___shake_19 = value;
		Il2CppCodeGenWriteBarrier(&___shake_19, value);
	}

	inline static int32_t get_offset_of_maxTweenReached_20() { return static_cast<int32_t>(offsetof(LeanTween_t3421537925_StaticFields, ___maxTweenReached_20)); }
	inline int32_t get_maxTweenReached_20() const { return ___maxTweenReached_20; }
	inline int32_t* get_address_of_maxTweenReached_20() { return &___maxTweenReached_20; }
	inline void set_maxTweenReached_20(int32_t value)
	{
		___maxTweenReached_20 = value;
	}

	inline static int32_t get_offset_of_startSearch_21() { return static_cast<int32_t>(offsetof(LeanTween_t3421537925_StaticFields, ___startSearch_21)); }
	inline int32_t get_startSearch_21() const { return ___startSearch_21; }
	inline int32_t* get_address_of_startSearch_21() { return &___startSearch_21; }
	inline void set_startSearch_21(int32_t value)
	{
		___startSearch_21 = value;
	}

	inline static int32_t get_offset_of_d_22() { return static_cast<int32_t>(offsetof(LeanTween_t3421537925_StaticFields, ___d_22)); }
	inline LTDescr_t1201573721 * get_d_22() const { return ___d_22; }
	inline LTDescr_t1201573721 ** get_address_of_d_22() { return &___d_22; }
	inline void set_d_22(LTDescr_t1201573721 * value)
	{
		___d_22 = value;
		Il2CppCodeGenWriteBarrier(&___d_22, value);
	}

	inline static int32_t get_offset_of_eventListeners_23() { return static_cast<int32_t>(offsetof(LeanTween_t3421537925_StaticFields, ___eventListeners_23)); }
	inline Action_1U5BU5D_t2012336415* get_eventListeners_23() const { return ___eventListeners_23; }
	inline Action_1U5BU5D_t2012336415** get_address_of_eventListeners_23() { return &___eventListeners_23; }
	inline void set_eventListeners_23(Action_1U5BU5D_t2012336415* value)
	{
		___eventListeners_23 = value;
		Il2CppCodeGenWriteBarrier(&___eventListeners_23, value);
	}

	inline static int32_t get_offset_of_goListeners_24() { return static_cast<int32_t>(offsetof(LeanTween_t3421537925_StaticFields, ___goListeners_24)); }
	inline GameObjectU5BU5D_t2662109048* get_goListeners_24() const { return ___goListeners_24; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_goListeners_24() { return &___goListeners_24; }
	inline void set_goListeners_24(GameObjectU5BU5D_t2662109048* value)
	{
		___goListeners_24 = value;
		Il2CppCodeGenWriteBarrier(&___goListeners_24, value);
	}

	inline static int32_t get_offset_of_eventsMaxSearch_25() { return static_cast<int32_t>(offsetof(LeanTween_t3421537925_StaticFields, ___eventsMaxSearch_25)); }
	inline int32_t get_eventsMaxSearch_25() const { return ___eventsMaxSearch_25; }
	inline int32_t* get_address_of_eventsMaxSearch_25() { return &___eventsMaxSearch_25; }
	inline void set_eventsMaxSearch_25(int32_t value)
	{
		___eventsMaxSearch_25 = value;
	}

	inline static int32_t get_offset_of_EVENTS_MAX_26() { return static_cast<int32_t>(offsetof(LeanTween_t3421537925_StaticFields, ___EVENTS_MAX_26)); }
	inline int32_t get_EVENTS_MAX_26() const { return ___EVENTS_MAX_26; }
	inline int32_t* get_address_of_EVENTS_MAX_26() { return &___EVENTS_MAX_26; }
	inline void set_EVENTS_MAX_26(int32_t value)
	{
		___EVENTS_MAX_26 = value;
	}

	inline static int32_t get_offset_of_LISTENERS_MAX_27() { return static_cast<int32_t>(offsetof(LeanTween_t3421537925_StaticFields, ___LISTENERS_MAX_27)); }
	inline int32_t get_LISTENERS_MAX_27() const { return ___LISTENERS_MAX_27; }
	inline int32_t* get_address_of_LISTENERS_MAX_27() { return &___LISTENERS_MAX_27; }
	inline void set_LISTENERS_MAX_27(int32_t value)
	{
		___LISTENERS_MAX_27 = value;
	}

	inline static int32_t get_offset_of_INIT_LISTENERS_MAX_28() { return static_cast<int32_t>(offsetof(LeanTween_t3421537925_StaticFields, ___INIT_LISTENERS_MAX_28)); }
	inline int32_t get_INIT_LISTENERS_MAX_28() const { return ___INIT_LISTENERS_MAX_28; }
	inline int32_t* get_address_of_INIT_LISTENERS_MAX_28() { return &___INIT_LISTENERS_MAX_28; }
	inline void set_INIT_LISTENERS_MAX_28(int32_t value)
	{
		___INIT_LISTENERS_MAX_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
