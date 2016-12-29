#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<Swipe,UnityEngine.Vector2>
struct Dictionary_2_t3525816318;
// SwipeManager/OnSwipeDetectedHandler
struct OnSwipeDetectedHandler_t2219817673;
// SwipeManager
struct SwipeManager_t1439696691;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_Swipe80301850.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SwipeManager
struct  SwipeManager_t1439696691  : public MonoBehaviour_t667441552
{
public:
	// System.Single SwipeManager::minSwipeLength
	float ___minSwipeLength_6;
	// System.Boolean SwipeManager::useEightDirections
	bool ___useEightDirections_7;

public:
	inline static int32_t get_offset_of_minSwipeLength_6() { return static_cast<int32_t>(offsetof(SwipeManager_t1439696691, ___minSwipeLength_6)); }
	inline float get_minSwipeLength_6() const { return ___minSwipeLength_6; }
	inline float* get_address_of_minSwipeLength_6() { return &___minSwipeLength_6; }
	inline void set_minSwipeLength_6(float value)
	{
		___minSwipeLength_6 = value;
	}

	inline static int32_t get_offset_of_useEightDirections_7() { return static_cast<int32_t>(offsetof(SwipeManager_t1439696691, ___useEightDirections_7)); }
	inline bool get_useEightDirections_7() const { return ___useEightDirections_7; }
	inline bool* get_address_of_useEightDirections_7() { return &___useEightDirections_7; }
	inline void set_useEightDirections_7(bool value)
	{
		___useEightDirections_7 = value;
	}
};

struct SwipeManager_t1439696691_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<Swipe,UnityEngine.Vector2> SwipeManager::cardinalDirections
	Dictionary_2_t3525816318 * ___cardinalDirections_8;
	// SwipeManager/OnSwipeDetectedHandler SwipeManager::_OnSwipeDetected
	OnSwipeDetectedHandler_t2219817673 * ____OnSwipeDetected_9;
	// System.Single SwipeManager::dpcm
	float ___dpcm_10;
	// System.Boolean SwipeManager::autoDetectSwipes
	bool ___autoDetectSwipes_11;
	// Swipe SwipeManager::swipeDirection
	int32_t ___swipeDirection_12;
	// UnityEngine.Vector2 SwipeManager::firstPressPos
	Vector2_t4282066565  ___firstPressPos_13;
	// UnityEngine.Vector2 SwipeManager::secondPressPos
	Vector2_t4282066565  ___secondPressPos_14;
	// SwipeManager SwipeManager::instance
	SwipeManager_t1439696691 * ___instance_15;

public:
	inline static int32_t get_offset_of_cardinalDirections_8() { return static_cast<int32_t>(offsetof(SwipeManager_t1439696691_StaticFields, ___cardinalDirections_8)); }
	inline Dictionary_2_t3525816318 * get_cardinalDirections_8() const { return ___cardinalDirections_8; }
	inline Dictionary_2_t3525816318 ** get_address_of_cardinalDirections_8() { return &___cardinalDirections_8; }
	inline void set_cardinalDirections_8(Dictionary_2_t3525816318 * value)
	{
		___cardinalDirections_8 = value;
		Il2CppCodeGenWriteBarrier(&___cardinalDirections_8, value);
	}

	inline static int32_t get_offset_of__OnSwipeDetected_9() { return static_cast<int32_t>(offsetof(SwipeManager_t1439696691_StaticFields, ____OnSwipeDetected_9)); }
	inline OnSwipeDetectedHandler_t2219817673 * get__OnSwipeDetected_9() const { return ____OnSwipeDetected_9; }
	inline OnSwipeDetectedHandler_t2219817673 ** get_address_of__OnSwipeDetected_9() { return &____OnSwipeDetected_9; }
	inline void set__OnSwipeDetected_9(OnSwipeDetectedHandler_t2219817673 * value)
	{
		____OnSwipeDetected_9 = value;
		Il2CppCodeGenWriteBarrier(&____OnSwipeDetected_9, value);
	}

	inline static int32_t get_offset_of_dpcm_10() { return static_cast<int32_t>(offsetof(SwipeManager_t1439696691_StaticFields, ___dpcm_10)); }
	inline float get_dpcm_10() const { return ___dpcm_10; }
	inline float* get_address_of_dpcm_10() { return &___dpcm_10; }
	inline void set_dpcm_10(float value)
	{
		___dpcm_10 = value;
	}

	inline static int32_t get_offset_of_autoDetectSwipes_11() { return static_cast<int32_t>(offsetof(SwipeManager_t1439696691_StaticFields, ___autoDetectSwipes_11)); }
	inline bool get_autoDetectSwipes_11() const { return ___autoDetectSwipes_11; }
	inline bool* get_address_of_autoDetectSwipes_11() { return &___autoDetectSwipes_11; }
	inline void set_autoDetectSwipes_11(bool value)
	{
		___autoDetectSwipes_11 = value;
	}

	inline static int32_t get_offset_of_swipeDirection_12() { return static_cast<int32_t>(offsetof(SwipeManager_t1439696691_StaticFields, ___swipeDirection_12)); }
	inline int32_t get_swipeDirection_12() const { return ___swipeDirection_12; }
	inline int32_t* get_address_of_swipeDirection_12() { return &___swipeDirection_12; }
	inline void set_swipeDirection_12(int32_t value)
	{
		___swipeDirection_12 = value;
	}

	inline static int32_t get_offset_of_firstPressPos_13() { return static_cast<int32_t>(offsetof(SwipeManager_t1439696691_StaticFields, ___firstPressPos_13)); }
	inline Vector2_t4282066565  get_firstPressPos_13() const { return ___firstPressPos_13; }
	inline Vector2_t4282066565 * get_address_of_firstPressPos_13() { return &___firstPressPos_13; }
	inline void set_firstPressPos_13(Vector2_t4282066565  value)
	{
		___firstPressPos_13 = value;
	}

	inline static int32_t get_offset_of_secondPressPos_14() { return static_cast<int32_t>(offsetof(SwipeManager_t1439696691_StaticFields, ___secondPressPos_14)); }
	inline Vector2_t4282066565  get_secondPressPos_14() const { return ___secondPressPos_14; }
	inline Vector2_t4282066565 * get_address_of_secondPressPos_14() { return &___secondPressPos_14; }
	inline void set_secondPressPos_14(Vector2_t4282066565  value)
	{
		___secondPressPos_14 = value;
	}

	inline static int32_t get_offset_of_instance_15() { return static_cast<int32_t>(offsetof(SwipeManager_t1439696691_StaticFields, ___instance_15)); }
	inline SwipeManager_t1439696691 * get_instance_15() const { return ___instance_15; }
	inline SwipeManager_t1439696691 ** get_address_of_instance_15() { return &___instance_15; }
	inline void set_instance_15(SwipeManager_t1439696691 * value)
	{
		___instance_15 = value;
		Il2CppCodeGenWriteBarrier(&___instance_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
