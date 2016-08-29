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

// ClickActions
struct  ClickActions_t3852904053  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject ClickActions::rover
	GameObject_t3674682005 * ___rover_2;
	// System.String ClickActions::action
	String_t* ___action_3;
	// System.Boolean ClickActions::lock
	bool ___lock_4;
	// System.Boolean ClickActions::rumble
	bool ___rumble_5;
	// System.Single ClickActions::nextShake
	float ___nextShake_6;
	// System.Single ClickActions::shakeRate
	float ___shakeRate_7;
	// UnityEngine.GameObject ClickActions::rovercam
	GameObject_t3674682005 * ___rovercam_8;
	// UnityEngine.GameObject ClickActions::rovercamprobe
	GameObject_t3674682005 * ___rovercamprobe_9;
	// UnityEngine.GameObject ClickActions::rovercamactual
	GameObject_t3674682005 * ___rovercamactual_10;
	// State ClickActions::state
	State_t80204913 * ___state_11;
	// System.Single ClickActions::distFront
	float ___distFront_12;

public:
	inline static int32_t get_offset_of_rover_2() { return static_cast<int32_t>(offsetof(ClickActions_t3852904053, ___rover_2)); }
	inline GameObject_t3674682005 * get_rover_2() const { return ___rover_2; }
	inline GameObject_t3674682005 ** get_address_of_rover_2() { return &___rover_2; }
	inline void set_rover_2(GameObject_t3674682005 * value)
	{
		___rover_2 = value;
		Il2CppCodeGenWriteBarrier(&___rover_2, value);
	}

	inline static int32_t get_offset_of_action_3() { return static_cast<int32_t>(offsetof(ClickActions_t3852904053, ___action_3)); }
	inline String_t* get_action_3() const { return ___action_3; }
	inline String_t** get_address_of_action_3() { return &___action_3; }
	inline void set_action_3(String_t* value)
	{
		___action_3 = value;
		Il2CppCodeGenWriteBarrier(&___action_3, value);
	}

	inline static int32_t get_offset_of_lock_4() { return static_cast<int32_t>(offsetof(ClickActions_t3852904053, ___lock_4)); }
	inline bool get_lock_4() const { return ___lock_4; }
	inline bool* get_address_of_lock_4() { return &___lock_4; }
	inline void set_lock_4(bool value)
	{
		___lock_4 = value;
	}

	inline static int32_t get_offset_of_rumble_5() { return static_cast<int32_t>(offsetof(ClickActions_t3852904053, ___rumble_5)); }
	inline bool get_rumble_5() const { return ___rumble_5; }
	inline bool* get_address_of_rumble_5() { return &___rumble_5; }
	inline void set_rumble_5(bool value)
	{
		___rumble_5 = value;
	}

	inline static int32_t get_offset_of_nextShake_6() { return static_cast<int32_t>(offsetof(ClickActions_t3852904053, ___nextShake_6)); }
	inline float get_nextShake_6() const { return ___nextShake_6; }
	inline float* get_address_of_nextShake_6() { return &___nextShake_6; }
	inline void set_nextShake_6(float value)
	{
		___nextShake_6 = value;
	}

	inline static int32_t get_offset_of_shakeRate_7() { return static_cast<int32_t>(offsetof(ClickActions_t3852904053, ___shakeRate_7)); }
	inline float get_shakeRate_7() const { return ___shakeRate_7; }
	inline float* get_address_of_shakeRate_7() { return &___shakeRate_7; }
	inline void set_shakeRate_7(float value)
	{
		___shakeRate_7 = value;
	}

	inline static int32_t get_offset_of_rovercam_8() { return static_cast<int32_t>(offsetof(ClickActions_t3852904053, ___rovercam_8)); }
	inline GameObject_t3674682005 * get_rovercam_8() const { return ___rovercam_8; }
	inline GameObject_t3674682005 ** get_address_of_rovercam_8() { return &___rovercam_8; }
	inline void set_rovercam_8(GameObject_t3674682005 * value)
	{
		___rovercam_8 = value;
		Il2CppCodeGenWriteBarrier(&___rovercam_8, value);
	}

	inline static int32_t get_offset_of_rovercamprobe_9() { return static_cast<int32_t>(offsetof(ClickActions_t3852904053, ___rovercamprobe_9)); }
	inline GameObject_t3674682005 * get_rovercamprobe_9() const { return ___rovercamprobe_9; }
	inline GameObject_t3674682005 ** get_address_of_rovercamprobe_9() { return &___rovercamprobe_9; }
	inline void set_rovercamprobe_9(GameObject_t3674682005 * value)
	{
		___rovercamprobe_9 = value;
		Il2CppCodeGenWriteBarrier(&___rovercamprobe_9, value);
	}

	inline static int32_t get_offset_of_rovercamactual_10() { return static_cast<int32_t>(offsetof(ClickActions_t3852904053, ___rovercamactual_10)); }
	inline GameObject_t3674682005 * get_rovercamactual_10() const { return ___rovercamactual_10; }
	inline GameObject_t3674682005 ** get_address_of_rovercamactual_10() { return &___rovercamactual_10; }
	inline void set_rovercamactual_10(GameObject_t3674682005 * value)
	{
		___rovercamactual_10 = value;
		Il2CppCodeGenWriteBarrier(&___rovercamactual_10, value);
	}

	inline static int32_t get_offset_of_state_11() { return static_cast<int32_t>(offsetof(ClickActions_t3852904053, ___state_11)); }
	inline State_t80204913 * get_state_11() const { return ___state_11; }
	inline State_t80204913 ** get_address_of_state_11() { return &___state_11; }
	inline void set_state_11(State_t80204913 * value)
	{
		___state_11 = value;
		Il2CppCodeGenWriteBarrier(&___state_11, value);
	}

	inline static int32_t get_offset_of_distFront_12() { return static_cast<int32_t>(offsetof(ClickActions_t3852904053, ___distFront_12)); }
	inline float get_distFront_12() const { return ___distFront_12; }
	inline float* get_address_of_distFront_12() { return &___distFront_12; }
	inline void set_distFront_12(float value)
	{
		___distFront_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
