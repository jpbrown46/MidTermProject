// MidTermProject.cpp
// This file contains the UI-based implmentation of the image manipulation application.
// It will access the CmdUI library, which will allow the user to control which transformations are performed.
//

#include <iostream>
#include "../CmdUILibrary/CmdUI.h"

int main()
{
    CmdUI* UI = new CmdUI();
    
    UI->Init();

    UI->StartCmdLoop();

    UI->Exit();
}