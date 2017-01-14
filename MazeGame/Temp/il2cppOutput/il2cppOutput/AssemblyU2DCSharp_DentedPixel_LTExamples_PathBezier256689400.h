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
// LTBezierPath
struct LTBezierPath_t2218404684;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DentedPixel.LTExamples.PathBezier
struct  PathBezier_t256689400  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform[] DentedPixel.LTExamples.PathBezier::trans
	TransformU5BU5D_t3792884695* ___trans_2;
	// LTBezierPath DentedPixel.LTExamples.PathBezier::cr
	LTBezierPath_t2218404684 * ___cr_3;
	// UnityEngine.GameObject DentedPixel.LTExamples.PathBezier::avatar1
	GameObject_t3674682005 * ___avatar1_4;
	// System.Single DentedPixel.LTExamples.PathBezier::iter
	float ___iter_5;

public:
	inline static int32_t get_offset_of_trans_2() { return static_cast<int32_t>(offsetof(PathBezier_t256689400, ___trans_2)); }
	inline TransformU5BU5D_t3792884695* get_trans_2() const { return ___trans_2; }
	inline TransformU5BU5D_t3792884695** get_address_of_trans_2() { return &___trans_2; }
	inline void set_trans_2(TransformU5BU5D_t3792884695* value)
	{
		___trans_2 = value;
		Il2CppCodeGenWriteBarrier(&___trans_2, value);
	}

	inline static int32_t get_offset_of_cr_3() { return static_cast<int32_t>(offsetof(PathBezier_t256689400, ___cr_3)); }
	inline LTBezierPath_t2218404684 * get_cr_3() const { return ___cr_3; }
	inline LTBezierPath_t2218404684 ** get_address_of_cr_3() { return &___cr_3; }
	inline void set_cr_3(LTBezierPath_t2218404684 * value)
	{
		___cr_3 = value;
		Il2CppCodeGenWriteBarrier(&___cr_3, value);
	}

	inline static int32_t get_offset_of_avatar1_4() { return static_cast<int32_t>(offsetof(PathBezier_t256689400, ___avatar1_4)); }
	inline GameObject_t3674682005 * get_avatar1_4() const { return ___avatar1_4; }
	inline GameObject_t3674682005 ** get_address_of_avatar1_4() { return &___avatar1_4; }
	inline void set_avatar1_4(GameObject_t3674682005 * value)
	{
		___avatar1_4 = value;
		Il2CppCodeGenWriteBarrier(&___avatar1_4, value);
	}

	inline static int32_t get_offset_of_iter_5() { return static_cast<int32_t>(offsetof(PathBezier_t256689400, ___iter_5)); }
	inline float get_iter_5() const { return ___iter_5; }
	inline float* get_address_of_iter_5() { return &___iter_5; }
	inline void set_iter_5(float value)
	{
		___iter_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
