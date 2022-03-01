#include "TranslateImg.h"
#include <iostream>
#include <boost/locale.hpp>

using namespace boost::locale;

TranslateImg::TranslateImg(Core* pCore)
{
	this->pCore = pCore;
}

void TranslateImg::DoTranslateImg(int x, int y)
{
	generator gen;

	// Specify location of dictionaries
	gen.add_messages_path("C:\\Users\\jpbro\\Documents\\develop\\SoftwareArch\\Midterm\\MidtermProject\\MidTermProject\\MidTermProject\\TranslateImgLibrary\\");
	gen.add_messages_domain("TranslateImgLibrary");

	// Generate locales and imbue them to iostream
	std::locale::global(gen("de_DE.UTF - 8"));
	// Comment Out English Translation
	// locale::global(gen(""));
	std::cout.imbue(std::locale());

	std::cout << translate("context", "TranslateImg: Translating image ") << y << translate("context", " pixels down and ") <<
		x << translate("context", " pixels across ") << std::endl;

	this->pCore->UpdateImage();
}
