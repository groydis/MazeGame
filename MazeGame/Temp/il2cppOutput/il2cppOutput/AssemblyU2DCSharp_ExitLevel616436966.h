#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t4054002952;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitLevel
struct  ExitLevel_t616436966  : public MonoBehaviour_t667441552
{
public:
	// System.String[] ExitLevel::dialogue
	StringU5BU5D_t4054002952* ___dialogue_2;

public:
	inline static int32_t get_offset_of_dialogue_2() { return static_cast<int32_t>(offsetof(ExitLevel_t616436966, ___dialogue_2)); }
	inline StringU5BU5D_t4054002952* get_dialogue_2() const { return ___dialogue_2; }
	inline StringU5BU5D_t4054002952** get_address_of_dialogue_2() { return &___dialogue_2; }
	inline void set_dialogue_2(StringU5BU5D_t4054002952* value)
	{
		___dialogue_2 = value;
		Il2CppCodeGenWriteBarrier(&___dialogue_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
