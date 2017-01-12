#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// DG.Tweening.Tween[]
struct TweenU5BU5D_t2368679928;
// System.Collections.Generic.Stack`1<DG.Tweening.Tween>
struct Stack_1_t3774219697;
// System.Collections.Generic.List`1<DG.Tweening.Tween>
struct List_1_t2043844325;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Core.TweenManager
struct  TweenManager_t4283858702  : public Il2CppObject
{
public:

public:
};

struct TweenManager_t4283858702_StaticFields
{
public:
	// System.Int32 DG.Tweening.Core.TweenManager::maxActive
	int32_t ___maxActive_3;
	// System.Int32 DG.Tweening.Core.TweenManager::maxTweeners
	int32_t ___maxTweeners_4;
	// System.Int32 DG.Tweening.Core.TweenManager::maxSequences
	int32_t ___maxSequences_5;
	// System.Boolean DG.Tweening.Core.TweenManager::hasActiveTweens
	bool ___hasActiveTweens_6;
	// System.Boolean DG.Tweening.Core.TweenManager::hasActiveDefaultTweens
	bool ___hasActiveDefaultTweens_7;
	// System.Boolean DG.Tweening.Core.TweenManager::hasActiveLateTweens
	bool ___hasActiveLateTweens_8;
	// System.Boolean DG.Tweening.Core.TweenManager::hasActiveFixedTweens
	bool ___hasActiveFixedTweens_9;
	// System.Int32 DG.Tweening.Core.TweenManager::totActiveTweens
	int32_t ___totActiveTweens_10;
	// System.Int32 DG.Tweening.Core.TweenManager::totActiveDefaultTweens
	int32_t ___totActiveDefaultTweens_11;
	// System.Int32 DG.Tweening.Core.TweenManager::totActiveLateTweens
	int32_t ___totActiveLateTweens_12;
	// System.Int32 DG.Tweening.Core.TweenManager::totActiveFixedTweens
	int32_t ___totActiveFixedTweens_13;
	// System.Int32 DG.Tweening.Core.TweenManager::totActiveTweeners
	int32_t ___totActiveTweeners_14;
	// System.Int32 DG.Tweening.Core.TweenManager::totActiveSequences
	int32_t ___totActiveSequences_15;
	// System.Int32 DG.Tweening.Core.TweenManager::totPooledTweeners
	int32_t ___totPooledTweeners_16;
	// System.Int32 DG.Tweening.Core.TweenManager::totPooledSequences
	int32_t ___totPooledSequences_17;
	// System.Int32 DG.Tweening.Core.TweenManager::totTweeners
	int32_t ___totTweeners_18;
	// System.Int32 DG.Tweening.Core.TweenManager::totSequences
	int32_t ___totSequences_19;
	// System.Boolean DG.Tweening.Core.TweenManager::isUpdateLoop
	bool ___isUpdateLoop_20;
	// DG.Tweening.Tween[] DG.Tweening.Core.TweenManager::_activeTweens
	TweenU5BU5D_t2368679928* ____activeTweens_21;
	// DG.Tweening.Tween[] DG.Tweening.Core.TweenManager::_pooledTweeners
	TweenU5BU5D_t2368679928* ____pooledTweeners_22;
	// System.Collections.Generic.Stack`1<DG.Tweening.Tween> DG.Tweening.Core.TweenManager::_PooledSequences
	Stack_1_t3774219697 * ____PooledSequences_23;
	// System.Collections.Generic.List`1<DG.Tweening.Tween> DG.Tweening.Core.TweenManager::_KillList
	List_1_t2043844325 * ____KillList_24;
	// System.Int32 DG.Tweening.Core.TweenManager::_maxActiveLookupId
	int32_t ____maxActiveLookupId_25;
	// System.Boolean DG.Tweening.Core.TweenManager::_requiresActiveReorganization
	bool ____requiresActiveReorganization_26;
	// System.Int32 DG.Tweening.Core.TweenManager::_reorganizeFromId
	int32_t ____reorganizeFromId_27;
	// System.Int32 DG.Tweening.Core.TweenManager::_minPooledTweenerId
	int32_t ____minPooledTweenerId_28;
	// System.Int32 DG.Tweening.Core.TweenManager::_maxPooledTweenerId
	int32_t ____maxPooledTweenerId_29;
	// System.Boolean DG.Tweening.Core.TweenManager::_despawnAllCalledFromUpdateLoopCallback
	bool ____despawnAllCalledFromUpdateLoopCallback_30;

public:
	inline static int32_t get_offset_of_maxActive_3() { return static_cast<int32_t>(offsetof(TweenManager_t4283858702_StaticFields, ___maxActive_3)); }
	inline int32_t get_maxActive_3() const { return ___maxActive_3; }
	inline int32_t* get_address_of_maxActive_3() { return &___maxActive_3; }
	inline void set_maxActive_3(int32_t value)
	{
		___maxActive_3 = value;
	}

