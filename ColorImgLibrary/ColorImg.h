#pragma once

// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the UILIBRARY_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// UILIBRARY_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef COLORIMGLIBRARY_EXPORTS
#define COLORIMGLIBRARY_API __declspec(dllexport)
#else
#define COLORIMGLIBRARY_API __declspec(dllimport)
#endif

#include <string>
#include "../Core/Core.h"

class COLORIMGLIBRARY_API ColorImg
{
private:
	Core* pCore;

public:

	ColorImg(Core* pCore);

	void DoColorImg(std::string color);
};