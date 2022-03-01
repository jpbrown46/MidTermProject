// MidTermExe-BatchMode.cpp 
// This file contains the batch mode implementation of the image manipulation application
// It will run one of each image manipulation type, and then exit.

#include <iostream>
#include "../Core/Core.h"
#include "../ColorImgLibrary/ColorImg.h"
#include "../DrawImgLibrary/DrawImg.h"
#include "../EraseImgLibrary/EraseImg.h"
#include "../RotateImgLibrary/RotateImg.h"
#include "../TranslateImgLibrary/TranslateImg.h"
#include <boost/locale.hpp>

using namespace boost::locale;

int main()
{
	generator gen;

	// Specify location of dictionaries
	gen.add_messages_path("C:\\Users\\jpbro\\Documents\\develop\\SoftwareArch\\Midterm\\MidtermProject\\MidTermProject\\MidTermProject\\MidTermExe-BatchMode\\");
	gen.add_messages_domain("MidTermExe-BatchMode");

	// Generate locales and imbue them to iostream
	std::locale::global(gen("de_DE.UTF - 8"));
	// Comment Out English Translation
	// locale::global(gen(""));
	std::cout.imbue(std::locale());

	std::cout << translate("context", "MidtermExe-BatchMode: Starting BatchMode") << std::endl;

	Core* pCore = new Core();

	ColorImg* pColorImg = new ColorImg(pCore);
	DrawImg* pDrawImg = new DrawImg(pCore);
	EraseImg* pEraseImg = new EraseImg(pCore);
	RotateImg* pRotateImg = new RotateImg(pCore);
	TranslateImg* pTranslateImg = new TranslateImg(pCore);
	
	pCore->Init();
	std::cout << std::endl;
	pCore->LoadImage();
	std::cout << std::endl;
	

	pColorImg->DoColorImg("Green");
	std::cout << std::endl;

	pDrawImg->DoDrawImg(6, 18, 24);
	std::cout << std::endl;

	pEraseImg->DoEraseImg(1, 44, 70);
	std::cout << std::endl;

	pRotateImg->DoRotateImg(80);
	std::cout << std::endl;

	pTranslateImg->DoTranslateImg(100, 72);
	std::cout << std::endl;

	pCore->SaveImage();
	pCore->Exit();
}
