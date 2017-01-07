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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MorePPEffects.Wiggle
struct  Wiggle_t3166377067  : public PostEffectsBase_t1415309093
{
public:
	// System.Single MorePPEffects.Wiggle::timer
	float ___timer_6;
	// System.Single MorePPEffects.Wiggle::amplitudeX
	float ___amplitudeX_7;
	// System.Single MorePPEffects.Wiggle::amplitudeY
	float ___amplitudeY_8;
	// System.Single MorePPEffects.Wiggle::distortionX
	float ___distortionX_9;
	// System.Single MorePPEffects.Wiggle::distortionY
	float ___distortionY_10;
	// System.Single MorePPEffects.Wiggle::speed
	float ___speed_11;
	// UnityEngine.Shader MorePPEffects.Wiggle::wiggleShader
	Shader_t3191267369 * ___wiggleShader_12;
	// UnityEngine.Material MorePPEffects.Wiggle::wiggleMaterial
	Material_t3870600107 * ___wiggleMaterial_13;

public:
	inline static int32_t get_offset_of_timer_6() { return static_cast<int32_t>(offsetof(Wiggle_t3166377067, ___timer_6)); }
	inline float get_timer_6() const { return ___timer_6; }
	inline float* get_address_of_timer_6() { return &___timer_6; }
	inline void set_timer_6(float value)
	{
		___timer_6 = value;
	}

	inline static int32_t get_offset_of_amplitudeX_7() { return static_cast<int32_t>(offsetof(Wiggle_t3166377067, ___amplitudeX_7)); }
	inline float get_amplitudeX_7() const { return ___amplitudeX_7; }
	inline float* get_address_of_amplitudeX_7() { return &___amplitudeX_7; }
	inline void set_amplitudeX_7(float value)
	{
		___amplitudeX_7 = value;
	}

	inline static int32_t get_offset_of_amplitudeY_8() { return static_cast<int32_t>(offsetof(Wiggle_t3166377067, ___amplitudeY_8)); }
	inline float get_amplitudeY_8() const { return ___amplitudeY_8; }
	inline float* get_address_of_amplitudeY_8() { return &___amplitudeY_8; }
	inline void set_amplitudeY_8(float value)
	{
		___amplitudeY_8 = value;
	}

	inline static int32_t get_offset_of_distortionX_9() { return static_cast<int32_t>(offsetof(Wiggle_t3166377067, ___distortionX_9)); }
	inline float get_distortionX_9() const { return ___distortionX_9; }
	inline float* get_address_of_distortionX_9() { return &___distortionX_9; }
	inline void set_distortionX_9(float value)
	{
		___distortionX_9 = value;
	}

	inline static int32_t get_offset_of_distortionY_10() { return static_cast<int32_t>(offsetof(Wiggle_t3166377067, ___distortionY_10)); }
	inline float get_distortionY_10() const { return ___distortionY_10; }
	inline float* get_address_of_distortionY_10() { return &___distortionY_10; }
	inline void set_distortionY_10(float value)
	{
		___distortionY_10 = value;
	}

	inline static int32_t get_offset_of_speed_11() { return static_cast<int32_t>(offsetof(Wiggle_t3166377067, ___speed_11)); }
	inline float get_speed_11() const { return ___speed_11; }
	inline float* get_address_of_speed_11() { return &___speed_11; }
	inline void set_speed_11(float value)
	{
		___speed_11 = value;
	}

	inline static int32_t get_offset_of_wiggleShader_12() { return static_cast<int32_t>(offsetof(Wiggle_t3166377067, ___wiggleShader_12)); }
	inline Shader_t3191267369 * get_wiggleShader_12() const { return ___wiggleShader_12; }
	inline Shader_t3191267369 ** get_address_of_wiggleShader_12() { return &___wiggleShader_12; }
	inline void set_wiggleShader_12(Shader_t3191267369 * value)
	{
		___wiggleShader_12 = value;
		Il2CppCodeGenWriteBarrier(&___wiggleShader_12, value);
	}

	inline static int32_t get_offset_of_wiggleMaterial_13() { return static_cast<int32_t>(offsetof(Wiggle_t3166377067, ___wiggleMaterial_13)); }
	inline Material_t3870600107 * get_wiggleMaterial_13() const { return ___wiggleMaterial_13; }
	inline Material_t3870600107 ** get_address_of_wiggleMaterial_13() { return &___wiggleMaterial_13; }
	inline void set_wiggleMaterial_13(Material_t3870600107 * value)
	{
		___wiggleMaterial_13 = value;
		Il2CppCodeGenWriteBarrier(&___wiggleMaterial_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
