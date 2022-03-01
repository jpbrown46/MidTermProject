
#include "CmdUI.h"
#include <iostream>
#include <boost/locale.hpp>

using namespace boost::locale;

CmdUI::CmdUI()
{
}

void CmdUI::Init()
{
	generator gen;

	// Specify location of dictionaries
	gen.add_messages_path("C:\\Users\\jpbro\\Documents\\develop\\SoftwareArch\\Midterm\\MidtermProject\\MidTermProject\\MidTermProject\\CmdUILibrary\\");
	gen.add_messages_domain("CmdUILibrary");

	// Generate locales and imbue them to iostream
	std::locale::global(gen("de_DE.UTF - 8"));
	// Comment Out English Translation
	// locale::global(gen(""));

	std::cout.imbue(std::locale());

	std::cout << translate("context", "CmdUI: Initializing ") << std::endl;
	this->pCore = new Core();

	this->pColorImg = new ColorImg(this->pCore);
	this->pDrawImg = new DrawImg(this->pCore);
	this->pEraseImg = new EraseImg(this->pCore);
	this->pRotateImg = new RotateImg(this->pCore);
	this->pTranslateImg = new TranslateImg(this->pCore);
}

void CmdUI::Exit()
{
	generator gen;

	// Specify location of dictionaries
	gen.add_messages_path("C:\\Users\\jpbro\\Documents\\develop\\SoftwareArch\\Midterm\\MidtermProject\\MidTermProject\\MidTermProject\\CmdUILibrary\\");
	gen.add_messages_domain("CmdUILibrary");

	// Generate locales and imbue them to iostream
	std::locale::global(gen("de_DE.UTF - 8"));
	// Comment Out English Translation
	// locale::global(gen(""));

	std::cout.imbue(std::locale());

	std::cout << translate("context", "CmdUI: Exiting ") << std::endl;
}

void CmdUI::StartCmdLoop()
{
	int number;
	this->pCore->Init();
	this->pCore->LoadImage();

	generator gen;

	// Specify location of dictionaries
	gen.add_messages_path("C:\\Users\\jpbro\\Documents\\develop\\SoftwareArch\\Midterm\\MidtermProject\\MidTermProject\\MidTermProject\\CmdUILibrary\\");
	gen.add_messages_domain("CmdUILibrary");

	// Generate locales and imbue them to iostream
	std::locale::global(gen("de_DE.UTF - 8"));
	// Comment Out English Translation
	// locale::global(gen(""));

	std::cout.imbue(std::locale());
	std::cout << translate("context", "CmdUI: Starting Command Loop ") << std::endl;

	while (true) {
		generator gen;

		// Specify location of dictionaries
		gen.add_messages_path("C:\\Users\\jpbro\\Documents\\develop\\SoftwareArch\\Midterm\\MidtermProject\\MidTermProject\\MidTermProject\\CmdUILibrary\\");
		gen.add_messages_domain("CmdUILibrary");

		// Generate locales and imbue them to iostream
		std::locale::global(gen("de_DE.UTF - 8"));
		// Comment Out English Translation
		// locale::global(gen(""));

		std::cout.imbue(std::locale());

		std::cout << std::endl 
			<< translate("context", "Select an option: ") << std::endl
			<< translate("context", "1) Color Image ") << std::endl
			<< translate("context", "2) Draw box on Image ") << std::endl
			<< translate("context", "3) Erase part of Image ") << std::endl
			<< translate("context", "4) Rotate Image ") << std::endl
			<< translate("context", "5) Translate Image ") << std::endl
			<< translate("context", "6) Exit ") << std::endl
			<< "> ";
		std::cin >> number;

		switch (number) {
			case 1:
				this->pColorImg->DoColorImg("Blue");
				std::cout << std::endl;
				break;
			case 2:
				this->pDrawImg->DoDrawImg(5, 12, 24);
				std::cout << std::endl;
				break;
			case 3:
				this->pEraseImg->DoEraseImg(15, 24, 70);
				std::cout << std::endl;
				break;
			case 4:
				this->pRotateImg->DoRotateImg(42);
				std::cout << std::endl;
				break;
			case 5:
				this->pTranslateImg->DoTranslateImg(17, 50);
				std::cout << std::endl;
				break;
			case 6:
				this->pCore->SaveImage();
				std::cout << std::endl;
				this->pCore->Exit();
				return;

		}

	}
}

