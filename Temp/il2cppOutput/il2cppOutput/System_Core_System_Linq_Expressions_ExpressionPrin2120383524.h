﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Core_System_Linq_Expressions_ExpressionVisi1561124052.h"

// System.Text.StringBuilder
struct StringBuilder_t1712802186;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ExpressionPrinter
struct  ExpressionPrinter_t2120383524  : public ExpressionVisitor_t1561124052
{
public:
	// System.Text.StringBuilder System.Linq.Expressions.ExpressionPrinter::builder
	StringBuilder_t1712802186 * ___builder_0;

public:
	inline static int32_t get_offset_of_builder_0() { return static_cast<int32_t>(offsetof(ExpressionPrinter_t2120383524, ___builder_0)); }
	inline StringBuilder_t1712802186 * get_builder_0() const { return ___builder_0; }
	inline StringBuilder_t1712802186 ** get_address_of_builder_0() { return &___builder_0; }
	inline void set_builder_0(StringBuilder_t1712802186 * value)
	{
		___builder_0 = value;
		Il2CppCodeGenWriteBarrier(&___builder_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
