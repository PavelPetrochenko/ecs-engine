#pragma once

#ifdef _WIN32
	#define ENGINE_EXPORT __declspec(dllexport)
	#define ENGINE_IMPORT __declspec(dllimport)
	#define ENGINE_INLINE __forceinline
#else
	#define ENGINE_EXPORT __attribute__((visibility("default")))
	#define ENGINE_IMPORT
	#define ENGINE_INLINE __inline__
#endif

#if defined(ENGINE_SHARED_LIBRARY)
	#define ENGINE_API ENGINE_EXPORT
#else
	#define ENGINE_API ENGINE_IMPORT
#endif

#include <cstdint>