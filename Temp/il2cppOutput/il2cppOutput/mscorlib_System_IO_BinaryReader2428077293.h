﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.IO.Stream
struct Stream_t1273022909;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Text.Decoder
struct Decoder_t2204182725;
// System.Char[]
struct CharU5BU5D_t3528271667;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.BinaryReader
struct  BinaryReader_t2428077293  : public Il2CppObject
{
public:
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_t1273022909 * ___m_stream_0;
	// System.Text.Encoding System.IO.BinaryReader::m_encoding
	Encoding_t1523322056 * ___m_encoding_1;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_t4116647657* ___m_buffer_2;
	// System.Text.Decoder System.IO.BinaryReader::decoder
	Decoder_t2204182725 * ___decoder_3;
	// System.Char[] System.IO.BinaryReader::charBuffer
	CharU5BU5D_t3528271667* ___charBuffer_4;
	// System.Boolean System.IO.BinaryReader::m_disposed
	bool ___m_disposed_5;

public:
	inline static int32_t get_offset_of_m_stream_0() { return static_cast<int32_t>(offsetof(BinaryReader_t2428077293, ___m_stream_0)); }
	inline Stream_t1273022909 * get_m_stream_0() const { return ___m_stream_0; }
	inline Stream_t1273022909 ** get_address_of_m_stream_0() { return &___m_stream_0; }
	inline void set_m_stream_0(Stream_t1273022909 * value)
	{
		___m_stream_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_stream_0, value);
	}

	inline static int32_t get_offset_of_m_encoding_1() { return static_cast<int32_t>(offsetof(BinaryReader_t2428077293, ___m_encoding_1)); }
	inline Encoding_t1523322056 * get_m_encoding_1() const { return ___m_encoding_1; }
	inline Encoding_t1523322056 ** get_address_of_m_encoding_1() { return &___m_encoding_1; }
	inline void set_m_encoding_1(Encoding_t1523322056 * value)
	{
		___m_encoding_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_encoding_1, value);
	}

	inline static int32_t get_offset_of_m_buffer_2() { return static_cast<int32_t>(offsetof(BinaryReader_t2428077293, ___m_buffer_2)); }
	inline ByteU5BU5D_t4116647657* get_m_buffer_2() const { return ___m_buffer_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_buffer_2() { return &___m_buffer_2; }
	inline void set_m_buffer_2(ByteU5BU5D_t4116647657* value)
	{
		___m_buffer_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_buffer_2, value);
	}

	inline static int32_t get_offset_of_decoder_3() { return static_cast<int32_t>(offsetof(BinaryReader_t2428077293, ___decoder_3)); }
	inline Decoder_t2204182725 * get_decoder_3() const { return ___decoder_3; }
	inline Decoder_t2204182725 ** get_address_of_decoder_3() { return &___decoder_3; }
	inline void set_decoder_3(Decoder_t2204182725 * value)
	{
		___decoder_3 = value;
		Il2CppCodeGenWriteBarrier(&___decoder_3, value);
	}

	inline static int32_t get_offset_of_charBuffer_4() { return static_cast<int32_t>(offsetof(BinaryReader_t2428077293, ___charBuffer_4)); }
	inline CharU5BU5D_t3528271667* get_charBuffer_4() const { return ___charBuffer_4; }
	inline CharU5BU5D_t3528271667** get_address_of_charBuffer_4() { return &___charBuffer_4; }
	inline void set_charBuffer_4(CharU5BU5D_t3528271667* value)
	{
		___charBuffer_4 = value;
		Il2CppCodeGenWriteBarrier(&___charBuffer_4, value);
	}

	inline static int32_t get_offset_of_m_disposed_5() { return static_cast<int32_t>(offsetof(BinaryReader_t2428077293, ___m_disposed_5)); }
	inline bool get_m_disposed_5() const { return ___m_disposed_5; }
	inline bool* get_address_of_m_disposed_5() { return &___m_disposed_5; }
	inline void set_m_disposed_5(bool value)
	{
		___m_disposed_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
