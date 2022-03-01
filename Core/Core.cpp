
#include "Core.h"
#include <iostream>

#include <boost/locale.hpp>

using namespace boost::locale;

Core::Core()
{
}

void Core::Init()
{
	generator gen;

	// Specify location of dictionaries
	gen.add_messages_path("C:\\Users\\jpbro\\Documents\\develop\\SoftwareArch\\Midterm\\MidtermProject\\MidTermProject\\MidTermProject\\Core\\");
	gen.add_messages_domain("Core");

	// Generate locales and imbue them to iostream
	std::locale::global(gen("de_DE.UTF - 8"));
	// Comment Out English Translation
	// locale::global(gen(""));
	std::cout.imbue(std::locale());

	std::cout << translate("context", "Core: Initializing ") << std::endl;
}

void Core::Exit()
{
	generator gen;

	// Specify location of dictionaries
	gen.add_messages_path("C:\\Users\\jpbro\\Documents\\develop\\SoftwareArch\\Midterm\\MidtermProject\\MidTermProject\\MidTermProject\\Core\\");
	gen.add_messages_domain("Core");

	// Generate locales and imbue them to iostream
	std::locale::global(gen("de_DE.UTF - 8"));
	// Comment Out English Translation
	// locale::global(gen(""));
	std::cout.imbue(std::locale());

	std::cout << translate("context", "Core: Exiting ") << std::endl;
}

void Core::LoadImage()
{
	generator gen;

	// Specify location of dictionaries
	gen.add_messages_path("C:\\Users\\jpbro\\Documents\\develop\\SoftwareArch\\Midterm\\MidtermProject\\MidTermProject\\MidTermProject\\Core\\");
	gen.add_messages_domain("Core");

	// Generate locales and imbue them to iostream
	std::locale::global(gen("de_DE.UTF - 8"));
	// Comment Out English Translation
	// locale::global(gen(""));
	std::cout.imbue(std::locale());

	std::cout << translate("context", "Core: Reading in Image ") << std::endl;
}

void Core::UpdateImage()
{
	generator gen;

	// Specify location of dictionaries
	gen.add_messages_path("C:\\Users\\jpbro\\Documents\\develop\\SoftwareArch\\Midterm\\MidtermProject\\MidTermProject\\MidTermProject\\Core\\");
	gen.add_messages_domain("Core");

	// Generate locales and imbue them to iostream
	std::locale::global(gen("de_DE.UTF - 8"));
	// Comment Out English Translation
	// locale::global(gen(""));
	std::cout.imbue(std::locale());

	std::cout << translate("context", "Core: Updating Image ") << std::endl;
}

void Core::SaveImage()
{
	generator gen;

	// Specify location of dictionaries
	gen.add_messages_path("C:\\Users\\jpbro\\Documents\\develop\\SoftwareArch\\Midterm\\MidtermProject\\MidTermProject\\MidTermProject\\Core\\");
	gen.add_messages_domain("Core");

	// Generate locales and imbue them to iostream
	std::locale::global(gen("de_DE.UTF - 8"));
	// Comment Out English Translation
	// locale::global(gen(""));
	std::cout.imbue(std::locale());

	std::cout << translate("context", "Core: Writing Image to output ") << std::endl;
}
