#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Char[]
struct CharU5BU5D_t3528271667;
// System.String
struct String_t;
// SimpleJson.IJsonSerializerStrategy
struct IJsonSerializerStrategy_t3801793838;
// SimpleJson.PocoJsonSerializerStrategy
struct PocoJsonSerializerStrategy_t3084478566;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJson.SimpleJson
struct  SimpleJson_t666527214  : public Il2CppObject
{
public:

public:
};

struct SimpleJson_t666527214_StaticFields
{
public:
	// System.Char[] SimpleJson.SimpleJson::EscapeTable
	CharU5BU5D_t3528271667* ___EscapeTable_0;
	// System.Char[] SimpleJson.SimpleJson::EscapeCharacters
	CharU5BU5D_t3528271667* ___EscapeCharacters_1;
	// System.String SimpleJson.SimpleJson::EscapeCharactersString
	String_t* ___EscapeCharactersString_2;
	// SimpleJson.IJsonSerializerStrategy SimpleJson.SimpleJson::_currentJsonSerializerStrategy
	Il2CppObject * ____currentJsonSerializerStrategy_3;
	// SimpleJson.PocoJsonSerializerStrategy SimpleJson.SimpleJson::_pocoJsonSerializerStrategy
	PocoJsonSerializerStrategy_t3084478566 * ____pocoJsonSerializerStrategy_4;

public:
	inline static int32_t get_offset_of_EscapeTable_0() { return static_cast<int32_t>(offsetof(SimpleJson_t666527214_StaticFields, ___EscapeTable_0)); }
	inline CharU5BU5D_t3528271667* get_EscapeTable_0() const { return ___EscapeTable_0; }
	inline CharU5BU5D_t3528271667** get_address_of_EscapeTable_0() { return &___EscapeTable_0; }
	inline void set_EscapeTable_0(CharU5BU5D_t3528271667* value)
	{
		___EscapeTable_0 = value;
		Il2CppCodeGenWriteBarrier(&___EscapeTable_0, value);
	}

	inline static int32_t get_offset_of_EscapeCharacters_1() { return static_cast<int32_t>(offsetof(SimpleJson_t666527214_StaticFields, ___EscapeCharacters_1)); }
	inline CharU5BU5D_t3528271667* get_EscapeCharacters_1() const { return ___EscapeCharacters_1; }
	inline CharU5BU5D_t3528271667** get_address_of_EscapeCharacters_1() { return &___EscapeCharacters_1; }
	inline void set_EscapeCharacters_1(CharU5BU5D_t3528271667* value)
	{
		___EscapeCharacters_1 = value;
		Il2CppCodeGenWriteBarrier(&___EscapeCharacters_1, value);
	}

	inline static int32_t get_offset_of_EscapeCharactersString_2() { return static_cast<int32_t>(offsetof(SimpleJson_t666527214_StaticFields, ___EscapeCharactersString_2)); }
	inline String_t* get_EscapeCharactersString_2() const { return ___EscapeCharactersString_2; }
	inline String_t** get_address_of_EscapeCharactersString_2() { return &___EscapeCharactersString_2; }
	inline void set_EscapeCharactersString_2(String_t* value)
	{
		___EscapeCharactersString_2 = value;
		Il2CppCodeGenWriteBarrier(&___EscapeCharactersString_2, value);
	}

	inline static int32_t get_offset_of__currentJsonSerializerStrategy_3() { return static_cast<int32_t>(offsetof(SimpleJson_t666527214_StaticFields, ____currentJsonSerializerStrategy_3)); }
	inline Il2CppObject * get__currentJsonSerializerStrategy_3() const { return ____currentJsonSerializerStrategy_3; }
	inline Il2CppObject ** get_address_of__currentJsonSerializerStrategy_3() { return &____currentJsonSerializerStrategy_3; }
	inline void set__currentJsonSerializerStrategy_3(Il2CppObject * value)
	{
		____currentJsonSerializerStrategy_3 = value;
		Il2CppCodeGenWriteBarrier(&____currentJsonSerializerStrategy_3, value);
	}

	inline static int32_t get_offset_of__pocoJsonSerializerStrategy_4() { return static_cast<int32_t>(offsetof(SimpleJson_t666527214_StaticFields, ____pocoJsonSerializerStrategy_4)); }
	inline PocoJsonSerializerStrategy_t3084478566 * get__pocoJsonSerializerStrategy_4() const { return ____pocoJsonSerializerStrategy_4; }
	inline PocoJsonSerializerStrategy_t3084478566 ** get_address_of__pocoJsonSerializerStrategy_4() { return &____pocoJsonSerializerStrategy_4; }
	inline void set__pocoJsonSerializerStrategy_4(PocoJsonSerializerStrategy_t3084478566 * value)
	{
		____pocoJsonSerializerStrategy_4 = value;
		Il2CppCodeGenWriteBarrier(&____pocoJsonSerializerStrategy_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
