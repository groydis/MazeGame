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
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
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

// PathSpline2d
struct  PathSpline2d_t1346487656  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform[] PathSpline2d::trans
	TransformU5BU5D_t3792884695* ___trans_2;
	// UnityEngine.Texture2D PathSpline2d::spriteTexture
	Texture2D_t3884108195 * ___spriteTexture_3;
	// LTSpline PathSpline2d::cr
	LTSpline_t3328440185 * ___cr_4;
	// UnityEngine.GameObject PathSpline2d::sprite1
	GameObject_t3674682005 * ___sprite1_5;
	// UnityEngine.GameObject PathSpline2d::sprite2
	GameObject_t3674682005 * ___sprite2_6;
	// System.Single PathSpline2d::iter
	float ___iter_7;

public:
	inline static int32_t get_offset_of_trans_2() { return static_cast<int32_t>(offsetof(PathSpline2d_t1346487656, ___trans_2)); }
	inline TransformU5BU5D_t3792884695* get_trans_2() const { return ___trans_2; }
	inline TransformU5BU5D_t3792884695** get_address_of_trans_2() { return &___trans_2; }
	inline void set_trans_2(TransformU5BU5D_t3792884695* value)
	{
		___trans_2 = value;
		Il2CppCodeGenWriteBarrier(&___trans_2, value);
	}

	inline static int32_t get_offset_of_spriteTexture_3() { return static_cast<int32_t>(offsetof(PathSpline2d_t1346487656, ___spriteTexture_3)); }
	inline Texture2D_t3884108195 * get_spriteTexture_3() const { return ___spriteTexture_3; }
	inline Texture2D_t3884108195 ** get_address_of_spriteTexture_3() { return &___spriteTexture_3; }
	inline void set_spriteTexture_3(Texture2D_t3884108195 * value)
	{
		___spriteTexture_3 = value;
		Il2CppCodeGenWriteBarrier(&___spriteTexture_3, value);
	}

	inline static int32_t get_offset_of_cr_4() { return static_cast<int32_t>(offsetof(PathSpline2d_t1346487656, ___cr_4)); }
	inline LTSpline_t3328440185 * get_cr_4() const { return ___cr_4; }
	inline LTSpline_t3328440185 ** get_address_of_cr_4() { return &___cr_4; }
	inline void set_cr_4(LTSpline_t3328440185 * value)
	{
		___cr_4 = value;
		Il2CppCodeGenWriteBarrier(&___cr_4, value);
	}

	inline static int32_t get_offset_of_sprite1_5() { return static_cast<int32_t>(offsetof(PathSpline2d_t1346487656, ___sprite1_5)); }
	inline GameObject_t3674682005 * get_sprite1_5() const { return ___sprite1_5; }
	inline GameObject_t3674682005 ** get_address_of_sprite1_5() { return &___sprite1_5; }
	inline void set_sprite1_5(GameObject_t3674682005 * value)
	{
		___sprite1_5 = value;
		Il2CppCodeGenWriteBarrier(&___sprite1_5, value);
	}

	inline static int32_t get_offset_of_sprite2_6() { return static_cast<int32_t>(offsetof(PathSpline2d_t1346487656, ___sprite2_6)); }
	inline GameObject_t3674682005 * get_sprite2_6() const { return ___sprite2_6; }
	inline GameObject_t3674682005 ** get_address_of_sprite2_6() { return &___sprite2_6; }
	inline void set_sprite2_6(GameObject_t3674682005 * value)
	{
		___sprite2_6 = value;
		Il2CppCodeGenWriteBarrier(&___sprite2_6, value);
	}

	inline static int32_t get_offset_of_iter_7() { return static_cast<int32_t>(offsetof(PathSpline2d_t1346487656, ___iter_7)); }
	inline float get_iter_7() const { return ___iter_7; }
	inline float* get_address_of_iter_7() { return &___iter_7; }
	inline void set_iter_7(float value)
	{
		___iter_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
