#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.String
struct String_t;
// State
struct State_t80204913;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TextDisplay
struct  TextDisplay_t2499696309  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject TextDisplay::rover
	GameObject_t3674682005 * ___rover_2;
	// System.String TextDisplay::show
	String_t* ___show_3;
	// State TextDisplay::state
	State_t80204913 * ___state_4;
	// System.Single TextDisplay::nextFire
	float ___nextFire_5;
	// System.Single TextDisplay::fireRate
	float ___fireRate_6;
	// System.Single TextDisplay::rnum
	float ___rnum_7;

public:
	inline static int32_t get_offset_of_rover_2() { return static_cast<int32_t>(offsetof(TextDisplay_t2499696309, ___rover_2)); }
	inline GameObject_t3674682005 * get_rover_2() const { return ___rover_2; }
	inline GameObject_t3674682005 ** get_address_of_rover_2() { return &___rover_2; }
	inline void set_rover_2(GameObject_t3674682005 * value)
	{
		___rover_2 = value;
		Il2CppCodeGenWriteBarrier(&___rover_2, value);
	}

	inline static int32_t get_offset_of_show_3() { return static_cast<int32_t>(offsetof(TextDisplay_t2499696309, ___show_3)); }
	inline String_t* get_show_3() const { return ___show_3; }
	inline String_t** get_address_of_show_3() { return &___show_3; }
	inline void set_show_3(String_t* value)
	{
		___show_3 = value;
		Il2CppCodeGenWriteBarrier(&___show_3, value);
	}

	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(TextDisplay_t2499696309, ___state_4)); }
	inline State_t80204913 * get_state_4() const { return ___state_4; }
	inline State_t80204913 ** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(State_t80204913 * value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier(&___state_4, value);
	}

	inline static int32_t get_offset_of_nextFire_5() { return static_cast<int32_t>(offsetof(TextDisplay_t2499696309, ___nextFire_5)); }
	inline float get_nextFire_5() const { return ___nextFire_5; }
	inline float* get_address_of_nextFire_5() { return &___nextFire_5; }
	inline void set_nextFire_5(float value)
	{
		___nextFire_5 = value;
	}

	inline static int32_t get_offset_of_fireRate_6() { return static_cast<int32_t>(offsetof(TextDisplay_t2499696309, ___fireRate_6)); }
	inline float get_fireRate_6() const { return ___fireRate_6; }
	inline float* get_address_of_fireRate_6() { return &___fireRate_6; }
	inline void set_fireRate_6(float value)
	{
		___fireRate_6 = value;
	}

	inline static int32_t get_offset_of_rnum_7() { return static_cast<int32_t>(offsetof(TextDisplay_t2499696309, ___rnum_7)); }
	inline float get_rnum_7() const { return ___rnum_7; }
	inline float* get_address_of_rnum_7() { return &___rnum_7; }
	inline void set_rnum_7(float value)
	{
		___rnum_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
