#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationCurve
struct AnimationCurve_t3667593487;
// UnityEngine.Transform
struct Transform_t1659122786;
// LTBezierPath
struct LTBezierPath_t2218404684;
// LTSpline
struct LTSpline_t3328440185;
// LTRect
struct LTRect_t2255934348;
// System.Action`1<System.Single>
struct Action_1_t392767812;
// System.Action`2<System.Single,System.Single>
struct Action_2_t1327107275;
// System.Action`2<System.Single,System.Object>
struct Action_2_t1206004674;
// System.Action`1<UnityEngine.Vector2>
struct Action_1_t382915405;
// System.Action`1<UnityEngine.Vector3>
struct Action_1_t382915406;
// System.Action`2<UnityEngine.Vector3,System.Object>
struct Action_2_t3399808592;
// System.Action`1<UnityEngine.Color>
struct Action_1_t295395745;
// System.Action`2<UnityEngine.Color,System.Object>
struct Action_2_t1330986321;
// System.Action
struct Action_t3771233898;
// System.Action`1<System.Object>
struct Action_1_t271665211;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LTDescrOptional
struct  LTDescrOptional_t2391725529  : public Il2CppObject
{
public:
	// UnityEngine.AnimationCurve LTDescrOptional::animationCurve
	AnimationCurve_t3667593487 * ___animationCurve_0;
	// UnityEngine.Transform LTDescrOptional::<toTrans>k__BackingField
	Transform_t1659122786 * ___U3CtoTransU3Ek__BackingField_1;
	// UnityEngine.Vector3 LTDescrOptional::<point>k__BackingField
	Vector3_t4282066566  ___U3CpointU3Ek__BackingField_2;
	// UnityEngine.Vector3 LTDescrOptional::<axis>k__BackingField
	Vector3_t4282066566  ___U3CaxisU3Ek__BackingField_3;
	// System.Single LTDescrOptional::<lastVal>k__BackingField
	float ___U3ClastValU3Ek__BackingField_4;
	// UnityEngine.Quaternion LTDescrOptional::<origRotation>k__BackingField
	Quaternion_t1553702882  ___U3CorigRotationU3Ek__BackingField_5;
	// LTBezierPath LTDescrOptional::<path>k__BackingField
	LTBezierPath_t2218404684 * ___U3CpathU3Ek__BackingField_6;
	// LTSpline LTDescrOptional::<spline>k__BackingField
	LTSpline_t3328440185 * ___U3CsplineU3Ek__BackingField_7;
	// LTRect LTDescrOptional::<ltRect>k__BackingField
	LTRect_t2255934348 * ___U3CltRectU3Ek__BackingField_8;
	// System.Action`1<System.Single> LTDescrOptional::<onUpdateFloat>k__BackingField
	Action_1_t392767812 * ___U3ConUpdateFloatU3Ek__BackingField_9;
	// System.Action`2<System.Single,System.Single> LTDescrOptional::<onUpdateFloatRatio>k__BackingField
	Action_2_t1327107275 * ___U3ConUpdateFloatRatioU3Ek__BackingField_10;
	// System.Action`2<System.Single,System.Object> LTDescrOptional::<onUpdateFloatObject>k__BackingField
	Action_2_t1206004674 * ___U3ConUpdateFloatObjectU3Ek__BackingField_11;
	// System.Action`1<UnityEngine.Vector2> LTDescrOptional::<onUpdateVector2>k__BackingField
	Action_1_t382915405 * ___U3ConUpdateVector2U3Ek__BackingField_12;
	// System.Action`1<UnityEngine.Vector3> LTDescrOptional::<onUpdateVector3>k__BackingField
	Action_1_t382915406 * ___U3ConUpdateVector3U3Ek__BackingField_13;
	// System.Action`2<UnityEngine.Vector3,System.Object> LTDescrOptional::<onUpdateVector3Object>k__BackingField
	Action_2_t3399808592 * ___U3ConUpdateVector3ObjectU3Ek__BackingField_14;
	// System.Action`1<UnityEngine.Color> LTDescrOptional::<onUpdateColor>k__BackingField
	Action_1_t295395745 * ___U3ConUpdateColorU3Ek__BackingField_15;
	// System.Action`2<UnityEngine.Color,System.Object> LTDescrOptional::<onUpdateColorObject>k__BackingField
	Action_2_t1330986321 * ___U3ConUpdateColorObjectU3Ek__BackingField_16;
	// System.Action LTDescrOptional::<onComplete>k__BackingField
	Action_t3771233898 * ___U3ConCompleteU3Ek__BackingField_17;
	// System.Action`1<System.Object> LTDescrOptional::<onCompleteObject>k__BackingField
	Action_1_t271665211 * ___U3ConCompleteObjectU3Ek__BackingField_18;
	// System.Object LTDescrOptional::<onCompleteParam>k__BackingField
	Il2CppObject * ___U3ConCompleteParamU3Ek__BackingField_19;
	// System.Object LTDescrOptional::<onUpdateParam>k__BackingField
	Il2CppObject * ___U3ConUpdateParamU3Ek__BackingField_20;
	// System.Action LTDescrOptional::<onStart>k__BackingField
	Action_t3771233898 * ___U3ConStartU3Ek__BackingField_21;

public:
	inline static int32_t get_offset_of_animationCurve_0() { return static_cast<int32_t>(offsetof(LTDescrOptional_t2391725529, ___animationCurve_0)); }
	inline AnimationCurve_t3667593487 * get_animationCurve_0() const { return ___animationCurve_0; }
	inline AnimationCurve_t3667593487 ** get_address_of_animationCurve_0() { return &___animationCurve_0; }
	inline void set_animationCurve_0(AnimationCurve_t3667593487 * value)
	{
		___animationCurve_0 = value;
		Il2CppCodeGenWriteBarrier(&___animationCurve_0, value);
	}

