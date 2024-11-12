//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "KeyboardReader.h"
#include <conio.h>
#pragma package(smart_init)

__fastcall KeyboardRead::KeyboardRead(bool CreateSuspended)
        : TThread(CreateSuspended)
{
}
//---------------------------------------------------------------------------
void __fastcall KeyboardRead::Execute()
{
        ButtonPressed = 1;
        while(1)
        {
                ButtonPressed = getch();
        }
}
//---------------------------------------------------------------------------