	inline static int32_t get_offset_of_maxTweeners_4() { return static_cast<int32_t>(offsetof(TweenManager_t4283858702_StaticFields, ___maxTweeners_4)); }
	inline int32_t get_maxTweeners_4() const { return ___maxTweeners_4; }
	inline int32_t* get_address_of_maxTweeners_4() { return &___maxTweeners_4; }
	inline void set_maxTweeners_4(int32_t value)
	{
		___maxTweeners_4 = value;
	}

	inline static int32_t get_offset_of_maxSequences_5() { return static_cast<int32_t>(offsetof(TweenManager_t4283858702_StaticFields, ___maxSequences_5)); }
	inline int32_t get_maxSequences_5() const { return ___maxSequences_5; }
	inline int32_t* get_address_of_maxSequences_5() { return &___maxSequences_5; }
	inline void set_maxSequences_5(int32_t value)
	{
		___maxSequences_5 = value;
	}

	inline static int32_t get_offset_of_hasActiveTweens_6() { return static_cast<int32_t>(offsetof(TweenManager_t4283858702_StaticFields, ___hasActiveTweens_6)); }
	inline bool get_hasActiveTweens_6() const { return ___hasActiveTweens_6; }
	inline bool* get_address_of_hasActiveTweens_6() { return &___hasActiveTweens_6; }
	inline void set_hasActiveTweens_6(bool value)
	{
		___hasActiveTweens_6 = value;
	}

	inline static int32_t get_offset_of_hasActiveDefaultTweens_7() { return static_cast<int32_t>(offsetof(TweenManager_t4283858702_StaticFields, ___hasActiveDefaultTweens_7)); }
	inline bool get_hasActiveDefaultTweens_7() const { return ___hasActiveDefaultTweens_7; }
	inline bool* get_address_of_hasActiveDefaultTweens_7() { return &___hasActiveDefaultTweens_7; }
	inline void set_hasActiveDefaultTweens_7(bool value)
	{
		___hasActiveDefaultTweens_7 = value;
	}

	inline static int32_t get_offset_of_hasActiveLateTweens_8() { return static_cast<int32_t>(offsetof(TweenManager_t4283858702_StaticFields, ___hasActiveLateTweens_8)); }
	inline bool get_hasActiveLateTweens_8() const { return ___hasActiveLateTweens_8; }
	inline bool* get_address_of_hasActiveLateTweens_8() { return &___hasActiveLateTweens_8; }
	inline void set_hasActiveLateTweens_8(bool value)
	{
		___hasActiveLateTweens_8 = value;
	}

	inline static int32_t get_offset_of_hasActiveFixedTweens_9() { return static_cast<int32_t>(offsetof(TweenManager_t4283858702_StaticFields, ___hasActiveFixedTweens_9)); }
	inline bool get_hasActiveFixedTweens_9() const { return ___hasActiveFixedTweens_9; }
	inline bool* get_address_of_hasActiveFixedTweens_9() { return &___hasActiveFixedTweens_9; }
	inline void set_hasActiveFixedTweens_9(bool value)
	{
		___hasActiveFixedTweens_9 = value;
	}

