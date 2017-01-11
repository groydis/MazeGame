#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite[]
struct SpriteU5BU5D_t2761310900;
// UnityEngine.UI.Image
struct Image_t538875265;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BatteryGUI
struct  BatteryGUI_t3859835918  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Sprite[] BatteryGUI::batterySprites
	SpriteU5BU5D_t2761310900* ___batterySprites_2;
	// UnityEngine.UI.Image BatteryGUI::batteryImage
	Image_t538875265 * ___batteryImage_3;
	// System.Boolean BatteryGUI::flickerBatteryGui
	bool ___flickerBatteryGui_4;
	// System.Boolean BatteryGUI::lowBatteryBool
	bool ___lowBatteryBool_5;

public:
	inline static int32_t get_offset_of_batterySprites_2() { return static_cast<int32_t>(offsetof(BatteryGUI_t3859835918, ___batterySprites_2)); }
	inline SpriteU5BU5D_t2761310900* get_batterySprites_2() const { return ___batterySprites_2; }
	inline SpriteU5BU5D_t2761310900** get_address_of_batterySprites_2() { return &___batterySprites_2; }
	inline void set_batterySprites_2(SpriteU5BU5D_t2761310900* value)
	{
		___batterySprites_2 = value;
		Il2CppCodeGenWriteBarrier(&___batterySprites_2, value);
	}

	inline static int32_t get_offset_of_batteryImage_3() { return static_cast<int32_t>(offsetof(BatteryGUI_t3859835918, ___batteryImage_3)); }
	inline Image_t538875265 * get_batteryImage_3() const { return ___batteryImage_3; }
	inline Image_t538875265 ** get_address_of_batteryImage_3() { return &___batteryImage_3; }
	inline void set_batteryImage_3(Image_t538875265 * value)
	{
		___batteryImage_3 = value;
		Il2CppCodeGenWriteBarrier(&___batteryImage_3, value);
	}

	inline static int32_t get_offset_of_flickerBatteryGui_4() { return static_cast<int32_t>(offsetof(BatteryGUI_t3859835918, ___flickerBatteryGui_4)); }
	inline bool get_flickerBatteryGui_4() const { return ___flickerBatteryGui_4; }
	inline bool* get_address_of_flickerBatteryGui_4() { return &___flickerBatteryGui_4; }
	inline void set_flickerBatteryGui_4(bool value)
	{
		___flickerBatteryGui_4 = value;
	}

	inline static int32_t get_offset_of_lowBatteryBool_5() { return static_cast<int32_t>(offsetof(BatteryGUI_t3859835918, ___lowBatteryBool_5)); }
	inline bool get_lowBatteryBool_5() const { return ___lowBatteryBool_5; }
	inline bool* get_address_of_lowBatteryBool_5() { return &___lowBatteryBool_5; }
	inline void set_lowBatteryBool_5(bool value)
	{
		___lowBatteryBool_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
