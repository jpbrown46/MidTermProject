#pragma once

// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the UILIBRARY_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// UILIBRARY_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef ERASEIMGLIBRARY_EXPORTS
#define ERASEIMGLIBRARY_API __declspec(dllexport)
#else
#define ERASEIMGLIBRARY_API __declspec(dllimport)
#endif

#include "../Core/Core.h"

class ERASEIMGLIBRARY_API EraseImg
{
private:
	Core* pCore;

public:

	EraseImg(Core* pCore);

	void DoEraseImg(int x, int y, int position);
};