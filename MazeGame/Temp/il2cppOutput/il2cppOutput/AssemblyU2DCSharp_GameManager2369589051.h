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
// System.String
struct String_t;
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
	// UnityEngine.GameObject GameManager::pauseText
	GameObject_t3674682005 * ___pauseText_4;
	// GlitchEffect GameManager::glitchEffect
	GlitchEffect_t2030701382 * ___glitchEffect_5;
	// CRT GameManager::crtEffect
	CRT_t67013 * ___crtEffect_6;
	// System.Single GameManager::intensity
	float ___intensity_7;
	// UnityEngine.SceneManagement.Scene GameManager::currentScene
	Scene_t1080795294  ___currentScene_8;
	// System.String GameManager::currentSceneName
	String_t* ___currentSceneName_9;

public:
	inline static int32_t get_offset_of_pauseText_4() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___pauseText_4)); }
	inline GameObject_t3674682005 * get_pauseText_4() const { return ___pauseText_4; }
	inline GameObject_t3674682005 ** get_address_of_pauseText_4() { return &___pauseText_4; }
	inline void set_pauseText_4(GameObject_t3674682005 * value)
	{
		___pauseText_4 = value;
		Il2CppCodeGenWriteBarrier(&___pauseText_4, value);
	}

	inline static int32_t get_offset_of_glitchEffect_5() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___glitchEffect_5)); }
	inline GlitchEffect_t2030701382 * get_glitchEffect_5() const { return ___glitchEffect_5; }
	inline GlitchEffect_t2030701382 ** get_address_of_glitchEffect_5() { return &___glitchEffect_5; }
	inline void set_glitchEffect_5(GlitchEffect_t2030701382 * value)
	{
		___glitchEffect_5 = value;
		Il2CppCodeGenWriteBarrier(&___glitchEffect_5, value);
	}

	inline static int32_t get_offset_of_crtEffect_6() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___crtEffect_6)); }
	inline CRT_t67013 * get_crtEffect_6() const { return ___crtEffect_6; }
	inline CRT_t67013 ** get_address_of_crtEffect_6() { return &___crtEffect_6; }
	inline void set_crtEffect_6(CRT_t67013 * value)
	{
		___crtEffect_6 = value;
		Il2CppCodeGenWriteBarrier(&___crtEffect_6, value);
	}

	inline static int32_t get_offset_of_intensity_7() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___intensity_7)); }
	inline float get_intensity_7() const { return ___intensity_7; }
	inline float* get_address_of_intensity_7() { return &___intensity_7; }
	inline void set_intensity_7(float value)
	{
		___intensity_7 = value;
	}

	inline static int32_t get_offset_of_currentScene_8() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___currentScene_8)); }
	inline Scene_t1080795294  get_currentScene_8() const { return ___currentScene_8; }
	inline Scene_t1080795294 * get_address_of_currentScene_8() { return &___currentScene_8; }
	inline void set_currentScene_8(Scene_t1080795294  value)
	{
		___currentScene_8 = value;
	}

	inline static int32_t get_offset_of_currentSceneName_9() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___currentSceneName_9)); }
	inline String_t* get_currentSceneName_9() const { return ___currentSceneName_9; }
	inline String_t** get_address_of_currentSceneName_9() { return &___currentSceneName_9; }
	inline void set_currentSceneName_9(String_t* value)
	{
		___currentSceneName_9 = value;
		Il2CppCodeGenWriteBarrier(&___currentSceneName_9, value);
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
	GameManager_t2369589051 * ___U3CInstanceU3Ek__BackingField_10;

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

	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(GameManager_t2369589051_StaticFields, ___U3CInstanceU3Ek__BackingField_10)); }
	inline GameManager_t2369589051 * get_U3CInstanceU3Ek__BackingField_10() const { return ___U3CInstanceU3Ek__BackingField_10; }
	inline GameManager_t2369589051 ** get_address_of_U3CInstanceU3Ek__BackingField_10() { return &___U3CInstanceU3Ek__BackingField_10; }
	inline void set_U3CInstanceU3Ek__BackingField_10(GameManager_t2369589051 * value)
	{
		___U3CInstanceU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CInstanceU3Ek__BackingField_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
