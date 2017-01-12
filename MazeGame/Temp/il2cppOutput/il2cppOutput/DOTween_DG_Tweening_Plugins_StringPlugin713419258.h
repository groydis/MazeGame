#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.StringBuilder
struct StringBuilder_t243639308;
// System.Collections.Generic.List`1<System.Char>
struct List_1_t4230808090;

#include "DOTween_DG_Tweening_Plugins_Core_ABSTweenPlugin_3_2443906743.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Plugins.StringPlugin
struct  StringPlugin_t713419258  : public ABSTweenPlugin_3_t2443906743
{
public:

public:
};

struct StringPlugin_t713419258_StaticFields
{
public:
	// System.Text.StringBuilder DG.Tweening.Plugins.StringPlugin::_Buffer
	StringBuilder_t243639308 * ____Buffer_0;
	// System.Collections.Generic.List`1<System.Char> DG.Tweening.Plugins.StringPlugin::_OpenedTags
	List_1_t4230808090 * ____OpenedTags_1;

public:
	inline static int32_t get_offset_of__Buffer_0() { return static_cast<int32_t>(offsetof(StringPlugin_t713419258_StaticFields, ____Buffer_0)); }
	inline StringBuilder_t243639308 * get__Buffer_0() const { return ____Buffer_0; }
	inline StringBuilder_t243639308 ** get_address_of__Buffer_0() { return &____Buffer_0; }
	inline void set__Buffer_0(StringBuilder_t243639308 * value)
	{
		____Buffer_0 = value;
		Il2CppCodeGenWriteBarrier(&____Buffer_0, value);
	}

	inline static int32_t get_offset_of__OpenedTags_1() { return static_cast<int32_t>(offsetof(StringPlugin_t713419258_StaticFields, ____OpenedTags_1)); }
	inline List_1_t4230808090 * get__OpenedTags_1() const { return ____OpenedTags_1; }
	inline List_1_t4230808090 ** get_address_of__OpenedTags_1() { return &____OpenedTags_1; }
	inline void set__OpenedTags_1(List_1_t4230808090 * value)
	{
		____OpenedTags_1 = value;
		Il2CppCodeGenWriteBarrier(&____OpenedTags_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
