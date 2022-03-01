#include "EraseImg.h"
#include <iostream>
#include <boost/locale.hpp>

using namespace boost::locale;

EraseImg::EraseImg(Core* pCore)
{
	this->pCore = pCore;
}

void EraseImg::DoEraseImg(int x, int y, int position)
{
	generator gen;

	// Specify location of dictionaries
	gen.add_messages_path("C:\\Users\\jpbro\\Documents\\develop\\SoftwareArch\\Midterm\\MidtermProject\\MidTermProject\\MidTermProject\\EraseImgLibrary\\");
	gen.add_messages_domain("EraseImgLibrary");

	// Generate locales and imbue them to iostream
	std::locale::global(gen("de_DE.UTF - 8"));
	// Comment Out English Translation
	// locale::global(gen(""));
	std::cout.imbue(std::locale());

	std::cout << translate("context", "EraseImg: Erasing box from image of dimensions ") << x << "x" << y <<
		translate("context", " at position ") << position << std::endl;

	this->pCore->UpdateImage();
}
