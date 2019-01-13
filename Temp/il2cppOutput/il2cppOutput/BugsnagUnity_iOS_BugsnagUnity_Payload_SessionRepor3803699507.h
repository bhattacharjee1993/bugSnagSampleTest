#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Collections_Generic_Dictionary_2_g2865362463.h"

// BugsnagUnity.IConfiguration
struct IConfiguration_t3491182725;
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>[]
struct KeyValuePair_2U5BU5D_t336297922;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BugsnagUnity.Payload.SessionReport
struct  SessionReport_t3803699507  : public Dictionary_2_t2865362463
{
public:
	// BugsnagUnity.IConfiguration BugsnagUnity.Payload.SessionReport::<Configuration>k__BackingField
	Il2CppObject * ___U3CConfigurationU3Ek__BackingField_16;
	// System.Collections.Generic.KeyValuePair`2<System.String,System.String>[] BugsnagUnity.Payload.SessionReport::<Headers>k__BackingField
	KeyValuePair_2U5BU5D_t336297922* ___U3CHeadersU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CConfigurationU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(SessionReport_t3803699507, ___U3CConfigurationU3Ek__BackingField_16)); }
	inline Il2CppObject * get_U3CConfigurationU3Ek__BackingField_16() const { return ___U3CConfigurationU3Ek__BackingField_16; }
	inline Il2CppObject ** get_address_of_U3CConfigurationU3Ek__BackingField_16() { return &___U3CConfigurationU3Ek__BackingField_16; }
	inline void set_U3CConfigurationU3Ek__BackingField_16(Il2CppObject * value)
	{
		___U3CConfigurationU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CConfigurationU3Ek__BackingField_16, value);
	}

	inline static int32_t get_offset_of_U3CHeadersU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(SessionReport_t3803699507, ___U3CHeadersU3Ek__BackingField_17)); }
	inline KeyValuePair_2U5BU5D_t336297922* get_U3CHeadersU3Ek__BackingField_17() const { return ___U3CHeadersU3Ek__BackingField_17; }
	inline KeyValuePair_2U5BU5D_t336297922** get_address_of_U3CHeadersU3Ek__BackingField_17() { return &___U3CHeadersU3Ek__BackingField_17; }
	inline void set_U3CHeadersU3Ek__BackingField_17(KeyValuePair_2U5BU5D_t336297922* value)
	{
		___U3CHeadersU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CHeadersU3Ek__BackingField_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
