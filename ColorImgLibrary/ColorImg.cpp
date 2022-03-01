#include "ColorImg.h"
#include <iostream>
#include <string>
#include <boost/locale.hpp>

using namespace boost::locale;

ColorImg::ColorImg(Core* pCore)
{
	this->pCore = pCore;
}

void ColorImg::DoColorImg(std::string color)
{
	generator gen;

	// Specify location of dictionaries
	gen.add_messages_path("C:\\Users\\jpbro\\Documents\\develop\\SoftwareArch\\Midterm\\MidtermProject\\MidTermProject\\MidTermProject\\ColorImgLibrary\\");
	gen.add_messages_domain("ColorImgLibrary");

	// Generate locales and imbue them to iostream
	std::locale::global(gen("de_DE.UTF - 8"));
	// Comment Out English Translation
	// locale::global(gen(""));
	std::cout.imbue(std::locale());

	std::cout << translate("context", "ColorImg: Coloring image ") << color << std::endl;

	this->pCore->UpdateImage();
}
