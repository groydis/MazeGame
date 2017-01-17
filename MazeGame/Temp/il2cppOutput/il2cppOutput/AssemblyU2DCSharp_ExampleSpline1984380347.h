#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform[]
struct TransformU5BU5D_t3792884695;
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

// ExampleSpline
struct  ExampleSpline_t1984380347  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform[] ExampleSpline::trans
	TransformU5BU5D_t3792884695* ___trans_2;
	// LTSpline ExampleSpline::spline
	LTSpline_t3328440185 * ___spline_3;
	// UnityEngine.GameObject ExampleSpline::ltLogo
	GameObject_t3674682005 * ___ltLogo_4;
	// UnityEngine.GameObject ExampleSpline::ltLogo2
	GameObject_t3674682005 * ___ltLogo2_5;
	// System.Single ExampleSpline::iter
	float ___iter_6;

public:
	inline static int32_t get_offset_of_trans_2() { return static_cast<int32_t>(offsetof(ExampleSpline_t1984380347, ___trans_2)); }
	inline TransformU5BU5D_t3792884695* get_trans_2() const { return ___trans_2; }
	inline TransformU5BU5D_t3792884695** get_address_of_trans_2() { return &___trans_2; }
	inline void set_trans_2(TransformU5BU5D_t3792884695* value)
	{
		___trans_2 = value;
		Il2CppCodeGenWriteBarrier(&___trans_2, value);
	}

	inline static int32_t get_offset_of_spline_3() { return static_cast<int32_t>(offsetof(ExampleSpline_t1984380347, ___spline_3)); }
	inline LTSpline_t3328440185 * get_spline_3() const { return ___spline_3; }
	inline LTSpline_t3328440185 ** get_address_of_spline_3() { return &___spline_3; }
	inline void set_spline_3(LTSpline_t3328440185 * value)
	{
		___spline_3 = value;
		Il2CppCodeGenWriteBarrier(&___spline_3, value);
	}

	inline static int32_t get_offset_of_ltLogo_4() { return static_cast<int32_t>(offsetof(ExampleSpline_t1984380347, ___ltLogo_4)); }
	inline GameObject_t3674682005 * get_ltLogo_4() const { return ___ltLogo_4; }
	inline GameObject_t3674682005 ** get_address_of_ltLogo_4() { return &___ltLogo_4; }
	inline void set_ltLogo_4(GameObject_t3674682005 * value)
	{
		___ltLogo_4 = value;
		Il2CppCodeGenWriteBarrier(&___ltLogo_4, value);
	}

	inline static int32_t get_offset_of_ltLogo2_5() { return static_cast<int32_t>(offsetof(ExampleSpline_t1984380347, ___ltLogo2_5)); }
	inline GameObject_t3674682005 * get_ltLogo2_5() const { return ___ltLogo2_5; }
	inline GameObject_t3674682005 ** get_address_of_ltLogo2_5() { return &___ltLogo2_5; }
	inline void set_ltLogo2_5(GameObject_t3674682005 * value)
	{
		___ltLogo2_5 = value;
		Il2CppCodeGenWriteBarrier(&___ltLogo2_5, value);
	}

	inline static int32_t get_offset_of_iter_6() { return static_cast<int32_t>(offsetof(ExampleSpline_t1984380347, ___iter_6)); }
	inline float get_iter_6() const { return ___iter_6; }
	inline float* get_address_of_iter_6() { return &___iter_6; }
	inline void set_iter_6(float value)
	{
		___iter_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
