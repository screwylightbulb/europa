#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;

#include "mscorlib_System_Attribute2523058482.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.EnumeratorItemTypeAttribute
struct  EnumeratorItemTypeAttribute_t3505109013  : public Attribute_t2523058482
{
public:
	// System.Type Boo.Lang.EnumeratorItemTypeAttribute::_itemType
	Type_t * ____itemType_0;

public:
	inline static int32_t get_offset_of__itemType_0() { return static_cast<int32_t>(offsetof(EnumeratorItemTypeAttribute_t3505109013, ____itemType_0)); }
	inline Type_t * get__itemType_0() const { return ____itemType_0; }
	inline Type_t ** get_address_of__itemType_0() { return &____itemType_0; }
	inline void set__itemType_0(Type_t * value)
	{
		____itemType_0 = value;
		Il2CppCodeGenWriteBarrier(&____itemType_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
