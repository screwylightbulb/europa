#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.IEqualityComparer
struct IEqualityComparer_t926437290;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.BooHashCodeProvider
struct  BooHashCodeProvider_t2452708440  : public Il2CppObject
{
public:

public:
};

struct BooHashCodeProvider_t2452708440_StaticFields
{
public:
	// System.Collections.IEqualityComparer Boo.Lang.BooHashCodeProvider::Default
	Il2CppObject * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(BooHashCodeProvider_t2452708440_StaticFields, ___Default_0)); }
	inline Il2CppObject * get_Default_0() const { return ___Default_0; }
	inline Il2CppObject ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(Il2CppObject * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier(&___Default_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
