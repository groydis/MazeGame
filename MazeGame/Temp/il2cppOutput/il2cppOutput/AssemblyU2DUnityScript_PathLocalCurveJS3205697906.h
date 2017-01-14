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
// LTSpline
struct LTSpline_t3328440185;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PathLocalCurveJS
struct  PathLocalCurveJS_t3205697906  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.AnimationCurve PathLocalCurveJS::customAnimationCurve
	AnimationCurve_t3667593487 * ___customAnimationCurve_2;
	// UnityEngine.Transform PathLocalCurveJS::pt1
	Transform_t1659122786 * ___pt1_3;
	// UnityEngine.Transform PathLocalCurveJS::pt2
	Transform_t1659122786 * ___pt2_4;
	// UnityEngine.Transform PathLocalCurveJS::pt3
	Transform_t1659122786 * ___pt3_5;
	// UnityEngine.Transform PathLocalCurveJS::pt4
	Transform_t1659122786 * ___pt4_6;
	// UnityEngine.Transform PathLocalCurveJS::containingSphere
	Transform_t1659122786 * ___containingSphere_7;
	// LTSpline PathLocalCurveJS::spline
	LTSpline_t3328440185 * ___spline_8;
	// UnityEngine.GameObject PathLocalCurveJS::ltLogo
	GameObject_t3674682005 * ___ltLogo_9;

public:
	inline static int32_t get_offset_of_customAnimationCurve_2() { return static_cast<int32_t>(offsetof(PathLocalCurveJS_t3205697906, ___customAnimationCurve_2)); }
	inline AnimationCurve_t3667593487 * get_customAnimationCurve_2() const { return ___customAnimationCurve_2; }
	inline AnimationCurve_t3667593487 ** get_address_of_customAnimationCurve_2() { return &___customAnimationCurve_2; }
	inline void set_customAnimationCurve_2(AnimationCurve_t3667593487 * value)
	{
		___customAnimationCurve_2 = value;
		Il2CppCodeGenWriteBarrier(&___customAnimationCurve_2, value);
	}

	inline static int32_t get_offset_of_pt1_3() { return static_cast<int32_t>(offsetof(PathLocalCurveJS_t3205697906, ___pt1_3)); }
	inline Transform_t1659122786 * get_pt1_3() const { return ___pt1_3; }
	inline Transform_t1659122786 ** get_address_of_pt1_3() { return &___pt1_3; }
	inline void set_pt1_3(Transform_t1659122786 * value)
	{
		___pt1_3 = value;
		Il2CppCodeGenWriteBarrier(&___pt1_3, value);
	}

	inline static int32_t get_offset_of_pt2_4() { return static_cast<int32_t>(offsetof(PathLocalCurveJS_t3205697906, ___pt2_4)); }
	inline Transform_t1659122786 * get_pt2_4() const { return ___pt2_4; }
	inline Transform_t1659122786 ** get_address_of_pt2_4() { return &___pt2_4; }
	inline void set_pt2_4(Transform_t1659122786 * value)
	{
		___pt2_4 = value;
		Il2CppCodeGenWriteBarrier(&___pt2_4, value);
	}

	inline static int32_t get_offset_of_pt3_5() { return static_cast<int32_t>(offsetof(PathLocalCurveJS_t3205697906, ___pt3_5)); }
	inline Transform_t1659122786 * get_pt3_5() const { return ___pt3_5; }
	inline Transform_t1659122786 ** get_address_of_pt3_5() { return &___pt3_5; }
	inline void set_pt3_5(Transform_t1659122786 * value)
	{
		___pt3_5 = value;
		Il2CppCodeGenWriteBarrier(&___pt3_5, value);
	}

	inline static int32_t get_offset_of_pt4_6() { return static_cast<int32_t>(offsetof(PathLocalCurveJS_t3205697906, ___pt4_6)); }
	inline Transform_t1659122786 * get_pt4_6() const { return ___pt4_6; }
	inline Transform_t1659122786 ** get_address_of_pt4_6() { return &___pt4_6; }
	inline void set_pt4_6(Transform_t1659122786 * value)
	{
		___pt4_6 = value;
		Il2CppCodeGenWriteBarrier(&___pt4_6, value);
	}

	inline static int32_t get_offset_of_containingSphere_7() { return static_cast<int32_t>(offsetof(PathLocalCurveJS_t3205697906, ___containingSphere_7)); }
	inline Transform_t1659122786 * get_containingSphere_7() const { return ___containingSphere_7; }
	inline Transform_t1659122786 ** get_address_of_containingSphere_7() { return &___containingSphere_7; }
	inline void set_containingSphere_7(Transform_t1659122786 * value)
	{
		___containingSphere_7 = value;
		Il2CppCodeGenWriteBarrier(&___containingSphere_7, value);
	}

	inline static int32_t get_offset_of_spline_8() { return static_cast<int32_t>(offsetof(PathLocalCurveJS_t3205697906, ___spline_8)); }
	inline LTSpline_t3328440185 * get_spline_8() const { return ___spline_8; }
	inline LTSpline_t3328440185 ** get_address_of_spline_8() { return &___spline_8; }
	inline void set_spline_8(LTSpline_t3328440185 * value)
	{
		___spline_8 = value;
		Il2CppCodeGenWriteBarrier(&___spline_8, value);
	}

	inline static int32_t get_offset_of_ltLogo_9() { return static_cast<int32_t>(offsetof(PathLocalCurveJS_t3205697906, ___ltLogo_9)); }
	inline GameObject_t3674682005 * get_ltLogo_9() const { return ___ltLogo_9; }
	inline GameObject_t3674682005 ** get_address_of_ltLogo_9() { return &___ltLogo_9; }
	inline void set_ltLogo_9(GameObject_t3674682005 * value)
	{
		___ltLogo_9 = value;
		Il2CppCodeGenWriteBarrier(&___ltLogo_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
