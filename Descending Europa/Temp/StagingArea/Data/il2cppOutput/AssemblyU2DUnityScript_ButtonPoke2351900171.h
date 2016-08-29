#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// State
struct State_t80204913;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ButtonPoke
struct  ButtonPoke_t2351900171  : public MonoBehaviour_t667441552
{
public:
	// State ButtonPoke::state
	State_t80204913 * ___state_2;
	// System.String ButtonPoke::action
	String_t* ___action_3;

public:
	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(ButtonPoke_t2351900171, ___state_2)); }
	inline State_t80204913 * get_state_2() const { return ___state_2; }
	inline State_t80204913 ** get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(State_t80204913 * value)
	{
		___state_2 = value;
		Il2CppCodeGenWriteBarrier(&___state_2, value);
	}

	inline static int32_t get_offset_of_action_3() { return static_cast<int32_t>(offsetof(ButtonPoke_t2351900171, ___action_3)); }
	inline String_t* get_action_3() const { return ___action_3; }
	inline String_t** get_address_of_action_3() { return &___action_3; }
	inline void set_action_3(String_t* value)
	{
		___action_3 = value;
		Il2CppCodeGenWriteBarrier(&___action_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
