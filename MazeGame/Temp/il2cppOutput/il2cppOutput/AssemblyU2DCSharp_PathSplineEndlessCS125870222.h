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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;
// LTSpline
struct LTSpline_t3328440185;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1355284822;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PathSplineEndlessCS
struct  PathSplineEndlessCS_t125870222  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject PathSplineEndlessCS::trackTrailRenderers
	GameObject_t3674682005 * ___trackTrailRenderers_2;
	// UnityEngine.GameObject PathSplineEndlessCS::car
	GameObject_t3674682005 * ___car_3;
	// UnityEngine.GameObject PathSplineEndlessCS::carInternal
	GameObject_t3674682005 * ___carInternal_4;
	// UnityEngine.GameObject[] PathSplineEndlessCS::cubes
	GameObjectU5BU5D_t2662109048* ___cubes_5;
	// System.Int32 PathSplineEndlessCS::cubesIter
	int32_t ___cubesIter_6;
	// UnityEngine.GameObject[] PathSplineEndlessCS::trees
	GameObjectU5BU5D_t2662109048* ___trees_7;
	// System.Int32 PathSplineEndlessCS::treesIter
	int32_t ___treesIter_8;
	// System.Single PathSplineEndlessCS::randomIterWidth
	float ___randomIterWidth_9;
	// LTSpline PathSplineEndlessCS::track
	LTSpline_t3328440185 * ___track_10;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> PathSplineEndlessCS::trackPts
	List_1_t1355284822 * ___trackPts_11;
	// System.Int32 PathSplineEndlessCS::zIter
	int32_t ___zIter_12;
	// System.Single PathSplineEndlessCS::carIter
	float ___carIter_13;
	// System.Single PathSplineEndlessCS::carAdd
	float ___carAdd_14;
	// System.Int32 PathSplineEndlessCS::trackMaxItems
	int32_t ___trackMaxItems_15;
	// System.Int32 PathSplineEndlessCS::trackIter
	int32_t ___trackIter_16;
	// System.Single PathSplineEndlessCS::pushTrackAhead
	float ___pushTrackAhead_17;
	// System.Single PathSplineEndlessCS::randomIter
	float ___randomIter_18;

