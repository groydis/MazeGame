#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationCurve
struct AnimationCurve_t3667593487;
// System.String[]
struct StringU5BU5D_t4054002952;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GeneralEasingTypes
struct  GeneralEasingTypes_t1110304806  : public MonoBehaviour_t667441552
{
public:
	// System.Single GeneralEasingTypes::lineDrawScale
	float ___lineDrawScale_2;
	// UnityEngine.AnimationCurve GeneralEasingTypes::animationCurve
	AnimationCurve_t3667593487 * ___animationCurve_3;
	// System.String[] GeneralEasingTypes::easeTypes
	StringU5BU5D_t4054002952* ___easeTypes_4;

public:
	inline static int32_t get_offset_of_lineDrawScale_2() { return static_cast<int32_t>(offsetof(GeneralEasingTypes_t1110304806, ___lineDrawScale_2)); }
	inline float get_lineDrawScale_2() const { return ___lineDrawScale_2; }
	inline float* get_address_of_lineDrawScale_2() { return &___lineDrawScale_2; }
	inline void set_lineDrawScale_2(float value)
	{
		___lineDrawScale_2 = value;
	}

	inline static int32_t get_offset_of_animationCurve_3() { return static_cast<int32_t>(offsetof(GeneralEasingTypes_t1110304806, ___animationCurve_3)); }
	inline AnimationCurve_t3667593487 * get_animationCurve_3() const { return ___animationCurve_3; }
	inline AnimationCurve_t3667593487 ** get_address_of_animationCurve_3() { return &___animationCurve_3; }
	inline void set_animationCurve_3(AnimationCurve_t3667593487 * value)
	{
		___animationCurve_3 = value;
		Il2CppCodeGenWriteBarrier(&___animationCurve_3, value);
	}

	inline static int32_t get_offset_of_easeTypes_4() { return static_cast<int32_t>(offsetof(GeneralEasingTypes_t1110304806, ___easeTypes_4)); }
	inline StringU5BU5D_t4054002952* get_easeTypes_4() const { return ___easeTypes_4; }
	inline StringU5BU5D_t4054002952** get_address_of_easeTypes_4() { return &___easeTypes_4; }
	inline void set_easeTypes_4(StringU5BU5D_t4054002952* value)
	{
		___easeTypes_4 = value;
		Il2CppCodeGenWriteBarrier(&___easeTypes_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
