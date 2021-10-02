#pragma once

#ifdef JG_PLATFORM_WINDOWS
	#ifdef JG_BUILD_DLL
		#define JGAMING_API __declspec(dllexport)
	#else
		#define JGAMING_API __declspec(dllimport) 
	#endif
#else
	#error JGaming only support Windows now!
#endif