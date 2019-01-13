#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Object
struct Il2CppObject;
// BugsnagUnity.Payload.IPayload
struct IPayload_t4171288320;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// BugsnagUnity.Delivery
struct Delivery_t616478383;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t463507806;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BugsnagUnity.Delivery/<PushToServer>d__13
struct  U3CPushToServerU3Ed__13_t4067971787  : public Il2CppObject
{
public:
	// System.Int32 BugsnagUnity.Delivery/<PushToServer>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BugsnagUnity.Delivery/<PushToServer>d__13::<>2__current
	Il2CppObject * ___U3CU3E2__current_1;
	// BugsnagUnity.Payload.IPayload BugsnagUnity.Delivery/<PushToServer>d__13::payload
	Il2CppObject * ___payload_2;
	// System.Byte[] BugsnagUnity.Delivery/<PushToServer>d__13::body
	ByteU5BU5D_t4116647657* ___body_3;
	// BugsnagUnity.Delivery BugsnagUnity.Delivery/<PushToServer>d__13::<>4__this
	Delivery_t616478383 * ___U3CU3E4__this_4;
	// UnityEngine.Networking.UnityWebRequest BugsnagUnity.Delivery/<PushToServer>d__13::<req>5__2
	UnityWebRequest_t463507806 * ___U3CreqU3E5__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPushToServerU3Ed__13_t4067971787, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPushToServerU3Ed__13_t4067971787, ___U3CU3E2__current_1)); }
	inline Il2CppObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Il2CppObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Il2CppObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3E2__current_1, value);
	}

	inline static int32_t get_offset_of_payload_2() { return static_cast<int32_t>(offsetof(U3CPushToServerU3Ed__13_t4067971787, ___payload_2)); }
	inline Il2CppObject * get_payload_2() const { return ___payload_2; }
	inline Il2CppObject ** get_address_of_payload_2() { return &___payload_2; }
	inline void set_payload_2(Il2CppObject * value)
	{
		___payload_2 = value;
		Il2CppCodeGenWriteBarrier(&___payload_2, value);
	}

	inline static int32_t get_offset_of_body_3() { return static_cast<int32_t>(offsetof(U3CPushToServerU3Ed__13_t4067971787, ___body_3)); }
	inline ByteU5BU5D_t4116647657* get_body_3() const { return ___body_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_body_3() { return &___body_3; }
	inline void set_body_3(ByteU5BU5D_t4116647657* value)
	{
		___body_3 = value;
		Il2CppCodeGenWriteBarrier(&___body_3, value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CPushToServerU3Ed__13_t4067971787, ___U3CU3E4__this_4)); }
	inline Delivery_t616478383 * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline Delivery_t616478383 ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(Delivery_t616478383 * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3E4__this_4, value);
	}

	inline static int32_t get_offset_of_U3CreqU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CPushToServerU3Ed__13_t4067971787, ___U3CreqU3E5__2_5)); }
	inline UnityWebRequest_t463507806 * get_U3CreqU3E5__2_5() const { return ___U3CreqU3E5__2_5; }
	inline UnityWebRequest_t463507806 ** get_address_of_U3CreqU3E5__2_5() { return &___U3CreqU3E5__2_5; }
	inline void set_U3CreqU3E5__2_5(UnityWebRequest_t463507806 * value)
	{
		___U3CreqU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CreqU3E5__2_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
