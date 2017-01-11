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

// MorePPEffects.LowResolution
struct  LowResolution_t1539418110  : public PostEffectsBase_t1415309093
{
public:
	// System.Int32 MorePPEffects.LowResolution::resolutionX
	int32_t ___resolutionX_6;
	// System.Int32 MorePPEffects.LowResolution::resolutionY
	int32_t ___resolutionY_7;
	// UnityEngine.Shader MorePPEffects.LowResolution::lowShader
	Shader_t3191267369 * ___lowShader_8;
	// UnityEngine.Material MorePPEffects.LowResolution::lowMaterial
	Material_t3870600107 * ___lowMaterial_9;

public:
	inline static int32_t get_offset_of_resolutionX_6() { return static_cast<int32_t>(offsetof(LowResolution_t1539418110, ___resolutionX_6)); }
	inline int32_t get_resolutionX_6() const { return ___resolutionX_6; }
	inline int32_t* get_address_of_resolutionX_6() { return &___resolutionX_6; }
	inline void set_resolutionX_6(int32_t value)
	{
		___resolutionX_6 = value;
	}

	inline static int32_t get_offset_of_resolutionY_7() { return static_cast<int32_t>(offsetof(LowResolution_t1539418110, ___resolutionY_7)); }
	inline int32_t get_resolutionY_7() const { return ___resolutionY_7; }
	inline int32_t* get_address_of_resolutionY_7() { return &___resolutionY_7; }
	inline void set_resolutionY_7(int32_t value)
	{
		___resolutionY_7 = value;
	}

	inline static int32_t get_offset_of_lowShader_8() { return static_cast<int32_t>(offsetof(LowResolution_t1539418110, ___lowShader_8)); }
	inline Shader_t3191267369 * get_lowShader_8() const { return ___lowShader_8; }
	inline Shader_t3191267369 ** get_address_of_lowShader_8() { return &___lowShader_8; }
	inline void set_lowShader_8(Shader_t3191267369 * value)
	{
		___lowShader_8 = value;
		Il2CppCodeGenWriteBarrier(&___lowShader_8, value);
	}

	inline static int32_t get_offset_of_lowMaterial_9() { return static_cast<int32_t>(offsetof(LowResolution_t1539418110, ___lowMaterial_9)); }
	inline Material_t3870600107 * get_lowMaterial_9() const { return ___lowMaterial_9; }
	inline Material_t3870600107 ** get_address_of_lowMaterial_9() { return &___lowMaterial_9; }
	inline void set_lowMaterial_9(Material_t3870600107 * value)
	{
		___lowMaterial_9 = value;
		Il2CppCodeGenWriteBarrier(&___lowMaterial_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
