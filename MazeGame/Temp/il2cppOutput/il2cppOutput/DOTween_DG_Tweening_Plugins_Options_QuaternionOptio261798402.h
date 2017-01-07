#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType1744280289.h"
#include "DOTween_DG_Tweening_RotateMode3413588064.h"
#include "DOTween_DG_Tweening_AxisConstraint334106912.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Plugins.Options.QuaternionOptions
struct  QuaternionOptions_t261798402 
{
public:
	// DG.Tweening.RotateMode DG.Tweening.Plugins.Options.QuaternionOptions::rotateMode
	int32_t ___rotateMode_0;
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.QuaternionOptions::axisConstraint
	int32_t ___axisConstraint_1;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Options.QuaternionOptions::up
	Vector3_t4282066566  ___up_2;

public:
	inline static int32_t get_offset_of_rotateMode_0() { return static_cast<int32_t>(offsetof(QuaternionOptions_t261798402, ___rotateMode_0)); }
	inline int32_t get_rotateMode_0() const { return ___rotateMode_0; }
	inline int32_t* get_address_of_rotateMode_0() { return &___rotateMode_0; }
	inline void set_rotateMode_0(int32_t value)
	{
		___rotateMode_0 = value;
	}

	inline static int32_t get_offset_of_axisConstraint_1() { return static_cast<int32_t>(offsetof(QuaternionOptions_t261798402, ___axisConstraint_1)); }
	inline int32_t get_axisConstraint_1() const { return ___axisConstraint_1; }
	inline int32_t* get_address_of_axisConstraint_1() { return &___axisConstraint_1; }
	inline void set_axisConstraint_1(int32_t value)
	{
		___axisConstraint_1 = value;
	}

	inline static int32_t get_offset_of_up_2() { return static_cast<int32_t>(offsetof(QuaternionOptions_t261798402, ___up_2)); }
	inline Vector3_t4282066566  get_up_2() const { return ___up_2; }
	inline Vector3_t4282066566 * get_address_of_up_2() { return &___up_2; }
	inline void set_up_2(Vector3_t4282066566  value)
	{
		___up_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: DG.Tweening.Plugins.Options.QuaternionOptions
struct QuaternionOptions_t261798402_marshaled_pinvoke
{
	int32_t ___rotateMode_0;
	int32_t ___axisConstraint_1;
	Vector3_t4282066566_marshaled_pinvoke ___up_2;
};
// Native definition for marshalling of: DG.Tweening.Plugins.Options.QuaternionOptions
struct QuaternionOptions_t261798402_marshaled_com
{
	int32_t ___rotateMode_0;
	int32_t ___axisConstraint_1;
	Vector3_t4282066566_marshaled_com ___up_2;
};