	inline static int32_t get_offset_of_totActiveTweens_10() { return static_cast<int32_t>(offsetof(TweenManager_t4283858702_StaticFields, ___totActiveTweens_10)); }
	inline int32_t get_totActiveTweens_10() const { return ___totActiveTweens_10; }
	inline int32_t* get_address_of_totActiveTweens_10() { return &___totActiveTweens_10; }
	inline void set_totActiveTweens_10(int32_t value)
	{
		___totActiveTweens_10 = value;
	}

	inline static int32_t get_offset_of_totActiveDefaultTweens_11() { return static_cast<int32_t>(offsetof(TweenManager_t4283858702_StaticFields, ___totActiveDefaultTweens_11)); }
	inline int32_t get_totActiveDefaultTweens_11() const { return ___totActiveDefaultTweens_11; }
	inline int32_t* get_address_of_totActiveDefaultTweens_11() { return &___totActiveDefaultTweens_11; }
	inline void set_totActiveDefaultTweens_11(int32_t value)
	{
		___totActiveDefaultTweens_11 = value;
	}

	inline static int32_t get_offset_of_totActiveLateTweens_12() { return static_cast<int32_t>(offsetof(TweenManager_t4283858702_StaticFields, ___totActiveLateTweens_12)); }
	inline int32_t get_totActiveLateTweens_12() const { return ___totActiveLateTweens_12; }
	inline int32_t* get_address_of_totActiveLateTweens_12() { return &___totActiveLateTweens_12; }
	inline void set_totActiveLateTweens_12(int32_t value)
	{
		___totActiveLateTweens_12 = value;
	}

	inline static int32_t get_offset_of_totActiveFixedTweens_13() { return static_cast<int32_t>(offsetof(TweenManager_t4283858702_StaticFields, ___totActiveFixedTweens_13)); }
	inline int32_t get_totActiveFixedTweens_13() const { return ___totActiveFixedTweens_13; }
	inline int32_t* get_address_of_totActiveFixedTweens_13() { return &___totActiveFixedTweens_13; }
	inline void set_totActiveFixedTweens_13(int32_t value)
	{
		___totActiveFixedTweens_13 = value;
	}

	inline static int32_t get_offset_of_totActiveTweeners_14() { return static_cast<int32_t>(offsetof(TweenManager_t4283858702_StaticFields, ___totActiveTweeners_14)); }
	inline int32_t get_totActiveTweeners_14() const { return ___totActiveTweeners_14; }
	inline int32_t* get_address_of_totActiveTweeners_14() { return &___totActiveTweeners_14; }
	inline void set_totActiveTweeners_14(int32_t value)
	{
		___totActiveTweeners_14 = value;
	}

	inline static int32_t get_offset_of_totActiveSequences_15() { return static_cast<int32_t>(offsetof(TweenManager_t4283858702_StaticFields, ___totActiveSequences_15)); }
	inline int32_t get_totActiveSequences_15() const { return ___totActiveSequences_15; }
	inline int32_t* get_address_of_totActiveSequences_15() { return &___totActiveSequences_15; }
	inline void set_totActiveSequences_15(int32_t value)
	{
		___totActiveSequences_15 = value;
	}

	inline static int32_t get_offset_of_totPooledTweeners_16() { return static_cast<int32_t>(offsetof(TweenManager_t4283858702_StaticFields, ___totPooledTweeners_16)); }
	inline int32_t get_totPooledTweeners_16() const { return ___totPooledTweeners_16; }
	inline int32_t* get_address_of_totPooledTweeners_16() { return &___totPooledTweeners_16; }
	inline void set_totPooledTweeners_16(int32_t value)
	{
		___totPooledTweeners_16 = value;
	}

