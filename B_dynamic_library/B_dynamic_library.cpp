#include "pch.h"
#include "B_dynamic_library.h"
#include "..\A_static_library\A_static_library.h"

int function_B(int f)
{
	return function_A(f);
}