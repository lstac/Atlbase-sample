#include "pch.h"
#include "Class1.h"

#include "..\B_dynamic_library\B_dynamic_library.h"

using namespace C_runtime_component;
using namespace Platform;

Class1::Class1()
{
}

int Class1::function_C(int f)
{
	return function_B(f);
}