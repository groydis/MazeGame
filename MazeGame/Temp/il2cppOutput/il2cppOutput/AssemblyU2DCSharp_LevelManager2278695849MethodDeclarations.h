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
// System.Void LevelManager::Start()
extern "C"  void LevelManager_Start_m3160897042 (LevelManager_t2278695849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::Update()
extern "C"  void LevelManager_Update_m3504379963 (LevelManager_t2278695849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LevelManager::GetLevelProgress(System.String)
extern "C"  bool LevelManager_GetLevelProgress_m1647556129 (Il2CppObject * __this /* static, unused */, String_t* ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::SaveLevelProgress(System.String,System.Int32)
extern "C"  void LevelManager_SaveLevelProgress_m1179132441 (Il2CppObject * __this /* static, unused */, String_t* ___level0, int32_t ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
