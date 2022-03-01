#pragma once

// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the UILIBRARY_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// UILIBRARY_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef CMDUILIBRARY_EXPORTS
#define CMDUILIBRARY_API __declspec(dllexport)
#else
#define CMDUILIBRARY_API __declspec(dllimport)
#endif

#include "../Core/Core.h"
#include "../ColorImgLibrary/ColorImg.h"
#include "../DrawImgLibrary/DrawImg.h"
#include "../EraseImgLibrary/EraseImg.h"
#include "../RotateImgLibrary/RotateImg.h"
#include "../TranslateImgLibrary/TranslateImg.h"

class CMDUILIBRARY_API CmdUI
{
private:
	Core* pCore;
	ColorImg* pColorImg;
	DrawImg* pDrawImg;
	EraseImg* pEraseImg;
	RotateImg* pRotateImg;
	TranslateImg* pTranslateImg;

public:

	CmdUI();

	void Init();
	void Exit();
	void StartCmdLoop();

};