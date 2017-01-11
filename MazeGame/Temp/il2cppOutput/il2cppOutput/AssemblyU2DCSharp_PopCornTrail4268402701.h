#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody[]
struct RigidbodyU5BU5D_t1403726930;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3792884695;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PopCornTrail
struct  PopCornTrail_t4268402701  : public MonoBehaviour_t667441552
{
public:
	// System.Single PopCornTrail::despawnTimeMin
	float ___despawnTimeMin_2;
	// System.Single PopCornTrail::despawnTimeMax
	float ___despawnTimeMax_3;
	// UnityEngine.Rigidbody[] PopCornTrail::rBodys
	RigidbodyU5BU5D_t1403726930* ___rBodys_4;
	// UnityEngine.Transform[] PopCornTrail::transformsKids
	TransformU5BU5D_t3792884695* ___transformsKids_5;

public:
	inline static int32_t get_offset_of_despawnTimeMin_2() { return static_cast<int32_t>(offsetof(PopCornTrail_t4268402701, ___despawnTimeMin_2)); }
	inline float get_despawnTimeMin_2() const { return ___despawnTimeMin_2; }
	inline float* get_address_of_despawnTimeMin_2() { return &___despawnTimeMin_2; }
	inline void set_despawnTimeMin_2(float value)
	{
		___despawnTimeMin_2 = value;
	}

	inline static int32_t get_offset_of_despawnTimeMax_3() { return static_cast<int32_t>(offsetof(PopCornTrail_t4268402701, ___despawnTimeMax_3)); }
	inline float get_despawnTimeMax_3() const { return ___despawnTimeMax_3; }
	inline float* get_address_of_despawnTimeMax_3() { return &___despawnTimeMax_3; }
	inline void set_despawnTimeMax_3(float value)
	{
		___despawnTimeMax_3 = value;
	}

	inline static int32_t get_offset_of_rBodys_4() { return static_cast<int32_t>(offsetof(PopCornTrail_t4268402701, ___rBodys_4)); }
	inline RigidbodyU5BU5D_t1403726930* get_rBodys_4() const { return ___rBodys_4; }
	inline RigidbodyU5BU5D_t1403726930** get_address_of_rBodys_4() { return &___rBodys_4; }
	inline void set_rBodys_4(RigidbodyU5BU5D_t1403726930* value)
	{
		___rBodys_4 = value;
		Il2CppCodeGenWriteBarrier(&___rBodys_4, value);
	}

	inline static int32_t get_offset_of_transformsKids_5() { return static_cast<int32_t>(offsetof(PopCornTrail_t4268402701, ___transformsKids_5)); }
	inline TransformU5BU5D_t3792884695* get_transformsKids_5() const { return ___transformsKids_5; }
	inline TransformU5BU5D_t3792884695** get_address_of_transformsKids_5() { return &___transformsKids_5; }
	inline void set_transformsKids_5(TransformU5BU5D_t3792884695* value)
	{
		___transformsKids_5 = value;
		Il2CppCodeGenWriteBarrier(&___transformsKids_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
