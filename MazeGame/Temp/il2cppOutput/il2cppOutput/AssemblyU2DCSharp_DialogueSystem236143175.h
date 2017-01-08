﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;
// UnityEngine.UI.Text
struct Text_t9039225;
// DialogueSystem
struct DialogueSystem_t236143175;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DialogueSystem
struct  DialogueSystem_t236143175  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject DialogueSystem::dialoguePanel
	GameObject_t3674682005 * ___dialoguePanel_2;
	// System.Collections.Generic.List`1<System.String> DialogueSystem::dialogueLines
	List_1_t1375417109 * ___dialogueLines_3;
	// UnityEngine.UI.Text DialogueSystem::dialogueText
	Text_t9039225 * ___dialogueText_5;
	// System.Int32 DialogueSystem::dialogueIndex
	int32_t ___dialogueIndex_6;

public:
	inline static int32_t get_offset_of_dialoguePanel_2() { return static_cast<int32_t>(offsetof(DialogueSystem_t236143175, ___dialoguePanel_2)); }
	inline GameObject_t3674682005 * get_dialoguePanel_2() const { return ___dialoguePanel_2; }
	inline GameObject_t3674682005 ** get_address_of_dialoguePanel_2() { return &___dialoguePanel_2; }
	inline void set_dialoguePanel_2(GameObject_t3674682005 * value)
	{
		___dialoguePanel_2 = value;
		Il2CppCodeGenWriteBarrier(&___dialoguePanel_2, value);
	}

	inline static int32_t get_offset_of_dialogueLines_3() { return static_cast<int32_t>(offsetof(DialogueSystem_t236143175, ___dialogueLines_3)); }
	inline List_1_t1375417109 * get_dialogueLines_3() const { return ___dialogueLines_3; }
	inline List_1_t1375417109 ** get_address_of_dialogueLines_3() { return &___dialogueLines_3; }
	inline void set_dialogueLines_3(List_1_t1375417109 * value)
	{
		___dialogueLines_3 = value;
		Il2CppCodeGenWriteBarrier(&___dialogueLines_3, value);
	}

	inline static int32_t get_offset_of_dialogueText_5() { return static_cast<int32_t>(offsetof(DialogueSystem_t236143175, ___dialogueText_5)); }
	inline Text_t9039225 * get_dialogueText_5() const { return ___dialogueText_5; }
	inline Text_t9039225 ** get_address_of_dialogueText_5() { return &___dialogueText_5; }
	inline void set_dialogueText_5(Text_t9039225 * value)
	{
		___dialogueText_5 = value;
		Il2CppCodeGenWriteBarrier(&___dialogueText_5, value);
	}

	inline static int32_t get_offset_of_dialogueIndex_6() { return static_cast<int32_t>(offsetof(DialogueSystem_t236143175, ___dialogueIndex_6)); }
	inline int32_t get_dialogueIndex_6() const { return ___dialogueIndex_6; }
	inline int32_t* get_address_of_dialogueIndex_6() { return &___dialogueIndex_6; }
	inline void set_dialogueIndex_6(int32_t value)
	{
		___dialogueIndex_6 = value;
	}
};

struct DialogueSystem_t236143175_StaticFields
{
public:
	// System.Boolean DialogueSystem::dialogueActive
	bool ___dialogueActive_4;
	// DialogueSystem DialogueSystem::<Instance>k__BackingField
	DialogueSystem_t236143175 * ___U3CInstanceU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_dialogueActive_4() { return static_cast<int32_t>(offsetof(DialogueSystem_t236143175_StaticFields, ___dialogueActive_4)); }
	inline bool get_dialogueActive_4() const { return ___dialogueActive_4; }
	inline bool* get_address_of_dialogueActive_4() { return &___dialogueActive_4; }
	inline void set_dialogueActive_4(bool value)
	{
		___dialogueActive_4 = value;
	}

	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(DialogueSystem_t236143175_StaticFields, ___U3CInstanceU3Ek__BackingField_7)); }
	inline DialogueSystem_t236143175 * get_U3CInstanceU3Ek__BackingField_7() const { return ___U3CInstanceU3Ek__BackingField_7; }
	inline DialogueSystem_t236143175 ** get_address_of_U3CInstanceU3Ek__BackingField_7() { return &___U3CInstanceU3Ek__BackingField_7; }
	inline void set_U3CInstanceU3Ek__BackingField_7(DialogueSystem_t236143175 * value)
	{
		___U3CInstanceU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CInstanceU3Ek__BackingField_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif