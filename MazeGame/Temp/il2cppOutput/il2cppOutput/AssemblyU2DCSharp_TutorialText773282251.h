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

// TutorialText
struct  TutorialText_t773282251  : public MonoBehaviour_t667441552
{
public:
	// System.String[] TutorialText::dialogue
	StringU5BU5D_t4054002952* ___dialogue_2;
	// System.Boolean TutorialText::batteryPickUp
	bool ___batteryPickUp_3;
	// System.Boolean TutorialText::batteryDrain
	bool ___batteryDrain_4;
	// System.Boolean TutorialText::attackType
	bool ___attackType_5;

public:
	inline static int32_t get_offset_of_dialogue_2() { return static_cast<int32_t>(offsetof(TutorialText_t773282251, ___dialogue_2)); }
	inline StringU5BU5D_t4054002952* get_dialogue_2() const { return ___dialogue_2; }
	inline StringU5BU5D_t4054002952** get_address_of_dialogue_2() { return &___dialogue_2; }
	inline void set_dialogue_2(StringU5BU5D_t4054002952* value)
	{
		___dialogue_2 = value;
		Il2CppCodeGenWriteBarrier(&___dialogue_2, value);
	}

	inline static int32_t get_offset_of_batteryPickUp_3() { return static_cast<int32_t>(offsetof(TutorialText_t773282251, ___batteryPickUp_3)); }
	inline bool get_batteryPickUp_3() const { return ___batteryPickUp_3; }
	inline bool* get_address_of_batteryPickUp_3() { return &___batteryPickUp_3; }
	inline void set_batteryPickUp_3(bool value)
	{
		___batteryPickUp_3 = value;
	}

	inline static int32_t get_offset_of_batteryDrain_4() { return static_cast<int32_t>(offsetof(TutorialText_t773282251, ___batteryDrain_4)); }
	inline bool get_batteryDrain_4() const { return ___batteryDrain_4; }
	inline bool* get_address_of_batteryDrain_4() { return &___batteryDrain_4; }
	inline void set_batteryDrain_4(bool value)
	{
		___batteryDrain_4 = value;
	}

	inline static int32_t get_offset_of_attackType_5() { return static_cast<int32_t>(offsetof(TutorialText_t773282251, ___attackType_5)); }
	inline bool get_attackType_5() const { return ___attackType_5; }
	inline bool* get_address_of_attackType_5() { return &___attackType_5; }
	inline void set_attackType_5(bool value)
	{
		___attackType_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
