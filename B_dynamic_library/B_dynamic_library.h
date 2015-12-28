#pragma once

#if defined(B_EXPORT_API)
	#define B_EXPORT_MACRO __declspec(dllexport)
#else
	#define B_EXPORT_MACRO
#endif

#ifdef __cplusplus
extern "C" {
#endif
	B_EXPORT_MACRO int function_B(int f);
}