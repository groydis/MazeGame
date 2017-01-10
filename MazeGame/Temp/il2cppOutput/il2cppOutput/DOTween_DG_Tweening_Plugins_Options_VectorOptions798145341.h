#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType1744280289.h"
#include "DOTween_DG_Tweening_AxisConstraint334106912.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Plugins.Options.VectorOptions
struct  VectorOptions_t798145341 
{
public:
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.VectorOptions::axisConstraint
	int32_t ___axisConstraint_0;
	// System.Boolean DG.Tweening.Plugins.Options.VectorOptions::snapping
	bool ___snapping_1;

public:
	inline static int32_t get_offset_of_axisConstraint_0() { return static_cast<int32_t>(offsetof(VectorOptions_t798145341, ___axisConstraint_0)); }
	inline int32_t get_axisConstraint_0() const { return ___axisConstraint_0; }
	inline int32_t* get_address_of_axisConstraint_0() { return &___axisConstraint_0; }
	inline void set_axisConstraint_0(int32_t value)
	{
		___axisConstraint_0 = value;
	}

	inline static int32_t get_offset_of_snapping_1() { return static_cast<int32_t>(offsetof(VectorOptions_t798145341, ___snapping_1)); }
	inline bool get_snapping_1() const { return ___snapping_1; }
	inline bool* get_address_of_snapping_1() { return &___snapping_1; }
	inline void set_snapping_1(bool value)
	{
		___snapping_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t798145341_marshaled_pinvoke
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};
// Native definition for marshalling of: DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t798145341_marshaled_com
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};
