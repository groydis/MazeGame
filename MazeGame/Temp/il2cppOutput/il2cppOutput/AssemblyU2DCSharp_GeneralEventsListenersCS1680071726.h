﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GeneralEventsListenersCS
struct  GeneralEventsListenersCS_t1680071726  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Vector3 GeneralEventsListenersCS::towardsRotation
	Vector3_t4282066566  ___towardsRotation_2;
	// System.Single GeneralEventsListenersCS::turnForLength
	float ___turnForLength_3;
	// System.Single GeneralEventsListenersCS::turnForIter
	float ___turnForIter_4;
	// UnityEngine.Color GeneralEventsListenersCS::fromColor
	Color_t4194546905  ___fromColor_5;

public:
	inline static int32_t get_offset_of_towardsRotation_2() { return static_cast<int32_t>(offsetof(GeneralEventsListenersCS_t1680071726, ___towardsRotation_2)); }
	inline Vector3_t4282066566  get_towardsRotation_2() const { return ___towardsRotation_2; }
	inline Vector3_t4282066566 * get_address_of_towardsRotation_2() { return &___towardsRotation_2; }
	inline void set_towardsRotation_2(Vector3_t4282066566  value)
	{
		___towardsRotation_2 = value;
	}

	inline static int32_t get_offset_of_turnForLength_3() { return static_cast<int32_t>(offsetof(GeneralEventsListenersCS_t1680071726, ___turnForLength_3)); }
	inline float get_turnForLength_3() const { return ___turnForLength_3; }
	inline float* get_address_of_turnForLength_3() { return &___turnForLength_3; }
	inline void set_turnForLength_3(float value)
	{
		___turnForLength_3 = value;
	}

	inline static int32_t get_offset_of_turnForIter_4() { return static_cast<int32_t>(offsetof(GeneralEventsListenersCS_t1680071726, ___turnForIter_4)); }
	inline float get_turnForIter_4() const { return ___turnForIter_4; }
	inline float* get_address_of_turnForIter_4() { return &___turnForIter_4; }
	inline void set_turnForIter_4(float value)
	{
		___turnForIter_4 = value;
	}

	inline static int32_t get_offset_of_fromColor_5() { return static_cast<int32_t>(offsetof(GeneralEventsListenersCS_t1680071726, ___fromColor_5)); }
	inline Color_t4194546905  get_fromColor_5() const { return ___fromColor_5; }
	inline Color_t4194546905 * get_address_of_fromColor_5() { return &___fromColor_5; }
	inline void set_fromColor_5(Color_t4194546905  value)
	{
		___fromColor_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
