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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CRT
struct  CRT_t67013  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Shader CRT::curShader
	Shader_t3191267369 * ___curShader_2;
	// System.Single CRT::Distortion
	float ___Distortion_3;
	// System.Single CRT::InputGamma
	float ___InputGamma_4;
	// System.Single CRT::OutputGamma
	float ___OutputGamma_5;
	// System.Single CRT::TextureSize
	float ___TextureSize_6;
	// UnityEngine.Material CRT::curMaterial
	Material_t3870600107 * ___curMaterial_7;

public:
	inline static int32_t get_offset_of_curShader_2() { return static_cast<int32_t>(offsetof(CRT_t67013, ___curShader_2)); }
	inline Shader_t3191267369 * get_curShader_2() const { return ___curShader_2; }
	inline Shader_t3191267369 ** get_address_of_curShader_2() { return &___curShader_2; }
	inline void set_curShader_2(Shader_t3191267369 * value)
	{
		___curShader_2 = value;
		Il2CppCodeGenWriteBarrier(&___curShader_2, value);
	}

	inline static int32_t get_offset_of_Distortion_3() { return static_cast<int32_t>(offsetof(CRT_t67013, ___Distortion_3)); }
	inline float get_Distortion_3() const { return ___Distortion_3; }
	inline float* get_address_of_Distortion_3() { return &___Distortion_3; }
	inline void set_Distortion_3(float value)
	{
		___Distortion_3 = value;
	}

	inline static int32_t get_offset_of_InputGamma_4() { return static_cast<int32_t>(offsetof(CRT_t67013, ___InputGamma_4)); }
	inline float get_InputGamma_4() const { return ___InputGamma_4; }
	inline float* get_address_of_InputGamma_4() { return &___InputGamma_4; }
	inline void set_InputGamma_4(float value)
	{
		___InputGamma_4 = value;
	}

	inline static int32_t get_offset_of_OutputGamma_5() { return static_cast<int32_t>(offsetof(CRT_t67013, ___OutputGamma_5)); }
	inline float get_OutputGamma_5() const { return ___OutputGamma_5; }
	inline float* get_address_of_OutputGamma_5() { return &___OutputGamma_5; }
	inline void set_OutputGamma_5(float value)
	{
		___OutputGamma_5 = value;
	}

	inline static int32_t get_offset_of_TextureSize_6() { return static_cast<int32_t>(offsetof(CRT_t67013, ___TextureSize_6)); }
	inline float get_TextureSize_6() const { return ___TextureSize_6; }
	inline float* get_address_of_TextureSize_6() { return &___TextureSize_6; }
	inline void set_TextureSize_6(float value)
	{
		___TextureSize_6 = value;
	}

	inline static int32_t get_offset_of_curMaterial_7() { return static_cast<int32_t>(offsetof(CRT_t67013, ___curMaterial_7)); }
	inline Material_t3870600107 * get_curMaterial_7() const { return ___curMaterial_7; }
	inline Material_t3870600107 ** get_address_of_curMaterial_7() { return &___curMaterial_7; }
	inline void set_curMaterial_7(Material_t3870600107 * value)
	{
		___curMaterial_7 = value;
		Il2CppCodeGenWriteBarrier(&___curMaterial_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
