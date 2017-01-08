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
// GlitchEffect
struct GlitchEffect_t2030701382;
// CRT
struct CRT_t67013;
// UnityStandardAssets.ImageEffects.ContrastEnhance
struct ContrastEnhance_t3797097022;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.UI.Image
struct Image_t538875265;
// GameManager
struct GameManager_t2369589051;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_SceneManagement_Scene1080795294.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2369589051  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject GameManager::playButton
	GameObject_t3674682005 * ___playButton_4;
	// UnityEngine.GameObject GameManager::pauseButton
	GameObject_t3674682005 * ___pauseButton_5;
	// UnityEngine.GameObject GameManager::restartButton
	GameObject_t3674682005 * ___restartButton_6;
	// UnityEngine.GameObject GameManager::pauseRecText
	GameObject_t3674682005 * ___pauseRecText_7;
	// UnityEngine.GameObject GameManager::batteryImage
	GameObject_t3674682005 * ___batteryImage_8;
	// UnityEngine.GameObject GameManager::sugarRushText
	GameObject_t3674682005 * ___sugarRushText_9;
	// GlitchEffect GameManager::glitchEffect
	GlitchEffect_t2030701382 * ___glitchEffect_10;
	// CRT GameManager::crtEffect
	CRT_t67013 * ___crtEffect_11;
	// UnityStandardAssets.ImageEffects.ContrastEnhance GameManager::contrastEnhance
	ContrastEnhance_t3797097022 * ___contrastEnhance_12;
	// UnityEngine.SceneManagement.Scene GameManager::currentScene
	Scene_t1080795294  ___currentScene_13;
	// System.String GameManager::currentSceneName
	String_t* ___currentSceneName_14;
	// System.Single GameManager::countdownValue
	float ___countdownValue_15;
	// System.Single GameManager::currCountDownValue
	float ___currCountDownValue_16;
	// UnityEngine.UI.Text GameManager::startText
	Text_t9039225 * ___startText_17;
	// UnityEngine.UI.Text GameManager::pauseRecTextText
	Text_t9039225 * ___pauseRecTextText_18;
	// UnityEngine.UI.Image GameManager::recImage
	Image_t538875265 * ___recImage_19;

