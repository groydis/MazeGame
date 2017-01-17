﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GameManager
struct GameManager_t2369589051;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GameManager2369589051.h"
#include "mscorlib_System_String7231557.h"

// System.Void GameManager::.ctor()
extern "C"  void GameManager__ctor_m4112277136 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameManager GameManager::get_Instance()
extern "C"  GameManager_t2369589051 * GameManager_get_Instance_m4109253338 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::set_Instance(GameManager)
extern "C"  void GameManager_set_Instance_m1709377361 (Il2CppObject * __this /* static, unused */, GameManager_t2369589051 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Awake()
extern "C"  void GameManager_Awake_m54915059 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Start()
extern "C"  void GameManager_Start_m3059414928 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Update()
extern "C"  void GameManager_Update_m358434429 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::StartGame()
extern "C"  void GameManager_StartGame_m3525516194 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::PauseGame()
extern "C"  void GameManager_PauseGame_m3585998390 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::UnPauseGame()
extern "C"  void GameManager_UnPauseGame_m1782011549 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::RestartGame()
extern "C"  void GameManager_RestartGame_m4067092559 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::ExitGame()
extern "C"  void GameManager_ExitGame_m944511332 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::ToolsButton()
extern "C"  void GameManager_ToolsButton_m2614596507 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::PlayGame(System.String)
extern "C"  void GameManager_PlayGame_m1613185608 (GameManager_t2369589051 * __this, String_t* ___levelToLoad0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::GameOverPanel()
extern "C"  void GameManager_GameOverPanel_m430650604 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::FinishLevel()
extern "C"  void GameManager_FinishLevel_m3385747551 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameManager::StartCountDown()
extern "C"  Il2CppObject * GameManager_StartCountDown_m398666747 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::CountPickUpItemsInScene()
extern "C"  void GameManager_CountPickUpItemsInScene_m505825440 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::EnableGlitchAndCRT()
extern "C"  void GameManager_EnableGlitchAndCRT_m4294869306 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::DisableGlitchAndCRT()
extern "C"  void GameManager_DisableGlitchAndCRT_m913666905 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameManager::FloatToTime(System.Single)
extern "C"  String_t* GameManager_FloatToTime_m2843856150 (GameManager_t2369589051 * __this, float ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
