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
// UnityEngine.UI.Text
struct Text_t9039225;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Entrance
struct  Entrance_t2265247446  : public MonoBehaviour_t667441552
{
public:
	// System.Single Entrance::countdownValue
	float ___countdownValue_2;
	// UnityEngine.GameObject Entrance::playerPrefab
	GameObject_t3674682005 * ___playerPrefab_3;
	// System.Single Entrance::currCountDownValue
	float ___currCountDownValue_4;
	// UnityEngine.UI.Text Entrance::startText
	Text_t9039225 * ___startText_5;

public:
	inline static int32_t get_offset_of_countdownValue_2() { return static_cast<int32_t>(offsetof(Entrance_t2265247446, ___countdownValue_2)); }
	inline float get_countdownValue_2() const { return ___countdownValue_2; }
	inline float* get_address_of_countdownValue_2() { return &___countdownValue_2; }
	inline void set_countdownValue_2(float value)
	{
		___countdownValue_2 = value;
	}

	inline static int32_t get_offset_of_playerPrefab_3() { return static_cast<int32_t>(offsetof(Entrance_t2265247446, ___playerPrefab_3)); }
	inline GameObject_t3674682005 * get_playerPrefab_3() const { return ___playerPrefab_3; }
	inline GameObject_t3674682005 ** get_address_of_playerPrefab_3() { return &___playerPrefab_3; }
	inline void set_playerPrefab_3(GameObject_t3674682005 * value)
	{
		___playerPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___playerPrefab_3, value);
	}

	inline static int32_t get_offset_of_currCountDownValue_4() { return static_cast<int32_t>(offsetof(Entrance_t2265247446, ___currCountDownValue_4)); }
	inline float get_currCountDownValue_4() const { return ___currCountDownValue_4; }
	inline float* get_address_of_currCountDownValue_4() { return &___currCountDownValue_4; }
	inline void set_currCountDownValue_4(float value)
	{
		___currCountDownValue_4 = value;
	}

	inline static int32_t get_offset_of_startText_5() { return static_cast<int32_t>(offsetof(Entrance_t2265247446, ___startText_5)); }
	inline Text_t9039225 * get_startText_5() const { return ___startText_5; }
	inline Text_t9039225 ** get_address_of_startText_5() { return &___startText_5; }
	inline void set_startText_5(Text_t9039225 * value)
	{
		___startText_5 = value;
		Il2CppCodeGenWriteBarrier(&___startText_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
