﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;

#include "mscorlib_System_Attribute542643598.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultValueAttribute
struct  DefaultValueAttribute_t1302720498  : public Attribute_t542643598
{
public:
	// System.Object System.ComponentModel.DefaultValueAttribute::DefaultValue
	Il2CppObject * ___DefaultValue_0;

public:
	inline static int32_t get_offset_of_DefaultValue_0() { return static_cast<int32_t>(offsetof(DefaultValueAttribute_t1302720498, ___DefaultValue_0)); }
	inline Il2CppObject * get_DefaultValue_0() const { return ___DefaultValue_0; }
	inline Il2CppObject ** get_address_of_DefaultValue_0() { return &___DefaultValue_0; }
	inline void set_DefaultValue_0(Il2CppObject * value)
	{
		___DefaultValue_0 = value;
		Il2CppCodeGenWriteBarrier(&___DefaultValue_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
