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
// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.UI.Button
struct Button_t3896396478;
// UnityEngine.Light[]
struct LightU5BU5D_t2617847237;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelSelectController
struct  LevelSelectController_t2303070524  : public MonoBehaviour_t667441552
{
public:
	// System.String[] LevelSelectController::filmTitles
	StringU5BU5D_t4054002952* ___filmTitles_2;
	// UnityEngine.UI.Text LevelSelectController::titleText
	Text_t9039225 * ___titleText_3;
	// UnityEngine.UI.Button LevelSelectController::playButton
	Button_t3896396478 * ___playButton_4;
	// System.Int32 LevelSelectController::filmTitleCount
	int32_t ___filmTitleCount_5;
	// System.Int32 LevelSelectController::currentFilm
	int32_t ___currentFilm_6;
	// System.Boolean LevelSelectController::canSpin
	bool ___canSpin_7;
	// UnityEngine.Light[] LevelSelectController::lights
	LightU5BU5D_t2617847237* ___lights_8;

public:
	inline static int32_t get_offset_of_filmTitles_2() { return static_cast<int32_t>(offsetof(LevelSelectController_t2303070524, ___filmTitles_2)); }
	inline StringU5BU5D_t4054002952* get_filmTitles_2() const { return ___filmTitles_2; }
	inline StringU5BU5D_t4054002952** get_address_of_filmTitles_2() { return &___filmTitles_2; }
	inline void set_filmTitles_2(StringU5BU5D_t4054002952* value)
	{
		___filmTitles_2 = value;
		Il2CppCodeGenWriteBarrier(&___filmTitles_2, value);
	}

	inline static int32_t get_offset_of_titleText_3() { return static_cast<int32_t>(offsetof(LevelSelectController_t2303070524, ___titleText_3)); }
	inline Text_t9039225 * get_titleText_3() const { return ___titleText_3; }
	inline Text_t9039225 ** get_address_of_titleText_3() { return &___titleText_3; }
	inline void set_titleText_3(Text_t9039225 * value)
	{
		___titleText_3 = value;
		Il2CppCodeGenWriteBarrier(&___titleText_3, value);
	}

	inline static int32_t get_offset_of_playButton_4() { return static_cast<int32_t>(offsetof(LevelSelectController_t2303070524, ___playButton_4)); }
	inline Button_t3896396478 * get_playButton_4() const { return ___playButton_4; }
	inline Button_t3896396478 ** get_address_of_playButton_4() { return &___playButton_4; }
	inline void set_playButton_4(Button_t3896396478 * value)
	{
		___playButton_4 = value;
		Il2CppCodeGenWriteBarrier(&___playButton_4, value);
	}

	inline static int32_t get_offset_of_filmTitleCount_5() { return static_cast<int32_t>(offsetof(LevelSelectController_t2303070524, ___filmTitleCount_5)); }
	inline int32_t get_filmTitleCount_5() const { return ___filmTitleCount_5; }
	inline int32_t* get_address_of_filmTitleCount_5() { return &___filmTitleCount_5; }
	inline void set_filmTitleCount_5(int32_t value)
	{
		___filmTitleCount_5 = value;
	}

	inline static int32_t get_offset_of_currentFilm_6() { return static_cast<int32_t>(offsetof(LevelSelectController_t2303070524, ___currentFilm_6)); }
	inline int32_t get_currentFilm_6() const { return ___currentFilm_6; }
	inline int32_t* get_address_of_currentFilm_6() { return &___currentFilm_6; }
	inline void set_currentFilm_6(int32_t value)
	{
		___currentFilm_6 = value;
	}

	inline static int32_t get_offset_of_canSpin_7() { return static_cast<int32_t>(offsetof(LevelSelectController_t2303070524, ___canSpin_7)); }
	inline bool get_canSpin_7() const { return ___canSpin_7; }
	inline bool* get_address_of_canSpin_7() { return &___canSpin_7; }
	inline void set_canSpin_7(bool value)
	{
		___canSpin_7 = value;
	}

	inline static int32_t get_offset_of_lights_8() { return static_cast<int32_t>(offsetof(LevelSelectController_t2303070524, ___lights_8)); }
	inline LightU5BU5D_t2617847237* get_lights_8() const { return ___lights_8; }
	inline LightU5BU5D_t2617847237** get_address_of_lights_8() { return &___lights_8; }
	inline void set_lights_8(LightU5BU5D_t2617847237* value)
	{
		___lights_8 = value;
		Il2CppCodeGenWriteBarrier(&___lights_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
