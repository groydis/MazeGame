#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// LTRect
struct LTRect_t2255934348;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OldGUISlideImageIn
struct  OldGUISlideImageIn_t4168629443  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Texture2D OldGUISlideImageIn::grumpy
	Texture2D_t3884108195 * ___grumpy_2;
	// LTRect OldGUISlideImageIn::grumpyRect
	LTRect_t2255934348 * ___grumpyRect_3;

public:
	inline static int32_t get_offset_of_grumpy_2() { return static_cast<int32_t>(offsetof(OldGUISlideImageIn_t4168629443, ___grumpy_2)); }
	inline Texture2D_t3884108195 * get_grumpy_2() const { return ___grumpy_2; }
	inline Texture2D_t3884108195 ** get_address_of_grumpy_2() { return &___grumpy_2; }
	inline void set_grumpy_2(Texture2D_t3884108195 * value)
	{
		___grumpy_2 = value;
		Il2CppCodeGenWriteBarrier(&___grumpy_2, value);
	}

	inline static int32_t get_offset_of_grumpyRect_3() { return static_cast<int32_t>(offsetof(OldGUISlideImageIn_t4168629443, ___grumpyRect_3)); }
	inline LTRect_t2255934348 * get_grumpyRect_3() const { return ___grumpyRect_3; }
	inline LTRect_t2255934348 ** get_address_of_grumpyRect_3() { return &___grumpyRect_3; }
	inline void set_grumpyRect_3(LTRect_t2255934348 * value)
	{
		___grumpyRect_3 = value;
		Il2CppCodeGenWriteBarrier(&___grumpyRect_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
