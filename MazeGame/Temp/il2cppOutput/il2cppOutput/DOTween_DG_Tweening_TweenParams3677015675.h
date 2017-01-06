#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DG.Tweening.TweenParams
struct TweenParams_t3677015675;
// System.Object
struct Il2CppObject;
// DG.Tweening.TweenCallback
struct TweenCallback_t4095062394;
// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_t3678288188;
// DG.Tweening.EaseFunction
struct EaseFunction_t48414120;

#include "mscorlib_System_Object4170816371.h"
#include "DOTween_DG_Tweening_UpdateType3196617317.h"
#include "DOTween_DG_Tweening_LoopType430828992.h"
#include "DOTween_DG_Tweening_Ease1564688304.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.TweenParams
struct  TweenParams_t3677015675  : public Il2CppObject
{
public:
	// System.Object DG.Tweening.TweenParams::id
	Il2CppObject * ___id_1;
	// System.Object DG.Tweening.TweenParams::target
	Il2CppObject * ___target_2;
	// DG.Tweening.UpdateType DG.Tweening.TweenParams::updateType
	int32_t ___updateType_3;
	// System.Boolean DG.Tweening.TweenParams::isIndependentUpdate
	bool ___isIndependentUpdate_4;
	// DG.Tweening.TweenCallback DG.Tweening.TweenParams::onStart
	TweenCallback_t4095062394 * ___onStart_5;
	// DG.Tweening.TweenCallback DG.Tweening.TweenParams::onPlay
	TweenCallback_t4095062394 * ___onPlay_6;
	// DG.Tweening.TweenCallback DG.Tweening.TweenParams::onRewind
	TweenCallback_t4095062394 * ___onRewind_7;
	// DG.Tweening.TweenCallback DG.Tweening.TweenParams::onUpdate
	TweenCallback_t4095062394 * ___onUpdate_8;
	// DG.Tweening.TweenCallback DG.Tweening.TweenParams::onStepComplete
	TweenCallback_t4095062394 * ___onStepComplete_9;
	// DG.Tweening.TweenCallback DG.Tweening.TweenParams::onComplete
	TweenCallback_t4095062394 * ___onComplete_10;
	// DG.Tweening.TweenCallback DG.Tweening.TweenParams::onKill
	TweenCallback_t4095062394 * ___onKill_11;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.TweenParams::onWaypointChange
	TweenCallback_1_t3678288188 * ___onWaypointChange_12;
	// System.Boolean DG.Tweening.TweenParams::isRecyclable
	bool ___isRecyclable_13;
	// System.Boolean DG.Tweening.TweenParams::isSpeedBased
	bool ___isSpeedBased_14;
	// System.Boolean DG.Tweening.TweenParams::autoKill
	bool ___autoKill_15;
	// System.Int32 DG.Tweening.TweenParams::loops
	int32_t ___loops_16;
	// DG.Tweening.LoopType DG.Tweening.TweenParams::loopType
	int32_t ___loopType_17;
	// System.Single DG.Tweening.TweenParams::delay
	float ___delay_18;
	// System.Boolean DG.Tweening.TweenParams::isRelative
	bool ___isRelative_19;
	// DG.Tweening.Ease DG.Tweening.TweenParams::easeType
	int32_t ___easeType_20;
	// DG.Tweening.EaseFunction DG.Tweening.TweenParams::customEase
	EaseFunction_t48414120 * ___customEase_21;
	// System.Single DG.Tweening.TweenParams::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_22;
	// System.Single DG.Tweening.TweenParams::easePeriod
	float ___easePeriod_23;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(TweenParams_t3677015675, ___id_1)); }
	inline Il2CppObject * get_id_1() const { return ___id_1; }
	inline Il2CppObject ** get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(Il2CppObject * value)
	{
		___id_1 = value;
		Il2CppCodeGenWriteBarrier(&___id_1, value);
	}

	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(TweenParams_t3677015675, ___target_2)); }
	inline Il2CppObject * get_target_2() const { return ___target_2; }
	inline Il2CppObject ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Il2CppObject * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_updateType_3() { return static_cast<int32_t>(offsetof(TweenParams_t3677015675, ___updateType_3)); }
	inline int32_t get_updateType_3() const { return ___updateType_3; }
	inline int32_t* get_address_of_updateType_3() { return &___updateType_3; }
	inline void set_updateType_3(int32_t value)
	{
		___updateType_3 = value;
	}

	inline static int32_t get_offset_of_isIndependentUpdate_4() { return static_cast<int32_t>(offsetof(TweenParams_t3677015675, ___isIndependentUpdate_4)); }
	inline bool get_isIndependentUpdate_4() const { return ___isIndependentUpdate_4; }
	inline bool* get_address_of_isIndependentUpdate_4() { return &___isIndependentUpdate_4; }
	inline void set_isIndependentUpdate_4(bool value)
	{
		___isIndependentUpdate_4 = value;
	}

	inline static int32_t get_offset_of_onStart_5() { return static_cast<int32_t>(offsetof(TweenParams_t3677015675, ___onStart_5)); }
	inline TweenCallback_t4095062394 * get_onStart_5() const { return ___onStart_5; }
	inline TweenCallback_t4095062394 ** get_address_of_onStart_5() { return &___onStart_5; }
	inline void set_onStart_5(TweenCallback_t4095062394 * value)
	{
		___onStart_5 = value;
		Il2CppCodeGenWriteBarrier(&___onStart_5, value);
	}

	inline static int32_t get_offset_of_onPlay_6() { return static_cast<int32_t>(offsetof(TweenParams_t3677015675, ___onPlay_6)); }
	inline TweenCallback_t4095062394 * get_onPlay_6() const { return ___onPlay_6; }
	inline TweenCallback_t4095062394 ** get_address_of_onPlay_6() { return &___onPlay_6; }
	inline void set_onPlay_6(TweenCallback_t4095062394 * value)
	{
		___onPlay_6 = value;
		Il2CppCodeGenWriteBarrier(&___onPlay_6, value);
	}

	inline static int32_t get_offset_of_onRewind_7() { return static_cast<int32_t>(offsetof(TweenParams_t3677015675, ___onRewind_7)); }
	inline TweenCallback_t4095062394 * get_onRewind_7() const { return ___onRewind_7; }
	inline TweenCallback_t4095062394 ** get_address_of_onRewind_7() { return &___onRewind_7; }
	inline void set_onRewind_7(TweenCallback_t4095062394 * value)
	{
		___onRewind_7 = value;
		Il2CppCodeGenWriteBarrier(&___onRewind_7, value);
	}

	inline static int32_t get_offset_of_onUpdate_8() { return static_cast<int32_t>(offsetof(TweenParams_t3677015675, ___onUpdate_8)); }
	inline TweenCallback_t4095062394 * get_onUpdate_8() const { return ___onUpdate_8; }
	inline TweenCallback_t4095062394 ** get_address_of_onUpdate_8() { return &___onUpdate_8; }
	inline void set_onUpdate_8(TweenCallback_t4095062394 * value)
	{
		___onUpdate_8 = value;
		Il2CppCodeGenWriteBarrier(&___onUpdate_8, value);
	}

	inline static int32_t get_offset_of_onStepComplete_9() { return static_cast<int32_t>(offsetof(TweenParams_t3677015675, ___onStepComplete_9)); }
	inline TweenCallback_t4095062394 * get_onStepComplete_9() const { return ___onStepComplete_9; }
	inline TweenCallback_t4095062394 ** get_address_of_onStepComplete_9() { return &___onStepComplete_9; }
	inline void set_onStepComplete_9(TweenCallback_t4095062394 * value)
	{
		___onStepComplete_9 = value;
		Il2CppCodeGenWriteBarrier(&___onStepComplete_9, value);
	}

	inline static int32_t get_offset_of_onComplete_10() { return static_cast<int32_t>(offsetof(TweenParams_t3677015675, ___onComplete_10)); }
	inline TweenCallback_t4095062394 * get_onComplete_10() const { return ___onComplete_10; }
	inline TweenCallback_t4095062394 ** get_address_of_onComplete_10() { return &___onComplete_10; }
	inline void set_onComplete_10(TweenCallback_t4095062394 * value)
	{
		___onComplete_10 = value;
		Il2CppCodeGenWriteBarrier(&___onComplete_10, value);
	}

	inline static int32_t get_offset_of_onKill_11() { return static_cast<int32_t>(offsetof(TweenParams_t3677015675, ___onKill_11)); }
	inline TweenCallback_t4095062394 * get_onKill_11() const { return ___onKill_11; }
	inline TweenCallback_t4095062394 ** get_address_of_onKill_11() { return &___onKill_11; }
	inline void set_onKill_11(TweenCallback_t4095062394 * value)
	{
		___onKill_11 = value;
		Il2CppCodeGenWriteBarrier(&___onKill_11, value);
	}

	inline static int32_t get_offset_of_onWaypointChange_12() { return static_cast<int32_t>(offsetof(TweenParams_t3677015675, ___onWaypointChange_12)); }
	inline TweenCallback_1_t3678288188 * get_onWaypointChange_12() const { return ___onWaypointChange_12; }
	inline TweenCallback_1_t3678288188 ** get_address_of_onWaypointChange_12() { return &___onWaypointChange_12; }
	inline void set_onWaypointChange_12(TweenCallback_1_t3678288188 * value)
	{
		___onWaypointChange_12 = value;
		Il2CppCodeGenWriteBarrier(&___onWaypointChange_12, value);
	}

	inline static int32_t get_offset_of_isRecyclable_13() { return static_cast<int32_t>(offsetof(TweenParams_t3677015675, ___isRecyclable_13)); }
	inline bool get_isRecyclable_13() const { return ___isRecyclable_13; }
	inline bool* get_address_of_isRecyclable_13() { return &___isRecyclable_13; }
	inline void set_isRecyclable_13(bool value)
	{
		___isRecyclable_13 = value;
	}

	inline static int32_t get_offset_of_isSpeedBased_14() { return static_cast<int32_t>(offsetof(TweenParams_t3677015675, ___isSpeedBased_14)); }
	inline bool get_isSpeedBased_14() const { return ___isSpeedBased_14; }
	inline bool* get_address_of_isSpeedBased_14() { return &___isSpeedBased_14; }
	inline void set_isSpeedBased_14(bool value)
	{
		___isSpeedBased_14 = value;
	}

	inline static int32_t get_offset_of_autoKill_15() { return static_cast<int32_t>(offsetof(TweenParams_t3677015675, ___autoKill_15)); }
	inline bool get_autoKill_15() const { return ___autoKill_15; }
	inline bool* get_address_of_autoKill_15() { return &___autoKill_15; }
	inline void set_autoKill_15(bool value)
	{
		___autoKill_15 = value;
	}

	inline static int32_t get_offset_of_loops_16() { return static_cast<int32_t>(offsetof(TweenParams_t3677015675, ___loops_16)); }
	inline int32_t get_loops_16() const { return ___loops_16; }
	inline int32_t* get_address_of_loops_16() { return &___loops_16; }
	inline void set_loops_16(int32_t value)
	{
		___loops_16 = value;
	}

	inline static int32_t get_offset_of_loopType_17() { return static_cast<int32_t>(offsetof(TweenParams_t3677015675, ___loopType_17)); }
	inline int32_t get_loopType_17() const { return ___loopType_17; }
	inline int32_t* get_address_of_loopType_17() { return &___loopType_17; }
	inline void set_loopType_17(int32_t value)
	{
		___loopType_17 = value;
	}

	inline static int32_t get_offset_of_delay_18() { return static_cast<int32_t>(offsetof(TweenParams_t3677015675, ___delay_18)); }
	inline float get_delay_18() const { return ___delay_18; }
	inline float* get_address_of_delay_18() { return &___delay_18; }
	inline void set_delay_18(float value)
	{
		___delay_18 = value;
	}

	inline static int32_t get_offset_of_isRelative_19() { return static_cast<int32_t>(offsetof(TweenParams_t3677015675, ___isRelative_19)); }
	inline bool get_isRelative_19() const { return ___isRelative_19; }
	inline bool* get_address_of_isRelative_19() { return &___isRelative_19; }
	inline void set_isRelative_19(bool value)
	{
		___isRelative_19 = value;
	}

	inline static int32_t get_offset_of_easeType_20() { return static_cast<int32_t>(offsetof(TweenParams_t3677015675, ___easeType_20)); }
	inline int32_t get_easeType_20() const { return ___easeType_20; }
	inline int32_t* get_address_of_easeType_20() { return &___easeType_20; }
	inline void set_easeType_20(int32_t value)
	{
		___easeType_20 = value;
	}

	inline static int32_t get_offset_of_customEase_21() { return static_cast<int32_t>(offsetof(TweenParams_t3677015675, ___customEase_21)); }
	inline EaseFunction_t48414120 * get_customEase_21() const { return ___customEase_21; }
	inline EaseFunction_t48414120 ** get_address_of_customEase_21() { return &___customEase_21; }
	inline void set_customEase_21(EaseFunction_t48414120 * value)
	{
		___customEase_21 = value;
		Il2CppCodeGenWriteBarrier(&___customEase_21, value);
	}

	inline static int32_t get_offset_of_easeOvershootOrAmplitude_22() { return static_cast<int32_t>(offsetof(TweenParams_t3677015675, ___easeOvershootOrAmplitude_22)); }
	inline float get_easeOvershootOrAmplitude_22() const { return ___easeOvershootOrAmplitude_22; }
	inline float* get_address_of_easeOvershootOrAmplitude_22() { return &___easeOvershootOrAmplitude_22; }
	inline void set_easeOvershootOrAmplitude_22(float value)
	{
		___easeOvershootOrAmplitude_22 = value;
	}

	inline static int32_t get_offset_of_easePeriod_23() { return static_cast<int32_t>(offsetof(TweenParams_t3677015675, ___easePeriod_23)); }
	inline float get_easePeriod_23() const { return ___easePeriod_23; }
	inline float* get_address_of_easePeriod_23() { return &___easePeriod_23; }
	inline void set_easePeriod_23(float value)
	{
		___easePeriod_23 = value;
	}
};

struct TweenParams_t3677015675_StaticFields
{
public:
	// DG.Tweening.TweenParams DG.Tweening.TweenParams::Params
	TweenParams_t3677015675 * ___Params_0;

public:
	inline static int32_t get_offset_of_Params_0() { return static_cast<int32_t>(offsetof(TweenParams_t3677015675_StaticFields, ___Params_0)); }
	inline TweenParams_t3677015675 * get_Params_0() const { return ___Params_0; }
	inline TweenParams_t3677015675 ** get_address_of_Params_0() { return &___Params_0; }
	inline void set_Params_0(TweenParams_t3677015675 * value)
	{
		___Params_0 = value;
		Il2CppCodeGenWriteBarrier(&___Params_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
