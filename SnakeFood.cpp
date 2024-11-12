//---------------------------------------------------------------------------
#pragma hdrstop
#include <conio.h>
#include <iostream.h>
#include "SnakeFood.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
void SnakeFood::SetEaten(bool ParamEaten)
{
        Eaten = ParamEaten;
}
bool SnakeFood::GetEaten(void)
{
        return Eaten;
}
void SnakeFood::SetFoodX(int ParamX)
{
        x = ParamX;
}
void SnakeFood::SetFoodY(int ParamY)
{
        y = ParamY;
}
int SnakeFood::GetFoodX(void)
{
        return x;
}
int SnakeFood::GetFoodY(void)
{
        return y;
}
void SnakeFood::DrawSnakeFood(int ParamX,int ParamY)
{
        textbackground(WHITE);
        gotoxy(ParamX,ParamY);
        cprintf(" ");
}

