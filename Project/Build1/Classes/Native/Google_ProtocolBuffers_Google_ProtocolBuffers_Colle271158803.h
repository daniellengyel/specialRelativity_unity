﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Single[]
struct SingleU5BU5D_t577127397;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t1445631064;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Single>
struct  PopsicleList_1_t271158803  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<T> Google.ProtocolBuffers.Collections.PopsicleList`1::items
	List_1_t1445631064 * ___items_2;
	// System.Boolean Google.ProtocolBuffers.Collections.PopsicleList`1::readOnly
	bool ___readOnly_3;

public:
	inline static int32_t get_offset_of_items_2() { return static_cast<int32_t>(offsetof(PopsicleList_1_t271158803, ___items_2)); }
	inline List_1_t1445631064 * get_items_2() const { return ___items_2; }
	inline List_1_t1445631064 ** get_address_of_items_2() { return &___items_2; }
	inline void set_items_2(List_1_t1445631064 * value)
	{
		___items_2 = value;
		Il2CppCodeGenWriteBarrier(&___items_2, value);
	}

	inline static int32_t get_offset_of_readOnly_3() { return static_cast<int32_t>(offsetof(PopsicleList_1_t271158803, ___readOnly_3)); }
	inline bool get_readOnly_3() const { return ___readOnly_3; }
	inline bool* get_address_of_readOnly_3() { return &___readOnly_3; }
	inline void set_readOnly_3(bool value)
	{
		___readOnly_3 = value;
	}
};

struct PopsicleList_1_t271158803_StaticFields
{
public:
	// System.Boolean Google.ProtocolBuffers.Collections.PopsicleList`1::CheckForNull
	bool ___CheckForNull_0;
	// T[] Google.ProtocolBuffers.Collections.PopsicleList`1::EmptySet
	SingleU5BU5D_t577127397* ___EmptySet_1;

public:
	inline static int32_t get_offset_of_CheckForNull_0() { return static_cast<int32_t>(offsetof(PopsicleList_1_t271158803_StaticFields, ___CheckForNull_0)); }
	inline bool get_CheckForNull_0() const { return ___CheckForNull_0; }
	inline bool* get_address_of_CheckForNull_0() { return &___CheckForNull_0; }
	inline void set_CheckForNull_0(bool value)
	{
		___CheckForNull_0 = value;
	}

	inline static int32_t get_offset_of_EmptySet_1() { return static_cast<int32_t>(offsetof(PopsicleList_1_t271158803_StaticFields, ___EmptySet_1)); }
	inline SingleU5BU5D_t577127397* get_EmptySet_1() const { return ___EmptySet_1; }
	inline SingleU5BU5D_t577127397** get_address_of_EmptySet_1() { return &___EmptySet_1; }
	inline void set_EmptySet_1(SingleU5BU5D_t577127397* value)
	{
		___EmptySet_1 = value;
		Il2CppCodeGenWriteBarrier(&___EmptySet_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
