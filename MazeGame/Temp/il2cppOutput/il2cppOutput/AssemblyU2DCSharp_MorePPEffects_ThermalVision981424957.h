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

// MorePPEffects.ThermalVision
struct  ThermalVision_t981424957  : public PostEffectsBase_t1415309093
{
public:
	// UnityEngine.Shader MorePPEffects.ThermalVision::thermalVisionShader
	Shader_t3191267369 * ___thermalVisionShader_6;
	// UnityEngine.Material MorePPEffects.ThermalVision::thermalVisionMaterial
	Material_t3870600107 * ___thermalVisionMaterial_7;

public:
	inline static int32_t get_offset_of_thermalVisionShader_6() { return static_cast<int32_t>(offsetof(ThermalVision_t981424957, ___thermalVisionShader_6)); }
	inline Shader_t3191267369 * get_thermalVisionShader_6() const { return ___thermalVisionShader_6; }
	inline Shader_t3191267369 ** get_address_of_thermalVisionShader_6() { return &___thermalVisionShader_6; }
	inline void set_thermalVisionShader_6(Shader_t3191267369 * value)
	{
		___thermalVisionShader_6 = value;
		Il2CppCodeGenWriteBarrier(&___thermalVisionShader_6, value);
	}

	inline static int32_t get_offset_of_thermalVisionMaterial_7() { return static_cast<int32_t>(offsetof(ThermalVision_t981424957, ___thermalVisionMaterial_7)); }
	inline Material_t3870600107 * get_thermalVisionMaterial_7() const { return ___thermalVisionMaterial_7; }
	inline Material_t3870600107 ** get_address_of_thermalVisionMaterial_7() { return &___thermalVisionMaterial_7; }
	inline void set_thermalVisionMaterial_7(Material_t3870600107 * value)
	{
		___thermalVisionMaterial_7 = value;
		Il2CppCodeGenWriteBarrier(&___thermalVisionMaterial_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