public:
	inline static int32_t get_offset_of_playButton_4() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___playButton_4)); }
	inline GameObject_t3674682005 * get_playButton_4() const { return ___playButton_4; }
	inline GameObject_t3674682005 ** get_address_of_playButton_4() { return &___playButton_4; }
	inline void set_playButton_4(GameObject_t3674682005 * value)
	{
		___playButton_4 = value;
		Il2CppCodeGenWriteBarrier(&___playButton_4, value);
	}

	inline static int32_t get_offset_of_pauseButton_5() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___pauseButton_5)); }
	inline GameObject_t3674682005 * get_pauseButton_5() const { return ___pauseButton_5; }
	inline GameObject_t3674682005 ** get_address_of_pauseButton_5() { return &___pauseButton_5; }
	inline void set_pauseButton_5(GameObject_t3674682005 * value)
	{
		___pauseButton_5 = value;
		Il2CppCodeGenWriteBarrier(&___pauseButton_5, value);
	}

	inline static int32_t get_offset_of_restartButton_6() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___restartButton_6)); }
	inline GameObject_t3674682005 * get_restartButton_6() const { return ___restartButton_6; }
	inline GameObject_t3674682005 ** get_address_of_restartButton_6() { return &___restartButton_6; }
	inline void set_restartButton_6(GameObject_t3674682005 * value)
	{
		___restartButton_6 = value;
		Il2CppCodeGenWriteBarrier(&___restartButton_6, value);
	}

	inline static int32_t get_offset_of_pauseRecText_7() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___pauseRecText_7)); }
	inline GameObject_t3674682005 * get_pauseRecText_7() const { return ___pauseRecText_7; }
	inline GameObject_t3674682005 ** get_address_of_pauseRecText_7() { return &___pauseRecText_7; }
	inline void set_pauseRecText_7(GameObject_t3674682005 * value)
	{
		___pauseRecText_7 = value;
		Il2CppCodeGenWriteBarrier(&___pauseRecText_7, value);
	}

	inline static int32_t get_offset_of_batteryImage_8() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___batteryImage_8)); }
	inline GameObject_t3674682005 * get_batteryImage_8() const { return ___batteryImage_8; }
	inline GameObject_t3674682005 ** get_address_of_batteryImage_8() { return &___batteryImage_8; }
	inline void set_batteryImage_8(GameObject_t3674682005 * value)
	{
		___batteryImage_8 = value;
		Il2CppCodeGenWriteBarrier(&___batteryImage_8, value);
	}

	inline static int32_t get_offset_of_sugarRushText_9() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___sugarRushText_9)); }
	inline GameObject_t3674682005 * get_sugarRushText_9() const { return ___sugarRushText_9; }
	inline GameObject_t3674682005 ** get_address_of_sugarRushText_9() { return &___sugarRushText_9; }
	inline void set_sugarRushText_9(GameObject_t3674682005 * value)
	{
		___sugarRushText_9 = value;
		Il2CppCodeGenWriteBarrier(&___sugarRushText_9, value);
	}

	inline static int32_t get_offset_of_glitchEffect_10() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___glitchEffect_10)); }
	inline GlitchEffect_t2030701382 * get_glitchEffect_10() const { return ___glitchEffect_10; }
	inline GlitchEffect_t2030701382 ** get_address_of_glitchEffect_10() { return &___glitchEffect_10; }
	inline void set_glitchEffect_10(GlitchEffect_t2030701382 * value)
	{
		___glitchEffect_10 = value;
		Il2CppCodeGenWriteBarrier(&___glitchEffect_10, value);
	}

	inline static int32_t get_offset_of_crtEffect_11() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___crtEffect_11)); }
	inline CRT_t67013 * get_crtEffect_11() const { return ___crtEffect_11; }
	inline CRT_t67013 ** get_address_of_crtEffect_11() { return &___crtEffect_11; }
	inline void set_crtEffect_11(CRT_t67013 * value)
	{
		___crtEffect_11 = value;
		Il2CppCodeGenWriteBarrier(&___crtEffect_11, value);
	}

	inline static int32_t get_offset_of_contrastEnhance_12() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___contrastEnhance_12)); }
	inline ContrastEnhance_t3797097022 * get_contrastEnhance_12() const { return ___contrastEnhance_12; }
	inline ContrastEnhance_t3797097022 ** get_address_of_contrastEnhance_12() { return &___contrastEnhance_12; }
	inline void set_contrastEnhance_12(ContrastEnhance_t3797097022 * value)
	{
		___contrastEnhance_12 = value;
		Il2CppCodeGenWriteBarrier(&___contrastEnhance_12, value);
	}

	inline static int32_t get_offset_of_currentScene_13() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___currentScene_13)); }
	inline Scene_t1080795294  get_currentScene_13() const { return ___currentScene_13; }
	inline Scene_t1080795294 * get_address_of_currentScene_13() { return &___currentScene_13; }
	inline void set_currentScene_13(Scene_t1080795294  value)
	{
		___currentScene_13 = value;
	}

	inline static int32_t get_offset_of_currentSceneName_14() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___currentSceneName_14)); }
	inline String_t* get_currentSceneName_14() const { return ___currentSceneName_14; }
	inline String_t** get_address_of_currentSceneName_14() { return &___currentSceneName_14; }
	inline void set_currentSceneName_14(String_t* value)
	{
		___currentSceneName_14 = value;
		Il2CppCodeGenWriteBarrier(&___currentSceneName_14, value);
	}

	inline static int32_t get_offset_of_countdownValue_15() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___countdownValue_15)); }
	inline float get_countdownValue_15() const { return ___countdownValue_15; }
	inline float* get_address_of_countdownValue_15() { return &___countdownValue_15; }
	inline void set_countdownValue_15(float value)
	{
		___countdownValue_15 = value;
	}

	inline static int32_t get_offset_of_currCountDownValue_16() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___currCountDownValue_16)); }
	inline float get_currCountDownValue_16() const { return ___currCountDownValue_16; }
	inline float* get_address_of_currCountDownValue_16() { return &___currCountDownValue_16; }
	inline void set_currCountDownValue_16(float value)
	{
		___currCountDownValue_16 = value;
	}

	inline static int32_t get_offset_of_startText_17() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___startText_17)); }
	inline Text_t9039225 * get_startText_17() const { return ___startText_17; }
	inline Text_t9039225 ** get_address_of_startText_17() { return &___startText_17; }
	inline void set_startText_17(Text_t9039225 * value)
	{
		___startText_17 = value;
		Il2CppCodeGenWriteBarrier(&___startText_17, value);
	}

	inline static int32_t get_offset_of_pauseRecTextText_18() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___pauseRecTextText_18)); }
	inline Text_t9039225 * get_pauseRecTextText_18() const { return ___pauseRecTextText_18; }
	inline Text_t9039225 ** get_address_of_pauseRecTextText_18() { return &___pauseRecTextText_18; }
	inline void set_pauseRecTextText_18(Text_t9039225 * value)
	{
		___pauseRecTextText_18 = value;
		Il2CppCodeGenWriteBarrier(&___pauseRecTextText_18, value);
	}

	inline static int32_t get_offset_of_recImage_19() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___recImage_19)); }
	inline Image_t538875265 * get_recImage_19() const { return ___recImage_19; }
	inline Image_t538875265 ** get_address_of_recImage_19() { return &___recImage_19; }
	inline void set_recImage_19(Image_t538875265 * value)
	{
		___recImage_19 = value;
		Il2CppCodeGenWriteBarrier(&___recImage_19, value);
	}
};