	inline static int32_t get_offset_of_U3CtoTransU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LTDescrOptional_t2391725529, ___U3CtoTransU3Ek__BackingField_1)); }
	inline Transform_t1659122786 * get_U3CtoTransU3Ek__BackingField_1() const { return ___U3CtoTransU3Ek__BackingField_1; }
	inline Transform_t1659122786 ** get_address_of_U3CtoTransU3Ek__BackingField_1() { return &___U3CtoTransU3Ek__BackingField_1; }
	inline void set_U3CtoTransU3Ek__BackingField_1(Transform_t1659122786 * value)
	{
		___U3CtoTransU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CtoTransU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CpointU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(LTDescrOptional_t2391725529, ___U3CpointU3Ek__BackingField_2)); }
	inline Vector3_t4282066566  get_U3CpointU3Ek__BackingField_2() const { return ___U3CpointU3Ek__BackingField_2; }
	inline Vector3_t4282066566 * get_address_of_U3CpointU3Ek__BackingField_2() { return &___U3CpointU3Ek__BackingField_2; }
	inline void set_U3CpointU3Ek__BackingField_2(Vector3_t4282066566  value)
	{
		___U3CpointU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CaxisU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(LTDescrOptional_t2391725529, ___U3CaxisU3Ek__BackingField_3)); }
	inline Vector3_t4282066566  get_U3CaxisU3Ek__BackingField_3() const { return ___U3CaxisU3Ek__BackingField_3; }
	inline Vector3_t4282066566 * get_address_of_U3CaxisU3Ek__BackingField_3() { return &___U3CaxisU3Ek__BackingField_3; }
	inline void set_U3CaxisU3Ek__BackingField_3(Vector3_t4282066566  value)
	{
		___U3CaxisU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3ClastValU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(LTDescrOptional_t2391725529, ___U3ClastValU3Ek__BackingField_4)); }
	inline float get_U3ClastValU3Ek__BackingField_4() const { return ___U3ClastValU3Ek__BackingField_4; }
	inline float* get_address_of_U3ClastValU3Ek__BackingField_4() { return &___U3ClastValU3Ek__BackingField_4; }
	inline void set_U3ClastValU3Ek__BackingField_4(float value)
	{
		___U3ClastValU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CorigRotationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(LTDescrOptional_t2391725529, ___U3CorigRotationU3Ek__BackingField_5)); }
	inline Quaternion_t1553702882  get_U3CorigRotationU3Ek__BackingField_5() const { return ___U3CorigRotationU3Ek__BackingField_5; }
	inline Quaternion_t1553702882 * get_address_of_U3CorigRotationU3Ek__BackingField_5() { return &___U3CorigRotationU3Ek__BackingField_5; }
	inline void set_U3CorigRotationU3Ek__BackingField_5(Quaternion_t1553702882  value)
	{
		___U3CorigRotationU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CpathU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(LTDescrOptional_t2391725529, ___U3CpathU3Ek__BackingField_6)); }
	inline LTBezierPath_t2218404684 * get_U3CpathU3Ek__BackingField_6() const { return ___U3CpathU3Ek__BackingField_6; }
	inline LTBezierPath_t2218404684 ** get_address_of_U3CpathU3Ek__BackingField_6() { return &___U3CpathU3Ek__BackingField_6; }
	inline void set_U3CpathU3Ek__BackingField_6(LTBezierPath_t2218404684 * value)
	{
		___U3CpathU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CpathU3Ek__BackingField_6, value);
	}

	inline static int32_t get_offset_of_U3CsplineU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(LTDescrOptional_t2391725529, ___U3CsplineU3Ek__BackingField_7)); }
	inline LTSpline_t3328440185 * get_U3CsplineU3Ek__BackingField_7() const { return ___U3CsplineU3Ek__BackingField_7; }
	inline LTSpline_t3328440185 ** get_address_of_U3CsplineU3Ek__BackingField_7() { return &___U3CsplineU3Ek__BackingField_7; }
	inline void set_U3CsplineU3Ek__BackingField_7(LTSpline_t3328440185 * value)
	{
		___U3CsplineU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CsplineU3Ek__BackingField_7, value);
	}

	inline static int32_t get_offset_of_U3CltRectU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(LTDescrOptional_t2391725529, ___U3CltRectU3Ek__BackingField_8)); }
	inline LTRect_t2255934348 * get_U3CltRectU3Ek__BackingField_8() const { return ___U3CltRectU3Ek__BackingField_8; }
	inline LTRect_t2255934348 ** get_address_of_U3CltRectU3Ek__BackingField_8() { return &___U3CltRectU3Ek__BackingField_8; }
	inline void set_U3CltRectU3Ek__BackingField_8(LTRect_t2255934348 * value)
	{
		___U3CltRectU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CltRectU3Ek__BackingField_8, value);
	}

	inline static int32_t get_offset_of_U3ConUpdateFloatU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(LTDescrOptional_t2391725529, ___U3ConUpdateFloatU3Ek__BackingField_9)); }
	inline Action_1_t392767812 * get_U3ConUpdateFloatU3Ek__BackingField_9() const { return ___U3ConUpdateFloatU3Ek__BackingField_9; }
	inline Action_1_t392767812 ** get_address_of_U3ConUpdateFloatU3Ek__BackingField_9() { return &___U3ConUpdateFloatU3Ek__BackingField_9; }
	inline void set_U3ConUpdateFloatU3Ek__BackingField_9(Action_1_t392767812 * value)
	{
		___U3ConUpdateFloatU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConUpdateFloatU3Ek__BackingField_9, value);
	}

	inline static int32_t get_offset_of_U3ConUpdateFloatRatioU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(LTDescrOptional_t2391725529, ___U3ConUpdateFloatRatioU3Ek__BackingField_10)); }
	inline Action_2_t1327107275 * get_U3ConUpdateFloatRatioU3Ek__BackingField_10() const { return ___U3ConUpdateFloatRatioU3Ek__BackingField_10; }
	inline Action_2_t1327107275 ** get_address_of_U3ConUpdateFloatRatioU3Ek__BackingField_10() { return &___U3ConUpdateFloatRatioU3Ek__BackingField_10; }
	inline void set_U3ConUpdateFloatRatioU3Ek__BackingField_10(Action_2_t1327107275 * value)
	{
		___U3ConUpdateFloatRatioU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConUpdateFloatRatioU3Ek__BackingField_10, value);
	}

	inline static int32_t get_offset_of_U3ConUpdateFloatObjectU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(LTDescrOptional_t2391725529, ___U3ConUpdateFloatObjectU3Ek__BackingField_11)); }
	inline Action_2_t1206004674 * get_U3ConUpdateFloatObjectU3Ek__BackingField_11() const { return ___U3ConUpdateFloatObjectU3Ek__BackingField_11; }
	inline Action_2_t1206004674 ** get_address_of_U3ConUpdateFloatObjectU3Ek__BackingField_11() { return &___U3ConUpdateFloatObjectU3Ek__BackingField_11; }
	inline void set_U3ConUpdateFloatObjectU3Ek__BackingField_11(Action_2_t1206004674 * value)
	{
		___U3ConUpdateFloatObjectU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConUpdateFloatObjectU3Ek__BackingField_11, value);
	}

	inline static int32_t get_offset_of_U3ConUpdateVector2U3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(LTDescrOptional_t2391725529, ___U3ConUpdateVector2U3Ek__BackingField_12)); }
	inline Action_1_t382915405 * get_U3ConUpdateVector2U3Ek__BackingField_12() const { return ___U3ConUpdateVector2U3Ek__BackingField_12; }
	inline Action_1_t382915405 ** get_address_of_U3ConUpdateVector2U3Ek__BackingField_12() { return &___U3ConUpdateVector2U3Ek__BackingField_12; }
	inline void set_U3ConUpdateVector2U3Ek__BackingField_12(Action_1_t382915405 * value)
	{
		___U3ConUpdateVector2U3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConUpdateVector2U3Ek__BackingField_12, value);
	}

	inline static int32_t get_offset_of_U3ConUpdateVector3U3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(LTDescrOptional_t2391725529, ___U3ConUpdateVector3U3Ek__BackingField_13)); }
	inline Action_1_t382915406 * get_U3ConUpdateVector3U3Ek__BackingField_13() const { return ___U3ConUpdateVector3U3Ek__BackingField_13; }
	inline Action_1_t382915406 ** get_address_of_U3ConUpdateVector3U3Ek__BackingField_13() { return &___U3ConUpdateVector3U3Ek__BackingField_13; }
	inline void set_U3ConUpdateVector3U3Ek__BackingField_13(Action_1_t382915406 * value)
	{
		___U3ConUpdateVector3U3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConUpdateVector3U3Ek__BackingField_13, value);
	}

	inline static int32_t get_offset_of_U3ConUpdateVector3ObjectU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(LTDescrOptional_t2391725529, ___U3ConUpdateVector3ObjectU3Ek__BackingField_14)); }
	inline Action_2_t3399808592 * get_U3ConUpdateVector3ObjectU3Ek__BackingField_14() const { return ___U3ConUpdateVector3ObjectU3Ek__BackingField_14; }
	inline Action_2_t3399808592 ** get_address_of_U3ConUpdateVector3ObjectU3Ek__BackingField_14() { return &___U3ConUpdateVector3ObjectU3Ek__BackingField_14; }
	inline void set_U3ConUpdateVector3ObjectU3Ek__BackingField_14(Action_2_t3399808592 * value)
	{
		___U3ConUpdateVector3ObjectU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConUpdateVector3ObjectU3Ek__BackingField_14, value);
	}

	inline static int32_t get_offset_of_U3ConUpdateColorU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(LTDescrOptional_t2391725529, ___U3ConUpdateColorU3Ek__BackingField_15)); }
	inline Action_1_t295395745 * get_U3ConUpdateColorU3Ek__BackingField_15() const { return ___U3ConUpdateColorU3Ek__BackingField_15; }
	inline Action_1_t295395745 ** get_address_of_U3ConUpdateColorU3Ek__BackingField_15() { return &___U3ConUpdateColorU3Ek__BackingField_15; }
	inline void set_U3ConUpdateColorU3Ek__BackingField_15(Action_1_t295395745 * value)
	{
		___U3ConUpdateColorU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConUpdateColorU3Ek__BackingField_15, value);
	}

	inline static int32_t get_offset_of_U3ConUpdateColorObjectU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(LTDescrOptional_t2391725529, ___U3ConUpdateColorObjectU3Ek__BackingField_16)); }
	inline Action_2_t1330986321 * get_U3ConUpdateColorObjectU3Ek__BackingField_16() const { return ___U3ConUpdateColorObjectU3Ek__BackingField_16; }
	inline Action_2_t1330986321 ** get_address_of_U3ConUpdateColorObjectU3Ek__BackingField_16() { return &___U3ConUpdateColorObjectU3Ek__BackingField_16; }
	inline void set_U3ConUpdateColorObjectU3Ek__BackingField_16(Action_2_t1330986321 * value)
	{
		___U3ConUpdateColorObjectU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConUpdateColorObjectU3Ek__BackingField_16, value);
	}

	inline static int32_t get_offset_of_U3ConCompleteU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(LTDescrOptional_t2391725529, ___U3ConCompleteU3Ek__BackingField_17)); }
	inline Action_t3771233898 * get_U3ConCompleteU3Ek__BackingField_17() const { return ___U3ConCompleteU3Ek__BackingField_17; }
	inline Action_t3771233898 ** get_address_of_U3ConCompleteU3Ek__BackingField_17() { return &___U3ConCompleteU3Ek__BackingField_17; }
	inline void set_U3ConCompleteU3Ek__BackingField_17(Action_t3771233898 * value)
	{
		___U3ConCompleteU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConCompleteU3Ek__BackingField_17, value);
	}

	inline static int32_t get_offset_of_U3ConCompleteObjectU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(LTDescrOptional_t2391725529, ___U3ConCompleteObjectU3Ek__BackingField_18)); }
	inline Action_1_t271665211 * get_U3ConCompleteObjectU3Ek__BackingField_18() const { return ___U3ConCompleteObjectU3Ek__BackingField_18; }
	inline Action_1_t271665211 ** get_address_of_U3ConCompleteObjectU3Ek__BackingField_18() { return &___U3ConCompleteObjectU3Ek__BackingField_18; }
	inline void set_U3ConCompleteObjectU3Ek__BackingField_18(Action_1_t271665211 * value)
	{
		___U3ConCompleteObjectU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConCompleteObjectU3Ek__BackingField_18, value);
	}

	inline static int32_t get_offset_of_U3ConCompleteParamU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(LTDescrOptional_t2391725529, ___U3ConCompleteParamU3Ek__BackingField_19)); }
	inline Il2CppObject * get_U3ConCompleteParamU3Ek__BackingField_19() const { return ___U3ConCompleteParamU3Ek__BackingField_19; }
	inline Il2CppObject ** get_address_of_U3ConCompleteParamU3Ek__BackingField_19() { return &___U3ConCompleteParamU3Ek__BackingField_19; }
	inline void set_U3ConCompleteParamU3Ek__BackingField_19(Il2CppObject * value)
	{
		___U3ConCompleteParamU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConCompleteParamU3Ek__BackingField_19, value);
	}

	inline static int32_t get_offset_of_U3ConUpdateParamU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(LTDescrOptional_t2391725529, ___U3ConUpdateParamU3Ek__BackingField_20)); }
	inline Il2CppObject * get_U3ConUpdateParamU3Ek__BackingField_20() const { return ___U3ConUpdateParamU3Ek__BackingField_20; }
	inline Il2CppObject ** get_address_of_U3ConUpdateParamU3Ek__BackingField_20() { return &___U3ConUpdateParamU3Ek__BackingField_20; }
	inline void set_U3ConUpdateParamU3Ek__BackingField_20(Il2CppObject * value)
	{
		___U3ConUpdateParamU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConUpdateParamU3Ek__BackingField_20, value);
	}

	inline static int32_t get_offset_of_U3ConStartU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(LTDescrOptional_t2391725529, ___U3ConStartU3Ek__BackingField_21)); }
	inline Action_t3771233898 * get_U3ConStartU3Ek__BackingField_21() const { return ___U3ConStartU3Ek__BackingField_21; }
	inline Action_t3771233898 ** get_address_of_U3ConStartU3Ek__BackingField_21() { return &___U3ConStartU3Ek__BackingField_21; }
	inline void set_U3ConStartU3Ek__BackingField_21(Action_t3771233898 * value)
	{
		___U3ConStartU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConStartU3Ek__BackingField_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