	inline static int32_t get_offset_of_totPooledSequences_17() { return static_cast<int32_t>(offsetof(TweenManager_t4283858702_StaticFields, ___totPooledSequences_17)); }
	inline int32_t get_totPooledSequences_17() const { return ___totPooledSequences_17; }
	inline int32_t* get_address_of_totPooledSequences_17() { return &___totPooledSequences_17; }
	inline void set_totPooledSequences_17(int32_t value)
	{
		___totPooledSequences_17 = value;
	}

	inline static int32_t get_offset_of_totTweeners_18() { return static_cast<int32_t>(offsetof(TweenManager_t4283858702_StaticFields, ___totTweeners_18)); }
	inline int32_t get_totTweeners_18() const { return ___totTweeners_18; }
	inline int32_t* get_address_of_totTweeners_18() { return &___totTweeners_18; }
	inline void set_totTweeners_18(int32_t value)
	{
		___totTweeners_18 = value;
	}

	inline static int32_t get_offset_of_totSequences_19() { return static_cast<int32_t>(offsetof(TweenManager_t4283858702_StaticFields, ___totSequences_19)); }
	inline int32_t get_totSequences_19() const { return ___totSequences_19; }
	inline int32_t* get_address_of_totSequences_19() { return &___totSequences_19; }
	inline void set_totSequences_19(int32_t value)
	{
		___totSequences_19 = value;
	}

	inline static int32_t get_offset_of_isUpdateLoop_20() { return static_cast<int32_t>(offsetof(TweenManager_t4283858702_StaticFields, ___isUpdateLoop_20)); }
	inline bool get_isUpdateLoop_20() const { return ___isUpdateLoop_20; }
	inline bool* get_address_of_isUpdateLoop_20() { return &___isUpdateLoop_20; }
	inline void set_isUpdateLoop_20(bool value)
	{
		___isUpdateLoop_20 = value;
	}

	inline static int32_t get_offset_of__activeTweens_21() { return static_cast<int32_t>(offsetof(TweenManager_t4283858702_StaticFields, ____activeTweens_21)); }
	inline TweenU5BU5D_t2368679928* get__activeTweens_21() const { return ____activeTweens_21; }
	inline TweenU5BU5D_t2368679928** get_address_of__activeTweens_21() { return &____activeTweens_21; }
	inline void set__activeTweens_21(TweenU5BU5D_t2368679928* value)
	{
		____activeTweens_21 = value;
		Il2CppCodeGenWriteBarrier(&____activeTweens_21, value);
	}

	inline static int32_t get_offset_of__pooledTweeners_22() { return static_cast<int32_t>(offsetof(TweenManager_t4283858702_StaticFields, ____pooledTweeners_22)); }
	inline TweenU5BU5D_t2368679928* get__pooledTweeners_22() const { return ____pooledTweeners_22; }
	inline TweenU5BU5D_t2368679928** get_address_of__pooledTweeners_22() { return &____pooledTweeners_22; }
	inline void set__pooledTweeners_22(TweenU5BU5D_t2368679928* value)
	{
		____pooledTweeners_22 = value;
		Il2CppCodeGenWriteBarrier(&____pooledTweeners_22, value);
	}

	inline static int32_t get_offset_of__PooledSequences_23() { return static_cast<int32_t>(offsetof(TweenManager_t4283858702_StaticFields, ____PooledSequences_23)); }
	inline Stack_1_t3774219697 * get__PooledSequences_23() const { return ____PooledSequences_23; }
	inline Stack_1_t3774219697 ** get_address_of__PooledSequences_23() { return &____PooledSequences_23; }
	inline void set__PooledSequences_23(Stack_1_t3774219697 * value)
	{
		____PooledSequences_23 = value;
		Il2CppCodeGenWriteBarrier(&____PooledSequences_23, value);
	}

