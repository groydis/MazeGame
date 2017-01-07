#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Shader
struct Shader_t3191267369;
// UnityEngine.Material
struct Material_t3870600107;

#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_1415309093.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MorePPEffects.DuoTone
struct  DuoTone_t2378348718  : public PostEffectsBase_t1415309093
{
public:
	// UnityEngine.Color MorePPEffects.DuoTone::color1
	Color_t4194546905  ___color1_6;
	// UnityEngine.Color MorePPEffects.DuoTone::color2
	Color_t4194546905  ___color2_7;
	// System.Single MorePPEffects.DuoTone::minLimit
	float ___minLimit_8;
	// System.Single MorePPEffects.DuoTone::maxLimit
	float ___maxLimit_9;
	// UnityEngine.Shader MorePPEffects.DuoTone::duoToneShader
	Shader_t3191267369 * ___duoToneShader_10;
	// UnityEngine.Material MorePPEffects.DuoTone::duoToneMaterial
	Material_t3870600107 * ___duoToneMaterial_11;

public:
	inline static int32_t get_offset_of_color1_6() { return static_cast<int32_t>(offsetof(DuoTone_t2378348718, ___color1_6)); }
	inline Color_t4194546905  get_color1_6() const { return ___color1_6; }
	inline Color_t4194546905 * get_address_of_color1_6() { return &___color1_6; }
	inline void set_color1_6(Color_t4194546905  value)
	{
		___color1_6 = value;
	}

	inline static int32_t get_offset_of_color2_7() { return static_cast<int32_t>(offsetof(DuoTone_t2378348718, ___color2_7)); }
	inline Color_t4194546905  get_color2_7() const { return ___color2_7; }
	inline Color_t4194546905 * get_address_of_color2_7() { return &___color2_7; }
	inline void set_color2_7(Color_t4194546905  value)
	{
		___color2_7 = value;
	}

	inline static int32_t get_offset_of_minLimit_8() { return static_cast<int32_t>(offsetof(DuoTone_t2378348718, ___minLimit_8)); }
	inline float get_minLimit_8() const { return ___minLimit_8; }
	inline float* get_address_of_minLimit_8() { return &___minLimit_8; }
	inline void set_minLimit_8(float value)
	{
		___minLimit_8 = value;
	}

	inline static int32_t get_offset_of_maxLimit_9() { return static_cast<int32_t>(offsetof(DuoTone_t2378348718, ___maxLimit_9)); }
	inline float get_maxLimit_9() const { return ___maxLimit_9; }
	inline float* get_address_of_maxLimit_9() { return &___maxLimit_9; }
	inline void set_maxLimit_9(float value)
	{
		___maxLimit_9 = value;
	}

	inline static int32_t get_offset_of_duoToneShader_10() { return static_cast<int32_t>(offsetof(DuoTone_t2378348718, ___duoToneShader_10)); }
	inline Shader_t3191267369 * get_duoToneShader_10() const { return ___duoToneShader_10; }
	inline Shader_t3191267369 ** get_address_of_duoToneShader_10() { return &___duoToneShader_10; }
	inline void set_duoToneShader_10(Shader_t3191267369 * value)
	{
		___duoToneShader_10 = value;
		Il2CppCodeGenWriteBarrier(&___duoToneShader_10, value);
	}

	inline static int32_t get_offset_of_duoToneMaterial_11() { return static_cast<int32_t>(offsetof(DuoTone_t2378348718, ___duoToneMaterial_11)); }
	inline Material_t3870600107 * get_duoToneMaterial_11() const { return ___duoToneMaterial_11; }
	inline Material_t3870600107 ** get_address_of_duoToneMaterial_11() { return &___duoToneMaterial_11; }
	inline void set_duoToneMaterial_11(Material_t3870600107 * value)
	{
		___duoToneMaterial_11 = value;
		Il2CppCodeGenWriteBarrier(&___duoToneMaterial_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