public:
	inline static int32_t get_offset_of_trackTrailRenderers_2() { return static_cast<int32_t>(offsetof(PathSplineEndlessCS_t125870222, ___trackTrailRenderers_2)); }
	inline GameObject_t3674682005 * get_trackTrailRenderers_2() const { return ___trackTrailRenderers_2; }
	inline GameObject_t3674682005 ** get_address_of_trackTrailRenderers_2() { return &___trackTrailRenderers_2; }
	inline void set_trackTrailRenderers_2(GameObject_t3674682005 * value)
	{
		___trackTrailRenderers_2 = value;
		Il2CppCodeGenWriteBarrier(&___trackTrailRenderers_2, value);
	}

	inline static int32_t get_offset_of_car_3() { return static_cast<int32_t>(offsetof(PathSplineEndlessCS_t125870222, ___car_3)); }
	inline GameObject_t3674682005 * get_car_3() const { return ___car_3; }
	inline GameObject_t3674682005 ** get_address_of_car_3() { return &___car_3; }
	inline void set_car_3(GameObject_t3674682005 * value)
	{
		___car_3 = value;
		Il2CppCodeGenWriteBarrier(&___car_3, value);
	}

	inline static int32_t get_offset_of_carInternal_4() { return static_cast<int32_t>(offsetof(PathSplineEndlessCS_t125870222, ___carInternal_4)); }
	inline GameObject_t3674682005 * get_carInternal_4() const { return ___carInternal_4; }
	inline GameObject_t3674682005 ** get_address_of_carInternal_4() { return &___carInternal_4; }
	inline void set_carInternal_4(GameObject_t3674682005 * value)
	{
		___carInternal_4 = value;
		Il2CppCodeGenWriteBarrier(&___carInternal_4, value);
	}

	inline static int32_t get_offset_of_cubes_5() { return static_cast<int32_t>(offsetof(PathSplineEndlessCS_t125870222, ___cubes_5)); }
	inline GameObjectU5BU5D_t2662109048* get_cubes_5() const { return ___cubes_5; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_cubes_5() { return &___cubes_5; }
	inline void set_cubes_5(GameObjectU5BU5D_t2662109048* value)
	{
		___cubes_5 = value;
		Il2CppCodeGenWriteBarrier(&___cubes_5, value);
	}

	inline static int32_t get_offset_of_cubesIter_6() { return static_cast<int32_t>(offsetof(PathSplineEndlessCS_t125870222, ___cubesIter_6)); }
	inline int32_t get_cubesIter_6() const { return ___cubesIter_6; }
	inline int32_t* get_address_of_cubesIter_6() { return &___cubesIter_6; }
	inline void set_cubesIter_6(int32_t value)
	{
		___cubesIter_6 = value;
	}

	inline static int32_t get_offset_of_trees_7() { return static_cast<int32_t>(offsetof(PathSplineEndlessCS_t125870222, ___trees_7)); }
	inline GameObjectU5BU5D_t2662109048* get_trees_7() const { return ___trees_7; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_trees_7() { return &___trees_7; }
	inline void set_trees_7(GameObjectU5BU5D_t2662109048* value)
	{
		___trees_7 = value;
		Il2CppCodeGenWriteBarrier(&___trees_7, value);
	}

	inline static int32_t get_offset_of_treesIter_8() { return static_cast<int32_t>(offsetof(PathSplineEndlessCS_t125870222, ___treesIter_8)); }
	inline int32_t get_treesIter_8() const { return ___treesIter_8; }
	inline int32_t* get_address_of_treesIter_8() { return &___treesIter_8; }
	inline void set_treesIter_8(int32_t value)
	{
		___treesIter_8 = value;
	}

	inline static int32_t get_offset_of_randomIterWidth_9() { return static_cast<int32_t>(offsetof(PathSplineEndlessCS_t125870222, ___randomIterWidth_9)); }
	inline float get_randomIterWidth_9() const { return ___randomIterWidth_9; }
	inline float* get_address_of_randomIterWidth_9() { return &___randomIterWidth_9; }
	inline void set_randomIterWidth_9(float value)
	{
		___randomIterWidth_9 = value;
	}

	inline static int32_t get_offset_of_track_10() { return static_cast<int32_t>(offsetof(PathSplineEndlessCS_t125870222, ___track_10)); }
	inline LTSpline_t3328440185 * get_track_10() const { return ___track_10; }
	inline LTSpline_t3328440185 ** get_address_of_track_10() { return &___track_10; }
	inline void set_track_10(LTSpline_t3328440185 * value)
	{
		___track_10 = value;
		Il2CppCodeGenWriteBarrier(&___track_10, value);
	}

	inline static int32_t get_offset_of_trackPts_11() { return static_cast<int32_t>(offsetof(PathSplineEndlessCS_t125870222, ___trackPts_11)); }
	inline List_1_t1355284822 * get_trackPts_11() const { return ___trackPts_11; }
	inline List_1_t1355284822 ** get_address_of_trackPts_11() { return &___trackPts_11; }
	inline void set_trackPts_11(List_1_t1355284822 * value)
	{
		___trackPts_11 = value;
		Il2CppCodeGenWriteBarrier(&___trackPts_11, value);
	}

	inline static int32_t get_offset_of_zIter_12() { return static_cast<int32_t>(offsetof(PathSplineEndlessCS_t125870222, ___zIter_12)); }
	inline int32_t get_zIter_12() const { return ___zIter_12; }
	inline int32_t* get_address_of_zIter_12() { return &___zIter_12; }
	inline void set_zIter_12(int32_t value)
	{
		___zIter_12 = value;
	}

	inline static int32_t get_offset_of_carIter_13() { return static_cast<int32_t>(offsetof(PathSplineEndlessCS_t125870222, ___carIter_13)); }
	inline float get_carIter_13() const { return ___carIter_13; }
	inline float* get_address_of_carIter_13() { return &___carIter_13; }
	inline void set_carIter_13(float value)
	{
		___carIter_13 = value;
	}

	inline static int32_t get_offset_of_carAdd_14() { return static_cast<int32_t>(offsetof(PathSplineEndlessCS_t125870222, ___carAdd_14)); }
	inline float get_carAdd_14() const { return ___carAdd_14; }
	inline float* get_address_of_carAdd_14() { return &___carAdd_14; }
	inline void set_carAdd_14(float value)
	{
		___carAdd_14 = value;
	}

	inline static int32_t get_offset_of_trackMaxItems_15() { return static_cast<int32_t>(offsetof(PathSplineEndlessCS_t125870222, ___trackMaxItems_15)); }
	inline int32_t get_trackMaxItems_15() const { return ___trackMaxItems_15; }
	inline int32_t* get_address_of_trackMaxItems_15() { return &___trackMaxItems_15; }
	inline void set_trackMaxItems_15(int32_t value)
	{
		___trackMaxItems_15 = value;
	}

	inline static int32_t get_offset_of_trackIter_16() { return static_cast<int32_t>(offsetof(PathSplineEndlessCS_t125870222, ___trackIter_16)); }
	inline int32_t get_trackIter_16() const { return ___trackIter_16; }
	inline int32_t* get_address_of_trackIter_16() { return &___trackIter_16; }
	inline void set_trackIter_16(int32_t value)
	{
		___trackIter_16 = value;
	}

	inline static int32_t get_offset_of_pushTrackAhead_17() { return static_cast<int32_t>(offsetof(PathSplineEndlessCS_t125870222, ___pushTrackAhead_17)); }
	inline float get_pushTrackAhead_17() const { return ___pushTrackAhead_17; }
	inline float* get_address_of_pushTrackAhead_17() { return &___pushTrackAhead_17; }
	inline void set_pushTrackAhead_17(float value)
	{
		___pushTrackAhead_17 = value;
	}

	inline static int32_t get_offset_of_randomIter_18() { return static_cast<int32_t>(offsetof(PathSplineEndlessCS_t125870222, ___randomIter_18)); }
	inline float get_randomIter_18() const { return ___randomIter_18; }
	inline float* get_address_of_randomIter_18() { return &___randomIter_18; }
	inline void set_randomIter_18(float value)
	{
		___randomIter_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
