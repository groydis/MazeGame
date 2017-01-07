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

// System.Char[]
struct CharU5BU5D_t3324145743;
// System.Text.StringBuilder
struct StringBuilder_t243639308;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"

// System.Void DG.Tweening.Plugins.StringPluginExtensions::.cctor()
extern "C"  void StringPluginExtensions__cctor_m1691035250 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.StringPluginExtensions::ScrambleChars(System.Char[])
extern "C"  void StringPluginExtensions_ScrambleChars_m568527506 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___chars0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder DG.Tweening.Plugins.StringPluginExtensions::AppendScrambledChars(System.Text.StringBuilder,System.Int32,System.Char[])
extern "C"  StringBuilder_t243639308 * StringPluginExtensions_AppendScrambledChars_m1309253398 (Il2CppObject * __this /* static, unused */, StringBuilder_t243639308 * ___buffer0, int32_t ___length1, CharU5BU5D_t3324145743* ___chars2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
