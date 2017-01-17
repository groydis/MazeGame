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
// UnityEngine.Transform[]
struct TransformU5BU5D_t3792884695;
// LTSpline
struct LTSpline_t3328440185;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PathSplineTrackCS
struct  PathSplineTrackCS_t2961610149  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject PathSplineTrackCS::car
	GameObject_t3674682005 * ___car_2;
	// UnityEngine.GameObject PathSplineTrackCS::carInternal
	GameObject_t3674682005 * ___carInternal_3;
	// UnityEngine.GameObject PathSplineTrackCS::trackTrailRenderers
	GameObject_t3674682005 * ___trackTrailRenderers_4;
	// UnityEngine.Transform[] PathSplineTrackCS::trackOnePoints
	TransformU5BU5D_t3792884695* ___trackOnePoints_5;
	// LTSpline PathSplineTrackCS::track
	LTSpline_t3328440185 * ___track_6;
	// System.Int32 PathSplineTrackCS::trackIter
	int32_t ___trackIter_7;
	// System.Single PathSplineTrackCS::trackPosition
	float ___trackPosition_8;

public:
	inline static int32_t get_offset_of_car_2() { return static_cast<int32_t>(offsetof(PathSplineTrackCS_t2961610149, ___car_2)); }
	inline GameObject_t3674682005 * get_car_2() const { return ___car_2; }
	inline GameObject_t3674682005 ** get_address_of_car_2() { return &___car_2; }
	inline void set_car_2(GameObject_t3674682005 * value)
	{
		___car_2 = value;
		Il2CppCodeGenWriteBarrier(&___car_2, value);
	}

	inline static int32_t get_offset_of_carInternal_3() { return static_cast<int32_t>(offsetof(PathSplineTrackCS_t2961610149, ___carInternal_3)); }
	inline GameObject_t3674682005 * get_carInternal_3() const { return ___carInternal_3; }
	inline GameObject_t3674682005 ** get_address_of_carInternal_3() { return &___carInternal_3; }
	inline void set_carInternal_3(GameObject_t3674682005 * value)
	{
		___carInternal_3 = value;
		Il2CppCodeGenWriteBarrier(&___carInternal_3, value);
	}

	inline static int32_t get_offset_of_trackTrailRenderers_4() { return static_cast<int32_t>(offsetof(PathSplineTrackCS_t2961610149, ___trackTrailRenderers_4)); }
	inline GameObject_t3674682005 * get_trackTrailRenderers_4() const { return ___trackTrailRenderers_4; }
	inline GameObject_t3674682005 ** get_address_of_trackTrailRenderers_4() { return &___trackTrailRenderers_4; }
	inline void set_trackTrailRenderers_4(GameObject_t3674682005 * value)
	{
		___trackTrailRenderers_4 = value;
		Il2CppCodeGenWriteBarrier(&___trackTrailRenderers_4, value);
	}

	inline static int32_t get_offset_of_trackOnePoints_5() { return static_cast<int32_t>(offsetof(PathSplineTrackCS_t2961610149, ___trackOnePoints_5)); }
	inline TransformU5BU5D_t3792884695* get_trackOnePoints_5() const { return ___trackOnePoints_5; }
	inline TransformU5BU5D_t3792884695** get_address_of_trackOnePoints_5() { return &___trackOnePoints_5; }
	inline void set_trackOnePoints_5(TransformU5BU5D_t3792884695* value)
	{
		___trackOnePoints_5 = value;
		Il2CppCodeGenWriteBarrier(&___trackOnePoints_5, value);
	}

	inline static int32_t get_offset_of_track_6() { return static_cast<int32_t>(offsetof(PathSplineTrackCS_t2961610149, ___track_6)); }
	inline LTSpline_t3328440185 * get_track_6() const { return ___track_6; }
	inline LTSpline_t3328440185 ** get_address_of_track_6() { return &___track_6; }
	inline void set_track_6(LTSpline_t3328440185 * value)
	{
		___track_6 = value;
		Il2CppCodeGenWriteBarrier(&___track_6, value);
	}

	inline static int32_t get_offset_of_trackIter_7() { return static_cast<int32_t>(offsetof(PathSplineTrackCS_t2961610149, ___trackIter_7)); }
	inline int32_t get_trackIter_7() const { return ___trackIter_7; }
	inline int32_t* get_address_of_trackIter_7() { return &___trackIter_7; }
	inline void set_trackIter_7(int32_t value)
	{
		___trackIter_7 = value;
	}

	inline static int32_t get_offset_of_trackPosition_8() { return static_cast<int32_t>(offsetof(PathSplineTrackCS_t2961610149, ___trackPosition_8)); }
	inline float get_trackPosition_8() const { return ___trackPosition_8; }
	inline float* get_address_of_trackPosition_8() { return &___trackPosition_8; }
	inline void set_trackPosition_8(float value)
	{
		___trackPosition_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
