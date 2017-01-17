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

// LevelManager
struct LevelManager_t2278695849;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void LevelManager::.ctor()
extern "C"  void LevelManager__ctor_m4213759250 (LevelManager_t2278695849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LevelManager::GetLevelProgress(System.String)
extern "C"  bool LevelManager_GetLevelProgress_m1647556129 (Il2CppObject * __this /* static, unused */, String_t* ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LevelManager::GetLevelRuns(System.String)
extern "C"  int32_t LevelManager_GetLevelRuns_m2894180364 (Il2CppObject * __this /* static, unused */, String_t* ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::SaveLevelProgress(System.String,System.Int32)
extern "C"  void LevelManager_SaveLevelProgress_m1179132441 (Il2CppObject * __this /* static, unused */, String_t* ___level0, int32_t ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::SaveCurrentLevel(System.String)
extern "C"  void LevelManager_SaveCurrentLevel_m944958248 (Il2CppObject * __this /* static, unused */, String_t* ___currentLevel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LevelManager::GetCurrentLevel()
extern "C"  String_t* LevelManager_GetCurrentLevel_m1805229230 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::SaveHundredPercent(System.String)
extern "C"  void LevelManager_SaveHundredPercent_m1663019132 (Il2CppObject * __this /* static, unused */, String_t* ___currentLevel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LevelManager::CheckIfHundredPercent()
extern "C"  bool LevelManager_CheckIfHundredPercent_m3311705304 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::SaveNewBestLevelTime(System.String,System.Single)
extern "C"  void LevelManager_SaveNewBestLevelTime_m4096614059 (Il2CppObject * __this /* static, unused */, String_t* ___currentLevel0, float ___time1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LevelManager::GetBestLevelTime(System.String)
extern "C"  float LevelManager_GetBestLevelTime_m3447047789 (Il2CppObject * __this /* static, unused */, String_t* ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
