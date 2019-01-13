#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Collections_Generic_Dictionary_2_g2865362463.h"
#include "mscorlib_System_Guid3193532887.h"
#include "mscorlib_System_DateTime3738529785.h"

// BugsnagUnity.Payload.SessionEvents
struct SessionEvents_t1112224443;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BugsnagUnity.Payload.Session
struct  Session_t99682926  : public Dictionary_2_t2865362463
{
public:
	// System.Guid BugsnagUnity.Payload.Session::<Id>k__BackingField
	Guid_t  ___U3CIdU3Ek__BackingField_16;
	// System.DateTime BugsnagUnity.Payload.Session::<StartedAt>k__BackingField
	DateTime_t3738529785  ___U3CStartedAtU3Ek__BackingField_17;
	// BugsnagUnity.Payload.SessionEvents BugsnagUnity.Payload.Session::<Events>k__BackingField
	SessionEvents_t1112224443 * ___U3CEventsU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Session_t99682926, ___U3CIdU3Ek__BackingField_16)); }
	inline Guid_t  get_U3CIdU3Ek__BackingField_16() const { return ___U3CIdU3Ek__BackingField_16; }
	inline Guid_t * get_address_of_U3CIdU3Ek__BackingField_16() { return &___U3CIdU3Ek__BackingField_16; }
	inline void set_U3CIdU3Ek__BackingField_16(Guid_t  value)
	{
		___U3CIdU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CStartedAtU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Session_t99682926, ___U3CStartedAtU3Ek__BackingField_17)); }
	inline DateTime_t3738529785  get_U3CStartedAtU3Ek__BackingField_17() const { return ___U3CStartedAtU3Ek__BackingField_17; }
	inline DateTime_t3738529785 * get_address_of_U3CStartedAtU3Ek__BackingField_17() { return &___U3CStartedAtU3Ek__BackingField_17; }
	inline void set_U3CStartedAtU3Ek__BackingField_17(DateTime_t3738529785  value)
	{
		___U3CStartedAtU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CEventsU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Session_t99682926, ___U3CEventsU3Ek__BackingField_18)); }
	inline SessionEvents_t1112224443 * get_U3CEventsU3Ek__BackingField_18() const { return ___U3CEventsU3Ek__BackingField_18; }
	inline SessionEvents_t1112224443 ** get_address_of_U3CEventsU3Ek__BackingField_18() { return &___U3CEventsU3Ek__BackingField_18; }
	inline void set_U3CEventsU3Ek__BackingField_18(SessionEvents_t1112224443 * value)
	{
		___U3CEventsU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CEventsU3Ek__BackingField_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
