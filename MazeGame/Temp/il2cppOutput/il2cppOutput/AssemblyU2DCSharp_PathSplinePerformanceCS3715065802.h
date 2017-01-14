#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// LTSpline
struct LTSpline_t3328440185;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PathSplinePerformanceCS
struct  PathSplinePerformanceCS_t3715065802  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject PathSplinePerformanceCS::trackTrailRenderers
	GameObject_t3674682005 * ___trackTrailRenderers_2;
	// UnityEngine.GameObject PathSplinePerformanceCS::car
	GameObject_t3674682005 * ___car_3;
	// UnityEngine.GameObject PathSplinePerformanceCS::carInternal
	GameObject_t3674682005 * ___carInternal_4;
	// System.Single PathSplinePerformanceCS::circleLength
	float ___circleLength_5;
	// System.Single PathSplinePerformanceCS::randomRange
	float ___randomRange_6;
	// System.Int32 PathSplinePerformanceCS::trackNodes
	int32_t ___trackNodes_7;
	// System.Single PathSplinePerformanceCS::carSpeed
	float ___carSpeed_8;
	// System.Single PathSplinePerformanceCS::tracerSpeed
	float ___tracerSpeed_9;
	// LTSpline PathSplinePerformanceCS::track
	LTSpline_t3328440185 * ___track_10;
	// System.Int32 PathSplinePerformanceCS::trackIter
	int32_t ___trackIter_11;
	// System.Single PathSplinePerformanceCS::carAdd
	float ___carAdd_12;
	// System.Single PathSplinePerformanceCS::trackPosition
	float ___trackPosition_13;

public:
	inline static int32_t get_offset_of_trackTrailRenderers_2() { return static_cast<int32_t>(offsetof(PathSplinePerformanceCS_t3715065802, ___trackTrailRenderers_2)); }
	inline GameObject_t3674682005 * get_trackTrailRenderers_2() const { return ___trackTrailRenderers_2; }
	inline GameObject_t3674682005 ** get_address_of_trackTrailRenderers_2() { return &___trackTrailRenderers_2; }
	inline void set_trackTrailRenderers_2(GameObject_t3674682005 * value)
	{
		___trackTrailRenderers_2 = value;
		Il2CppCodeGenWriteBarrier(&___trackTrailRenderers_2, value);
	}

	inline static int32_t get_offset_of_car_3() { return static_cast<int32_t>(offsetof(PathSplinePerformanceCS_t3715065802, ___car_3)); }
	inline GameObject_t3674682005 * get_car_3() const { return ___car_3; }
	inline GameObject_t3674682005 ** get_address_of_car_3() { return &___car_3; }
	inline void set_car_3(GameObject_t3674682005 * value)
	{
		___car_3 = value;
		Il2CppCodeGenWriteBarrier(&___car_3, value);
	}

	inline static int32_t get_offset_of_carInternal_4() { return static_cast<int32_t>(offsetof(PathSplinePerformanceCS_t3715065802, ___carInternal_4)); }
	inline GameObject_t3674682005 * get_carInternal_4() const { return ___carInternal_4; }
	inline GameObject_t3674682005 ** get_address_of_carInternal_4() { return &___carInternal_4; }
	inline void set_carInternal_4(GameObject_t3674682005 * value)
	{
		___carInternal_4 = value;
		Il2CppCodeGenWriteBarrier(&___carInternal_4, value);
	}

	inline static int32_t get_offset_of_circleLength_5() { return static_cast<int32_t>(offsetof(PathSplinePerformanceCS_t3715065802, ___circleLength_5)); }
	inline float get_circleLength_5() const { return ___circleLength_5; }
	inline float* get_address_of_circleLength_5() { return &___circleLength_5; }
	inline void set_circleLength_5(float value)
	{
		___circleLength_5 = value;
	}

	inline static int32_t get_offset_of_randomRange_6() { return static_cast<int32_t>(offsetof(PathSplinePerformanceCS_t3715065802, ___randomRange_6)); }
	inline float get_randomRange_6() const { return ___randomRange_6; }
	inline float* get_address_of_randomRange_6() { return &___randomRange_6; }
	inline void set_randomRange_6(float value)
	{
		___randomRange_6 = value;
	}

	inline static int32_t get_offset_of_trackNodes_7() { return static_cast<int32_t>(offsetof(PathSplinePerformanceCS_t3715065802, ___trackNodes_7)); }
	inline int32_t get_trackNodes_7() const { return ___trackNodes_7; }
	inline int32_t* get_address_of_trackNodes_7() { return &___trackNodes_7; }
	inline void set_trackNodes_7(int32_t value)
	{
		___trackNodes_7 = value;
	}

	inline static int32_t get_offset_of_carSpeed_8() { return static_cast<int32_t>(offsetof(PathSplinePerformanceCS_t3715065802, ___carSpeed_8)); }
	inline float get_carSpeed_8() const { return ___carSpeed_8; }
	inline float* get_address_of_carSpeed_8() { return &___carSpeed_8; }
	inline void set_carSpeed_8(float value)
	{
		___carSpeed_8 = value;
	}

	inline static int32_t get_offset_of_tracerSpeed_9() { return static_cast<int32_t>(offsetof(PathSplinePerformanceCS_t3715065802, ___tracerSpeed_9)); }
	inline float get_tracerSpeed_9() const { return ___tracerSpeed_9; }
	inline float* get_address_of_tracerSpeed_9() { return &___tracerSpeed_9; }
	inline void set_tracerSpeed_9(float value)
	{
		___tracerSpeed_9 = value;
	}

	inline static int32_t get_offset_of_track_10() { return static_cast<int32_t>(offsetof(PathSplinePerformanceCS_t3715065802, ___track_10)); }
	inline LTSpline_t3328440185 * get_track_10() const { return ___track_10; }
	inline LTSpline_t3328440185 ** get_address_of_track_10() { return &___track_10; }
	inline void set_track_10(LTSpline_t3328440185 * value)
	{
		___track_10 = value;
		Il2CppCodeGenWriteBarrier(&___track_10, value);
	}

	inline static int32_t get_offset_of_trackIter_11() { return static_cast<int32_t>(offsetof(PathSplinePerformanceCS_t3715065802, ___trackIter_11)); }
	inline int32_t get_trackIter_11() const { return ___trackIter_11; }
	inline int32_t* get_address_of_trackIter_11() { return &___trackIter_11; }
	inline void set_trackIter_11(int32_t value)
	{
		___trackIter_11 = value;
	}

	inline static int32_t get_offset_of_carAdd_12() { return static_cast<int32_t>(offsetof(PathSplinePerformanceCS_t3715065802, ___carAdd_12)); }
	inline float get_carAdd_12() const { return ___carAdd_12; }
	inline float* get_address_of_carAdd_12() { return &___carAdd_12; }
	inline void set_carAdd_12(float value)
	{
		___carAdd_12 = value;
	}

	inline static int32_t get_offset_of_trackPosition_13() { return static_cast<int32_t>(offsetof(PathSplinePerformanceCS_t3715065802, ___trackPosition_13)); }
	inline float get_trackPosition_13() const { return ___trackPosition_13; }
	inline float* get_address_of_trackPosition_13() { return &___trackPosition_13; }
	inline void set_trackPosition_13(float value)
	{
		___trackPosition_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
