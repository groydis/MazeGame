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

// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t2221136835;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t3339007067;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
struct DispatcherFactory_t1500081684;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.Array
struct Il2CppArray;
// System.IConvertible
struct IConvertible_t2116191568;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>
struct IEnumerable_1_t3619649022;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_String7231557.h"
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_Dispa1500081684.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Reflection_MethodInfo318736065.h"
#include "mscorlib_System_TypeCode1814089915.h"
#include "mscorlib_System_Array1146569071.h"

// System.Void Boo.Lang.Runtime.RuntimeServices::.cctor()
extern "C"  void RuntimeServices__cctor_m3801547026 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::GetDispatcher(System.Object,System.String,System.Type[],Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory)
extern "C"  Dispatcher_t2221136835 * RuntimeServices_GetDispatcher_m1240650646 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___target0, String_t* ___cacheKeyName1, TypeU5BU5D_t3339007067* ___cacheKeyTypes2, DispatcherFactory_t1500081684 * ___factory3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.RuntimeServices::Coerce(System.Object,System.Type)
extern "C"  Il2CppObject * RuntimeServices_Coerce_m3737249806 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, Type_t * ___toType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::CreateCoerceDispatcher(System.Object,System.Type)
extern "C"  Dispatcher_t2221136835 * RuntimeServices_CreateCoerceDispatcher_m1712438829 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, Type_t * ___toType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::EmitPromotionDispatcher(System.Type,System.Type)
extern "C"  Dispatcher_t2221136835 * RuntimeServices_EmitPromotionDispatcher_m678082319 (Il2CppObject * __this /* static, unused */, Type_t * ___fromType0, Type_t * ___toType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsPromotableNumeric(System.Type)
extern "C"  bool RuntimeServices_IsPromotableNumeric_m3776066856 (Il2CppObject * __this /* static, unused */, Type_t * ___fromType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::EmitImplicitConversionDispatcher(System.Reflection.MethodInfo)
extern "C"  Dispatcher_t2221136835 * RuntimeServices_EmitImplicitConversionDispatcher_m2166552894 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___method0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.RuntimeServices::CoercibleDispatcher(System.Object,System.Object[])
extern "C"  Il2CppObject * RuntimeServices_CoercibleDispatcher_m750535641 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___o0, ObjectU5BU5D_t1108656482* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.RuntimeServices::IdentityDispatcher(System.Object,System.Object[])
extern "C"  Il2CppObject * RuntimeServices_IdentityDispatcher_m913361469 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___o0, ObjectU5BU5D_t1108656482* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsNumeric(System.TypeCode)
extern "C"  bool RuntimeServices_IsNumeric_m3157108604 (Il2CppObject * __this /* static, unused */, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Boo.Lang.Runtime.RuntimeServices::op_Addition(System.String,System.Object)
extern "C"  String_t* RuntimeServices_op_Addition_m3613207904 (Il2CppObject * __this /* static, unused */, String_t* ___lhs0, Il2CppObject * ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::EqualityOperator(System.Object,System.Object)
extern "C"  bool RuntimeServices_EqualityOperator_m1206578319 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___lhs0, Il2CppObject * ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::ArrayEqualityImpl(System.Array,System.Array)
extern "C"  bool RuntimeServices_ArrayEqualityImpl_m2683726598 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___lhs0, Il2CppArray * ___rhs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode Boo.Lang.Runtime.RuntimeServices::GetConvertTypeCode(System.TypeCode,System.TypeCode)
extern "C"  int32_t RuntimeServices_GetConvertTypeCode_m754613208 (Il2CppObject * __this /* static, unused */, int32_t ___lhsTypeCode0, int32_t ___rhsTypeCode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::EqualityOperator(System.Object,System.TypeCode,System.Object,System.TypeCode)
extern "C"  bool RuntimeServices_EqualityOperator_m1787011483 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___lhs0, int32_t ___lhsTypeCode1, Il2CppObject * ___rhs2, int32_t ___rhsTypeCode3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsPromotableNumeric(System.TypeCode)
extern "C"  bool RuntimeServices_IsPromotableNumeric_m4140154171 (Il2CppObject * __this /* static, unused */, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IConvertible Boo.Lang.Runtime.RuntimeServices::CheckNumericPromotion(System.Object)
extern "C"  Il2CppObject * RuntimeServices_CheckNumericPromotion_m1696171605 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IConvertible Boo.Lang.Runtime.RuntimeServices::CheckNumericPromotion(System.IConvertible)
extern "C"  Il2CppObject * RuntimeServices_CheckNumericPromotion_m1203206296 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___convertible0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Boo.Lang.Runtime.RuntimeServices::UnboxSingle(System.Object)
extern "C"  float RuntimeServices_UnboxSingle_m704012333 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices::FindImplicitConversionOperator(System.Type,System.Type)
extern "C"  MethodInfo_t * RuntimeServices_FindImplicitConversionOperator_m907683305 (Il2CppObject * __this /* static, unused */, Type_t * ___from0, Type_t * ___to1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo> Boo.Lang.Runtime.RuntimeServices::GetExtensionMethods()
extern "C"  Il2CppObject* RuntimeServices_GetExtensionMethods_m851624495 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices::FindImplicitConversionMethod(System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>,System.Type,System.Type)
extern "C"  MethodInfo_t * RuntimeServices_FindImplicitConversionMethod_m251076132 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___candidates0, Type_t * ___from1, Type_t * ___to2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
