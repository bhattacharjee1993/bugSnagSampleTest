#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Collections_Generic_Dictionary_2_g2865362463.h"
#include "mscorlib_System_Nullable_1_gen1796327516.h"

// BugsnagUnity.Payload.HandledState
struct HandledState_t1618421715;
// BugsnagUnity.Payload.Metadata
struct Metadata_t1989352756;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BugsnagUnity.Payload.Event
struct  Event_t2396547531  : public Dictionary_2_t2865362463
{
public:
	// BugsnagUnity.Payload.HandledState BugsnagUnity.Payload.Event::_handledState
	HandledState_t1618421715 * ____handledState_16;
	// BugsnagUnity.Payload.HandledState BugsnagUnity.Payload.Event::<OriginalSeverity>k__BackingField
	HandledState_t1618421715 * ___U3COriginalSeverityU3Ek__BackingField_17;
	// BugsnagUnity.Payload.Metadata BugsnagUnity.Payload.Event::<Metadata>k__BackingField
	Metadata_t1989352756 * ___U3CMetadataU3Ek__BackingField_18;
	// System.Nullable`1<UnityEngine.LogType> BugsnagUnity.Payload.Event::<LogType>k__BackingField
	Nullable_1_t1796327516  ___U3CLogTypeU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of__handledState_16() { return static_cast<int32_t>(offsetof(Event_t2396547531, ____handledState_16)); }
	inline HandledState_t1618421715 * get__handledState_16() const { return ____handledState_16; }
	inline HandledState_t1618421715 ** get_address_of__handledState_16() { return &____handledState_16; }
	inline void set__handledState_16(HandledState_t1618421715 * value)
	{
		____handledState_16 = value;
		Il2CppCodeGenWriteBarrier(&____handledState_16, value);
	}

	inline static int32_t get_offset_of_U3COriginalSeverityU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Event_t2396547531, ___U3COriginalSeverityU3Ek__BackingField_17)); }
	inline HandledState_t1618421715 * get_U3COriginalSeverityU3Ek__BackingField_17() const { return ___U3COriginalSeverityU3Ek__BackingField_17; }
	inline HandledState_t1618421715 ** get_address_of_U3COriginalSeverityU3Ek__BackingField_17() { return &___U3COriginalSeverityU3Ek__BackingField_17; }
	inline void set_U3COriginalSeverityU3Ek__BackingField_17(HandledState_t1618421715 * value)
	{
		___U3COriginalSeverityU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3COriginalSeverityU3Ek__BackingField_17, value);
	}

	inline static int32_t get_offset_of_U3CMetadataU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Event_t2396547531, ___U3CMetadataU3Ek__BackingField_18)); }
	inline Metadata_t1989352756 * get_U3CMetadataU3Ek__BackingField_18() const { return ___U3CMetadataU3Ek__BackingField_18; }
	inline Metadata_t1989352756 ** get_address_of_U3CMetadataU3Ek__BackingField_18() { return &___U3CMetadataU3Ek__BackingField_18; }
	inline void set_U3CMetadataU3Ek__BackingField_18(Metadata_t1989352756 * value)
	{
		___U3CMetadataU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMetadataU3Ek__BackingField_18, value);
	}

	inline static int32_t get_offset_of_U3CLogTypeU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(Event_t2396547531, ___U3CLogTypeU3Ek__BackingField_19)); }
	inline Nullable_1_t1796327516  get_U3CLogTypeU3Ek__BackingField_19() const { return ___U3CLogTypeU3Ek__BackingField_19; }
	inline Nullable_1_t1796327516 * get_address_of_U3CLogTypeU3Ek__BackingField_19() { return &___U3CLogTypeU3Ek__BackingField_19; }
	inline void set_U3CLogTypeU3Ek__BackingField_19(Nullable_1_t1796327516  value)
	{
		___U3CLogTypeU3Ek__BackingField_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
