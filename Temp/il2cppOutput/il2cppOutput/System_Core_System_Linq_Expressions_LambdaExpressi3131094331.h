#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Core_System_Linq_Expressions_Expression1588164026.h"

// System.Linq.Expressions.Expression
struct Expression_t1588164026;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct ReadOnlyCollection_1_t2330998371;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.LambdaExpression
struct  LambdaExpression_t3131094331  : public Expression_t1588164026
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::body
	Expression_t1588164026 * ___body_2;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.LambdaExpression::parameters
	ReadOnlyCollection_1_t2330998371 * ___parameters_3;

public:
	inline static int32_t get_offset_of_body_2() { return static_cast<int32_t>(offsetof(LambdaExpression_t3131094331, ___body_2)); }
	inline Expression_t1588164026 * get_body_2() const { return ___body_2; }
	inline Expression_t1588164026 ** get_address_of_body_2() { return &___body_2; }
	inline void set_body_2(Expression_t1588164026 * value)
	{
		___body_2 = value;
		Il2CppCodeGenWriteBarrier(&___body_2, value);
	}

	inline static int32_t get_offset_of_parameters_3() { return static_cast<int32_t>(offsetof(LambdaExpression_t3131094331, ___parameters_3)); }
	inline ReadOnlyCollection_1_t2330998371 * get_parameters_3() const { return ___parameters_3; }
	inline ReadOnlyCollection_1_t2330998371 ** get_address_of_parameters_3() { return &___parameters_3; }
	inline void set_parameters_3(ReadOnlyCollection_1_t2330998371 * value)
	{
		___parameters_3 = value;
		Il2CppCodeGenWriteBarrier(&___parameters_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
