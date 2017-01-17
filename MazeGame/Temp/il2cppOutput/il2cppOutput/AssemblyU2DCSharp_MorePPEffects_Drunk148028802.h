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

// MorePPEffects.Drunk
struct  Drunk_t148028802  : public PostEffectsBase_t1415309093
{
public:
	// System.Single MorePPEffects.Drunk::timer
	float ___timer_6;
	// System.Single MorePPEffects.Drunk::strength
	float ___strength_7;
	// UnityEngine.Shader MorePPEffects.Drunk::drunkShader
	Shader_t3191267369 * ___drunkShader_8;
	// UnityEngine.Material MorePPEffects.Drunk::drunkMaterial
	Material_t3870600107 * ___drunkMaterial_9;

public:
	inline static int32_t get_offset_of_timer_6() { return static_cast<int32_t>(offsetof(Drunk_t148028802, ___timer_6)); }
	inline float get_timer_6() const { return ___timer_6; }
	inline float* get_address_of_timer_6() { return &___timer_6; }
	inline void set_timer_6(float value)
	{
		___timer_6 = value;
	}

	inline static int32_t get_offset_of_strength_7() { return static_cast<int32_t>(offsetof(Drunk_t148028802, ___strength_7)); }
	inline float get_strength_7() const { return ___strength_7; }
	inline float* get_address_of_strength_7() { return &___strength_7; }
	inline void set_strength_7(float value)
	{
		___strength_7 = value;
	}

	inline static int32_t get_offset_of_drunkShader_8() { return static_cast<int32_t>(offsetof(Drunk_t148028802, ___drunkShader_8)); }
	inline Shader_t3191267369 * get_drunkShader_8() const { return ___drunkShader_8; }
	inline Shader_t3191267369 ** get_address_of_drunkShader_8() { return &___drunkShader_8; }
	inline void set_drunkShader_8(Shader_t3191267369 * value)
	{
		___drunkShader_8 = value;
		Il2CppCodeGenWriteBarrier(&___drunkShader_8, value);
	}

	inline static int32_t get_offset_of_drunkMaterial_9() { return static_cast<int32_t>(offsetof(Drunk_t148028802, ___drunkMaterial_9)); }
	inline Material_t3870600107 * get_drunkMaterial_9() const { return ___drunkMaterial_9; }
	inline Material_t3870600107 ** get_address_of_drunkMaterial_9() { return &___drunkMaterial_9; }
	inline void set_drunkMaterial_9(Material_t3870600107 * value)
	{
		___drunkMaterial_9 = value;
		Il2CppCodeGenWriteBarrier(&___drunkMaterial_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
