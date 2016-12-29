#pragma once

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

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void GameManager::.ctor()
extern "C"  void GameManager__ctor_m4112277136 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Start()
extern "C"  void GameManager_Start_m3059414928 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Update()
extern "C"  void GameManager_Update_m358434429 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::PlayGame(System.String)
extern "C"  void GameManager_PlayGame_m1613185608 (GameManager_t2369589051 * __this, String_t* ___levelToLoad0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::FinishLevel()
extern "C"  void GameManager_FinishLevel_m3385747551 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
