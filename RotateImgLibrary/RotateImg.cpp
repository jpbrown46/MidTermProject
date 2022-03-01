#include "RotateImg.h"
#include <iostream>
#include <boost/locale.hpp>

using namespace boost::locale;

RotateImg::RotateImg(Core* pCore)
{
	this->pCore = pCore;
}

void RotateImg::DoRotateImg(int degrees)
{
	generator gen;

	// Specify location of dictionaries
	gen.add_messages_path("C:\\Users\\jpbro\\Documents\\develop\\SoftwareArch\\Midterm\\MidtermProject\\MidTermProject\\MidTermProject\\RotateImgLibrary\\");
	gen.add_messages_domain("RotateImgLibrary");

	// Generate locales and imbue them to iostream
	std::locale::global(gen("de_DE.UTF - 8"));
	// Comment Out English Translation
	// locale::global(gen(""));
	std::cout.imbue(std::locale());

	std::cout << translate("context", "RotateImg: Rotating image ") << degrees << translate("context", " degrees") << std::endl;

	this->pCore->UpdateImage();
}
