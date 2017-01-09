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

// MorePPEffects.Emboss
struct  Emboss_t2654605397  : public PostEffectsBase_t1415309093
{
public:
	// System.Single MorePPEffects.Emboss::strength
	float ___strength_6;
	// System.Boolean MorePPEffects.Emboss::grayscale
	bool ___grayscale_7;
	// UnityEngine.Shader MorePPEffects.Emboss::embossShader
	Shader_t3191267369 * ___embossShader_8;
	// UnityEngine.Material MorePPEffects.Emboss::embossMaterial
	Material_t3870600107 * ___embossMaterial_9;

public:
	inline static int32_t get_offset_of_strength_6() { return static_cast<int32_t>(offsetof(Emboss_t2654605397, ___strength_6)); }
	inline float get_strength_6() const { return ___strength_6; }
	inline float* get_address_of_strength_6() { return &___strength_6; }
	inline void set_strength_6(float value)
	{
		___strength_6 = value;
	}

	inline static int32_t get_offset_of_grayscale_7() { return static_cast<int32_t>(offsetof(Emboss_t2654605397, ___grayscale_7)); }
	inline bool get_grayscale_7() const { return ___grayscale_7; }
	inline bool* get_address_of_grayscale_7() { return &___grayscale_7; }
	inline void set_grayscale_7(bool value)
	{
		___grayscale_7 = value;
	}

	inline static int32_t get_offset_of_embossShader_8() { return static_cast<int32_t>(offsetof(Emboss_t2654605397, ___embossShader_8)); }
	inline Shader_t3191267369 * get_embossShader_8() const { return ___embossShader_8; }
	inline Shader_t3191267369 ** get_address_of_embossShader_8() { return &___embossShader_8; }
	inline void set_embossShader_8(Shader_t3191267369 * value)
	{
		___embossShader_8 = value;
		Il2CppCodeGenWriteBarrier(&___embossShader_8, value);
	}

	inline static int32_t get_offset_of_embossMaterial_9() { return static_cast<int32_t>(offsetof(Emboss_t2654605397, ___embossMaterial_9)); }
	inline Material_t3870600107 * get_embossMaterial_9() const { return ___embossMaterial_9; }
	inline Material_t3870600107 ** get_address_of_embossMaterial_9() { return &___embossMaterial_9; }
	inline void set_embossMaterial_9(Material_t3870600107 * value)
	{
		___embossMaterial_9 = value;
		Il2CppCodeGenWriteBarrier(&___embossMaterial_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
