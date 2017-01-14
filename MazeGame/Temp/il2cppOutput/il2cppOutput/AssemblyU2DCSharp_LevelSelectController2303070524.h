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
	// GlitchEffect LevelSelectController::glitchEffect
	GlitchEffect_t2030701382 * ___glitchEffect_5;
	// MorePPEffects.ColoredRays LevelSelectController::crtEffect
	ColoredRays_t2235673737 * ___crtEffect_6;
	// System.Int32 LevelSelectController::filmTitleCount
	int32_t ___filmTitleCount_7;
	// System.Int32 LevelSelectController::currentFilm
	int32_t ___currentFilm_8;
	// System.Boolean LevelSelectController::canSpin
	bool ___canSpin_9;
	// UnityEngine.Light[] LevelSelectController::lights
	LightU5BU5D_t2617847237* ___lights_10;
	// UnityEngine.GameObject LevelSelectController::levelSelectScreen
	GameObject_t3674682005 * ___levelSelectScreen_11;
	// UnityEngine.AudioSource LevelSelectController::aSource
	AudioSource_t1740077639 * ___aSource_12;
	// UnityEngine.AudioClip LevelSelectController::playButtonClip
	AudioClip_t794140988 * ___playButtonClip_13;
	// UnityEngine.AudioClip LevelSelectController::fwdbackButtonClip
	AudioClip_t794140988 * ___fwdbackButtonClip_14;

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

	inline static int32_t get_offset_of_glitchEffect_5() { return static_cast<int32_t>(offsetof(LevelSelectController_t2303070524, ___glitchEffect_5)); }
	inline GlitchEffect_t2030701382 * get_glitchEffect_5() const { return ___glitchEffect_5; }
	inline GlitchEffect_t2030701382 ** get_address_of_glitchEffect_5() { return &___glitchEffect_5; }
	inline void set_glitchEffect_5(GlitchEffect_t2030701382 * value)
	{
		___glitchEffect_5 = value;
		Il2CppCodeGenWriteBarrier(&___glitchEffect_5, value);
	}

	inline static int32_t get_offset_of_crtEffect_6() { return static_cast<int32_t>(offsetof(LevelSelectController_t2303070524, ___crtEffect_6)); }
	inline ColoredRays_t2235673737 * get_crtEffect_6() const { return ___crtEffect_6; }
	inline ColoredRays_t2235673737 ** get_address_of_crtEffect_6() { return &___crtEffect_6; }
	inline void set_crtEffect_6(ColoredRays_t2235673737 * value)
	{
		___crtEffect_6 = value;
		Il2CppCodeGenWriteBarrier(&___crtEffect_6, value);
	}

	inline static int32_t get_offset_of_filmTitleCount_7() { return static_cast<int32_t>(offsetof(LevelSelectController_t2303070524, ___filmTitleCount_7)); }
	inline int32_t get_filmTitleCount_7() const { return ___filmTitleCount_7; }
	inline int32_t* get_address_of_filmTitleCount_7() { return &___filmTitleCount_7; }
	inline void set_filmTitleCount_7(int32_t value)
	{
		___filmTitleCount_7 = value;
	}

	inline static int32_t get_offset_of_currentFilm_8() { return static_cast<int32_t>(offsetof(LevelSelectController_t2303070524, ___currentFilm_8)); }
	inline int32_t get_currentFilm_8() const { return ___currentFilm_8; }
	inline int32_t* get_address_of_currentFilm_8() { return &___currentFilm_8; }
	inline void set_currentFilm_8(int32_t value)
	{
		___currentFilm_8 = value;
	}

	inline static int32_t get_offset_of_canSpin_9() { return static_cast<int32_t>(offsetof(LevelSelectController_t2303070524, ___canSpin_9)); }
	inline bool get_canSpin_9() const { return ___canSpin_9; }
	inline bool* get_address_of_canSpin_9() { return &___canSpin_9; }
	inline void set_canSpin_9(bool value)
	{
		___canSpin_9 = value;
	}

	inline static int32_t get_offset_of_lights_10() { return static_cast<int32_t>(offsetof(LevelSelectController_t2303070524, ___lights_10)); }
	inline LightU5BU5D_t2617847237* get_lights_10() const { return ___lights_10; }
	inline LightU5BU5D_t2617847237** get_address_of_lights_10() { return &___lights_10; }
	inline void set_lights_10(LightU5BU5D_t2617847237* value)
	{
		___lights_10 = value;
		Il2CppCodeGenWriteBarrier(&___lights_10, value);
	}

	inline static int32_t get_offset_of_levelSelectScreen_11() { return static_cast<int32_t>(offsetof(LevelSelectController_t2303070524, ___levelSelectScreen_11)); }
	inline GameObject_t3674682005 * get_levelSelectScreen_11() const { return ___levelSelectScreen_11; }
	inline GameObject_t3674682005 ** get_address_of_levelSelectScreen_11() { return &___levelSelectScreen_11; }
	inline void set_levelSelectScreen_11(GameObject_t3674682005 * value)
	{
		___levelSelectScreen_11 = value;
		Il2CppCodeGenWriteBarrier(&___levelSelectScreen_11, value);
	}

	inline static int32_t get_offset_of_aSource_12() { return static_cast<int32_t>(offsetof(LevelSelectController_t2303070524, ___aSource_12)); }
	inline AudioSource_t1740077639 * get_aSource_12() const { return ___aSource_12; }
	inline AudioSource_t1740077639 ** get_address_of_aSource_12() { return &___aSource_12; }
	inline void set_aSource_12(AudioSource_t1740077639 * value)
	{
		___aSource_12 = value;
		Il2CppCodeGenWriteBarrier(&___aSource_12, value);
	}

	inline static int32_t get_offset_of_playButtonClip_13() { return static_cast<int32_t>(offsetof(LevelSelectController_t2303070524, ___playButtonClip_13)); }
	inline AudioClip_t794140988 * get_playButtonClip_13() const { return ___playButtonClip_13; }
	inline AudioClip_t794140988 ** get_address_of_playButtonClip_13() { return &___playButtonClip_13; }
	inline void set_playButtonClip_13(AudioClip_t794140988 * value)
	{
		___playButtonClip_13 = value;
		Il2CppCodeGenWriteBarrier(&___playButtonClip_13, value);
	}

	inline static int32_t get_offset_of_fwdbackButtonClip_14() { return static_cast<int32_t>(offsetof(LevelSelectController_t2303070524, ___fwdbackButtonClip_14)); }
	inline AudioClip_t794140988 * get_fwdbackButtonClip_14() const { return ___fwdbackButtonClip_14; }
	inline AudioClip_t794140988 ** get_address_of_fwdbackButtonClip_14() { return &___fwdbackButtonClip_14; }
	inline void set_fwdbackButtonClip_14(AudioClip_t794140988 * value)
	{
		___fwdbackButtonClip_14 = value;
		Il2CppCodeGenWriteBarrier(&___fwdbackButtonClip_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
