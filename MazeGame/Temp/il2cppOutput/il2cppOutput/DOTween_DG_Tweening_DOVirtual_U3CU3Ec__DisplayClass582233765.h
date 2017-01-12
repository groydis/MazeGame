#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DG.Tweening.TweenCallback`1<System.Single>
struct TweenCallback_1_t2521401364;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.DOVirtual/<>c__DisplayClass0_0
struct  U3CU3Ec__DisplayClass0_0_t582233765  : public Il2CppObject
{
public:
	// System.Single DG.Tweening.DOVirtual/<>c__DisplayClass0_0::val
	float ___val_0;
	// DG.Tweening.TweenCallback`1<System.Single> DG.Tweening.DOVirtual/<>c__DisplayClass0_0::onVirtualUpdate
	TweenCallback_1_t2521401364 * ___onVirtualUpdate_1;

public:
	inline static int32_t get_offset_of_val_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t582233765, ___val_0)); }
	inline float get_val_0() const { return ___val_0; }
	inline float* get_address_of_val_0() { return &___val_0; }
	inline void set_val_0(float value)
	{
		___val_0 = value;
	}

	inline static int32_t get_offset_of_onVirtualUpdate_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t582233765, ___onVirtualUpdate_1)); }
	inline TweenCallback_1_t2521401364 * get_onVirtualUpdate_1() const { return ___onVirtualUpdate_1; }
	inline TweenCallback_1_t2521401364 ** get_address_of_onVirtualUpdate_1() { return &___onVirtualUpdate_1; }
	inline void set_onVirtualUpdate_1(TweenCallback_1_t2521401364 * value)
	{
		___onVirtualUpdate_1 = value;
		Il2CppCodeGenWriteBarrier(&___onVirtualUpdate_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