struct GameManager_t2369589051_StaticFields
{
public:
	// System.Boolean GameManager::pauseGame
	bool ___pauseGame_2;
	// System.Single GameManager::saveBattery
	float ___saveBattery_3;
	// GameManager GameManager::<Instance>k__BackingField
	GameManager_t2369589051 * ___U3CInstanceU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_pauseGame_2() { return static_cast<int32_t>(offsetof(GameManager_t2369589051_StaticFields, ___pauseGame_2)); }
	inline bool get_pauseGame_2() const { return ___pauseGame_2; }
	inline bool* get_address_of_pauseGame_2() { return &___pauseGame_2; }
	inline void set_pauseGame_2(bool value)
	{
		___pauseGame_2 = value;
	}

	inline static int32_t get_offset_of_saveBattery_3() { return static_cast<int32_t>(offsetof(GameManager_t2369589051_StaticFields, ___saveBattery_3)); }
	inline float get_saveBattery_3() const { return ___saveBattery_3; }
	inline float* get_address_of_saveBattery_3() { return &___saveBattery_3; }
	inline void set_saveBattery_3(float value)
	{
		___saveBattery_3 = value;
	}

	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(GameManager_t2369589051_StaticFields, ___U3CInstanceU3Ek__BackingField_20)); }
	inline GameManager_t2369589051 * get_U3CInstanceU3Ek__BackingField_20() const { return ___U3CInstanceU3Ek__BackingField_20; }
	inline GameManager_t2369589051 ** get_address_of_U3CInstanceU3Ek__BackingField_20() { return &___U3CInstanceU3Ek__BackingField_20; }
	inline void set_U3CInstanceU3Ek__BackingField_20(GameManager_t2369589051 * value)
	{
		___U3CInstanceU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CInstanceU3Ek__BackingField_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
