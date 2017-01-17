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
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t3726781579;
// GlitchEffect
struct GlitchEffect_t2030701382;
// MorePPEffects.ColoredRays
struct ColoredRays_t2235673737;
// UnityEngine.Light[]
struct LightU5BU5D_t2617847237;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// UnityEngine.AudioClip
struct AudioClip_t794140988;

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
	// System.Collections.Generic.List`1<System.String> LevelSelectController::scenarioOneLevels
	List_1_t1375417109 * ___scenarioOneLevels_5;
	// UnityEngine.UI.Button[] LevelSelectController::levelButtonsScenarioOne
	ButtonU5BU5D_t3726781579* ___levelButtonsScenarioOne_6;
	// GlitchEffect LevelSelectController::glitchEffect
	GlitchEffect_t2030701382 * ___glitchEffect_7;
	// MorePPEffects.ColoredRays LevelSelectController::crtEffect
	ColoredRays_t2235673737 * ___crtEffect_8;
	// System.Int32 LevelSelectController::filmTitleCount
	int32_t ___filmTitleCount_9;
	// System.Int32 LevelSelectController::currentFilm
	int32_t ___currentFilm_10;
	// System.Boolean LevelSelectController::canSpin
	bool ___canSpin_11;
	// UnityEngine.Light[] LevelSelectController::lights
	LightU5BU5D_t2617847237* ___lights_12;
	// UnityEngine.GameObject LevelSelectController::levelSelectScreen
	GameObject_t3674682005 * ___levelSelectScreen_13;
	// UnityEngine.GameObject LevelSelectController::waitText
	GameObject_t3674682005 * ___waitText_14;
	// System.Boolean LevelSelectController::canPlay
	bool ___canPlay_15;
	// UnityEngine.AudioSource LevelSelectController::aSource
	AudioSource_t1740077639 * ___aSource_16;
	// UnityEngine.AudioClip LevelSelectController::playButtonClip
	AudioClip_t794140988 * ___playButtonClip_17;
	// UnityEngine.AudioClip LevelSelectController::fwdbackButtonClip
	AudioClip_t794140988 * ___fwdbackButtonClip_18;

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

	inline static int32_t get_offset_of_scenarioOneLevels_5() { return static_cast<int32_t>(offsetof(LevelSelectController_t2303070524, ___scenarioOneLevels_5)); }
	inline List_1_t1375417109 * get_scenarioOneLevels_5() const { return ___scenarioOneLevels_5; }
	inline List_1_t1375417109 ** get_address_of_scenarioOneLevels_5() { return &___scenarioOneLevels_5; }
	inline void set_scenarioOneLevels_5(List_1_t1375417109 * value)
	{
		___scenarioOneLevels_5 = value;
		Il2CppCodeGenWriteBarrier(&___scenarioOneLevels_5, value);
	}

	inline static int32_t get_offset_of_levelButtonsScenarioOne_6() { return static_cast<int32_t>(offsetof(LevelSelectController_t2303070524, ___levelButtonsScenarioOne_6)); }
	inline ButtonU5BU5D_t3726781579* get_levelButtonsScenarioOne_6() const { return ___levelButtonsScenarioOne_6; }
	inline ButtonU5BU5D_t3726781579** get_address_of_levelButtonsScenarioOne_6() { return &___levelButtonsScenarioOne_6; }
	inline void set_levelButtonsScenarioOne_6(ButtonU5BU5D_t3726781579* value)
	{
		___levelButtonsScenarioOne_6 = value;
		Il2CppCodeGenWriteBarrier(&___levelButtonsScenarioOne_6, value);
	}

	inline static int32_t get_offset_of_glitchEffect_7() { return static_cast<int32_t>(offsetof(LevelSelectController_t2303070524, ___glitchEffect_7)); }
	inline GlitchEffect_t2030701382 * get_glitchEffect_7() const { return ___glitchEffect_7; }
	inline GlitchEffect_t2030701382 ** get_address_of_glitchEffect_7() { return &___glitchEffect_7; }
	inline void set_glitchEffect_7(GlitchEffect_t2030701382 * value)
	{
		___glitchEffect_7 = value;
		Il2CppCodeGenWriteBarrier(&___glitchEffect_7, value);
	}

	inline static int32_t get_offset_of_crtEffect_8() { return static_cast<int32_t>(offsetof(LevelSelectController_t2303070524, ___crtEffect_8)); }
	inline ColoredRays_t2235673737 * get_crtEffect_8() const { return ___crtEffect_8; }
	inline ColoredRays_t2235673737 ** get_address_of_crtEffect_8() { return &___crtEffect_8; }
	inline void set_crtEffect_8(ColoredRays_t2235673737 * value)
	{
		___crtEffect_8 = value;
		Il2CppCodeGenWriteBarrier(&___crtEffect_8, value);
	}

	inline static int32_t get_offset_of_filmTitleCount_9() { return static_cast<int32_t>(offsetof(LevelSelectController_t2303070524, ___filmTitleCount_9)); }
	inline int32_t get_filmTitleCount_9() const { return ___filmTitleCount_9; }
	inline int32_t* get_address_of_filmTitleCount_9() { return &___filmTitleCount_9; }
	inline void set_filmTitleCount_9(int32_t value)
	{
		___filmTitleCount_9 = value;
	}

	inline static int32_t get_offset_of_currentFilm_10() { return static_cast<int32_t>(offsetof(LevelSelectController_t2303070524, ___currentFilm_10)); }
	inline int32_t get_currentFilm_10() const { return ___currentFilm_10; }
	inline int32_t* get_address_of_currentFilm_10() { return &___currentFilm_10; }
	inline void set_currentFilm_10(int32_t value)
	{
		___currentFilm_10 = value;
	}

	inline static int32_t get_offset_of_canSpin_11() { return static_cast<int32_t>(offsetof(LevelSelectController_t2303070524, ___canSpin_11)); }
	inline bool get_canSpin_11() const { return ___canSpin_11; }
	inline bool* get_address_of_canSpin_11() { return &___canSpin_11; }
	inline void set_canSpin_11(bool value)
	{
		___canSpin_11 = value;
	}

	inline static int32_t get_offset_of_lights_12() { return static_cast<int32_t>(offsetof(LevelSelectController_t2303070524, ___lights_12)); }
	inline LightU5BU5D_t2617847237* get_lights_12() const { return ___lights_12; }
	inline LightU5BU5D_t2617847237** get_address_of_lights_12() { return &___lights_12; }
	inline void set_lights_12(LightU5BU5D_t2617847237* value)
	{
		___lights_12 = value;
		Il2CppCodeGenWriteBarrier(&___lights_12, value);
	}

	inline static int32_t get_offset_of_levelSelectScreen_13() { return static_cast<int32_t>(offsetof(LevelSelectController_t2303070524, ___levelSelectScreen_13)); }
	inline GameObject_t3674682005 * get_levelSelectScreen_13() const { return ___levelSelectScreen_13; }
	inline GameObject_t3674682005 ** get_address_of_levelSelectScreen_13() { return &___levelSelectScreen_13; }
	inline void set_levelSelectScreen_13(GameObject_t3674682005 * value)
	{
		___levelSelectScreen_13 = value;
		Il2CppCodeGenWriteBarrier(&___levelSelectScreen_13, value);
	}

	inline static int32_t get_offset_of_waitText_14() { return static_cast<int32_t>(offsetof(LevelSelectController_t2303070524, ___waitText_14)); }
	inline GameObject_t3674682005 * get_waitText_14() const { return ___waitText_14; }
	inline GameObject_t3674682005 ** get_address_of_waitText_14() { return &___waitText_14; }
	inline void set_waitText_14(GameObject_t3674682005 * value)
	{
		___waitText_14 = value;
		Il2CppCodeGenWriteBarrier(&___waitText_14, value);
	}

	inline static int32_t get_offset_of_canPlay_15() { return static_cast<int32_t>(offsetof(LevelSelectController_t2303070524, ___canPlay_15)); }
	inline bool get_canPlay_15() const { return ___canPlay_15; }
	inline bool* get_address_of_canPlay_15() { return &___canPlay_15; }
	inline void set_canPlay_15(bool value)
	{
		___canPlay_15 = value;
	}

	inline static int32_t get_offset_of_aSource_16() { return static_cast<int32_t>(offsetof(LevelSelectController_t2303070524, ___aSource_16)); }
	inline AudioSource_t1740077639 * get_aSource_16() const { return ___aSource_16; }
	inline AudioSource_t1740077639 ** get_address_of_aSource_16() { return &___aSource_16; }
	inline void set_aSource_16(AudioSource_t1740077639 * value)
	{
		___aSource_16 = value;
		Il2CppCodeGenWriteBarrier(&___aSource_16, value);
	}

	inline static int32_t get_offset_of_playButtonClip_17() { return static_cast<int32_t>(offsetof(LevelSelectController_t2303070524, ___playButtonClip_17)); }
	inline AudioClip_t794140988 * get_playButtonClip_17() const { return ___playButtonClip_17; }
	inline AudioClip_t794140988 ** get_address_of_playButtonClip_17() { return &___playButtonClip_17; }
	inline void set_playButtonClip_17(AudioClip_t794140988 * value)
	{
		___playButtonClip_17 = value;
		Il2CppCodeGenWriteBarrier(&___playButtonClip_17, value);
	}

	inline static int32_t get_offset_of_fwdbackButtonClip_18() { return static_cast<int32_t>(offsetof(LevelSelectController_t2303070524, ___fwdbackButtonClip_18)); }
	inline AudioClip_t794140988 * get_fwdbackButtonClip_18() const { return ___fwdbackButtonClip_18; }
	inline AudioClip_t794140988 ** get_address_of_fwdbackButtonClip_18() { return &___fwdbackButtonClip_18; }
	inline void set_fwdbackButtonClip_18(AudioClip_t794140988 * value)
	{
		___fwdbackButtonClip_18 = value;
		Il2CppCodeGenWriteBarrier(&___fwdbackButtonClip_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
