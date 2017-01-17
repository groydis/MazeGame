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

// MorePPEffects.Scanner
struct  Scanner_t2278521372  : public PostEffectsBase_t1415309093
{
public:
	// System.Single MorePPEffects.Scanner::timer
	float ___timer_6;
	// System.Single MorePPEffects.Scanner::linesIntensity
	float ___linesIntensity_7;
	// System.Single MorePPEffects.Scanner::linesSpeed
	float ___linesSpeed_8;
	// System.Single MorePPEffects.Scanner::linesAmount
	float ___linesAmount_9;
	// UnityEngine.Shader MorePPEffects.Scanner::scannerShader
	Shader_t3191267369 * ___scannerShader_10;
	// UnityEngine.Material MorePPEffects.Scanner::scannerMaterial
	Material_t3870600107 * ___scannerMaterial_11;

public:
	inline static int32_t get_offset_of_timer_6() { return static_cast<int32_t>(offsetof(Scanner_t2278521372, ___timer_6)); }
	inline float get_timer_6() const { return ___timer_6; }
	inline float* get_address_of_timer_6() { return &___timer_6; }
	inline void set_timer_6(float value)
	{
		___timer_6 = value;
	}

	inline static int32_t get_offset_of_linesIntensity_7() { return static_cast<int32_t>(offsetof(Scanner_t2278521372, ___linesIntensity_7)); }
	inline float get_linesIntensity_7() const { return ___linesIntensity_7; }
	inline float* get_address_of_linesIntensity_7() { return &___linesIntensity_7; }
	inline void set_linesIntensity_7(float value)
	{
		___linesIntensity_7 = value;
	}

	inline static int32_t get_offset_of_linesSpeed_8() { return static_cast<int32_t>(offsetof(Scanner_t2278521372, ___linesSpeed_8)); }
	inline float get_linesSpeed_8() const { return ___linesSpeed_8; }
	inline float* get_address_of_linesSpeed_8() { return &___linesSpeed_8; }
	inline void set_linesSpeed_8(float value)
	{
		___linesSpeed_8 = value;
	}

	inline static int32_t get_offset_of_linesAmount_9() { return static_cast<int32_t>(offsetof(Scanner_t2278521372, ___linesAmount_9)); }
	inline float get_linesAmount_9() const { return ___linesAmount_9; }
	inline float* get_address_of_linesAmount_9() { return &___linesAmount_9; }
	inline void set_linesAmount_9(float value)
	{
		___linesAmount_9 = value;
	}

	inline static int32_t get_offset_of_scannerShader_10() { return static_cast<int32_t>(offsetof(Scanner_t2278521372, ___scannerShader_10)); }
	inline Shader_t3191267369 * get_scannerShader_10() const { return ___scannerShader_10; }
	inline Shader_t3191267369 ** get_address_of_scannerShader_10() { return &___scannerShader_10; }
	inline void set_scannerShader_10(Shader_t3191267369 * value)
	{
		___scannerShader_10 = value;
		Il2CppCodeGenWriteBarrier(&___scannerShader_10, value);
	}

	inline static int32_t get_offset_of_scannerMaterial_11() { return static_cast<int32_t>(offsetof(Scanner_t2278521372, ___scannerMaterial_11)); }
	inline Material_t3870600107 * get_scannerMaterial_11() const { return ___scannerMaterial_11; }
	inline Material_t3870600107 ** get_address_of_scannerMaterial_11() { return &___scannerMaterial_11; }
	inline void set_scannerMaterial_11(Material_t3870600107 * value)
	{
		___scannerMaterial_11 = value;
		Il2CppCodeGenWriteBarrier(&___scannerMaterial_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