	inline static int32_t get_offset_of__KillList_24() { return static_cast<int32_t>(offsetof(TweenManager_t4283858702_StaticFields, ____KillList_24)); }
	inline List_1_t2043844325 * get__KillList_24() const { return ____KillList_24; }
	inline List_1_t2043844325 ** get_address_of__KillList_24() { return &____KillList_24; }
	inline void set__KillList_24(List_1_t2043844325 * value)
	{
		____KillList_24 = value;
		Il2CppCodeGenWriteBarrier(&____KillList_24, value);
	}

	inline static int32_t get_offset_of__maxActiveLookupId_25() { return static_cast<int32_t>(offsetof(TweenManager_t4283858702_StaticFields, ____maxActiveLookupId_25)); }
	inline int32_t get__maxActiveLookupId_25() const { return ____maxActiveLookupId_25; }
	inline int32_t* get_address_of__maxActiveLookupId_25() { return &____maxActiveLookupId_25; }
	inline void set__maxActiveLookupId_25(int32_t value)
	{
		____maxActiveLookupId_25 = value;
	}

	inline static int32_t get_offset_of__requiresActiveReorganization_26() { return static_cast<int32_t>(offsetof(TweenManager_t4283858702_StaticFields, ____requiresActiveReorganization_26)); }
	inline bool get__requiresActiveReorganization_26() const { return ____requiresActiveReorganization_26; }
	inline bool* get_address_of__requiresActiveReorganization_26() { return &____requiresActiveReorganization_26; }
	inline void set__requiresActiveReorganization_26(bool value)
	{
		____requiresActiveReorganization_26 = value;
	}

	inline static int32_t get_offset_of__reorganizeFromId_27() { return static_cast<int32_t>(offsetof(TweenManager_t4283858702_StaticFields, ____reorganizeFromId_27)); }
	inline int32_t get__reorganizeFromId_27() const { return ____reorganizeFromId_27; }
	inline int32_t* get_address_of__reorganizeFromId_27() { return &____reorganizeFromId_27; }
	inline void set__reorganizeFromId_27(int32_t value)
	{
		____reorganizeFromId_27 = value;
	}

	inline static int32_t get_offset_of__minPooledTweenerId_28() { return static_cast<int32_t>(offsetof(TweenManager_t4283858702_StaticFields, ____minPooledTweenerId_28)); }
	inline int32_t get__minPooledTweenerId_28() const { return ____minPooledTweenerId_28; }
	inline int32_t* get_address_of__minPooledTweenerId_28() { return &____minPooledTweenerId_28; }
	inline void set__minPooledTweenerId_28(int32_t value)
	{
		____minPooledTweenerId_28 = value;
	}

	inline static int32_t get_offset_of__maxPooledTweenerId_29() { return static_cast<int32_t>(offsetof(TweenManager_t4283858702_StaticFields, ____maxPooledTweenerId_29)); }
	inline int32_t get__maxPooledTweenerId_29() const { return ____maxPooledTweenerId_29; }
	inline int32_t* get_address_of__maxPooledTweenerId_29() { return &____maxPooledTweenerId_29; }
	inline void set__maxPooledTweenerId_29(int32_t value)
	{
		____maxPooledTweenerId_29 = value;
	}

	inline static int32_t get_offset_of__despawnAllCalledFromUpdateLoopCallback_30() { return static_cast<int32_t>(offsetof(TweenManager_t4283858702_StaticFields, ____despawnAllCalledFromUpdateLoopCallback_30)); }
	inline bool get__despawnAllCalledFromUpdateLoopCallback_30() const { return ____despawnAllCalledFromUpdateLoopCallback_30; }
	inline bool* get_address_of__despawnAllCalledFromUpdateLoopCallback_30() { return &____despawnAllCalledFromUpdateLoopCallback_30; }
	inline void set__despawnAllCalledFromUpdateLoopCallback_30(bool value)
	{
		____despawnAllCalledFromUpdateLoopCallback_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
