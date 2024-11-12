//---------------------------------------------------------------------------

#pragma hdrstop
#include <iostream.h>
#include <conio.h>
#include "snake.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
Snake::Snake()
{
}
char Snake::GetDirection(void)
{
        return Direction;
}
void Snake::SetDirection(char ParamDirection)
{
        Direction = ParamDirection;
}
int Snake::GetSnakeX(void)
{
        return Table[0].x;
}
int Snake::GetSnakeY(void)
{
        return Table[0].y;
}
void Snake::SetLocation(int ParamX,int ParamY,int ParamSize)
{
        int i=0;
        do
        {
                Table[i].x = ParamX-i;  //p‰‰n sijainti
                Table[i].y = ParamY;
                i++;
        }
        while(i<ParamSize);
}
int Snake::GetLives(void)
{
        return Lives;
}
int Snake::GetSpeed(void)
{
        return Speed;
}
void Snake::SetSize(int ParamSize)
{
        Size = ParamSize;
}
void Snake::SetLives(int ParamLives)
{
        Lives = ParamLives;
}
void Snake::SetColor(int ParamColor)
{
        Color = ParamColor;
}
void Snake::SetSpeed(int ParamSpeed)
{
        Speed = ParamSpeed;
}
int Snake::GetSize(void)
{
        return Size;
}
bool Snake::DrawSnake(int ParamSize,int ParamX,int ParamY)
{
        int i=0;
        bool ReturnValue = TRUE;
        /* Poistetaan madon viimeinen pikseli */
        gotoxy(Table[ParamSize-1].x,Table[ParamSize-1].y);
        textbackground(BLACK);
        cprintf(" ");
        if(Direction == 'r')
        {
                do
                {
                        NewPixels[i].x = Table[i].x;
                        NewPixels[i].y = Table[i].y;
                        i++;
                }
                while(i < ParamSize);
                Table[0].x = Table[0].x + 1;
                i=0;
                do
                {
                        Table[i+1].x = NewPixels[i].x;
                        Table[i+1].y = NewPixels[i].y;
                        i++;
                }
                while(i < (ParamSize-1));
                i=0;
                do
                {
                        if(Table[0].x == Table[i+1].x && Table[0].y == Table[i+1].y)
                                ReturnValue = FALSE;
                        i++;
                }
                while(i < (ParamSize-1));
        }
        else if(Direction == 'l')
        {
                do
                {
                        NewPixels[i].x = Table[i].x;
                        NewPixels[i].y = Table[i].y;
                        i++;
                }
                while(i < ParamSize);
                Table[0].x = Table[0].x - 1;
                i=0;
                do
                {
                        Table[i+1].x = NewPixels[i].x;
                        Table[i+1].y = NewPixels[i].y;
                        i++;
                }
                while(i < (ParamSize-1));
                i=0;
                do
                {
                        if(Table[0].x == Table[i+1].x && Table[0].y == Table[i+1].y)
                                ReturnValue = FALSE;
                        i++;
                }
                while(i < (ParamSize-1));
        }
        else if(Direction == 'u')
        {
                do
                {
                        NewPixels[i].x = Table[i].x;
                        NewPixels[i].y = Table[i].y;
                        i++;
                }
                while(i < ParamSize);
                Table[0].y = Table[0].y + 1;
                i=0;
                do
                {
                        Table[i+1].x = NewPixels[i].x;
                        Table[i+1].y = NewPixels[i].y;
                        i++;
                }
                while(i < (ParamSize-1));
                i=0;
                do
                {
                        if(Table[0].x == Table[i+1].x && Table[0].y == Table[i+1].y)
                                ReturnValue = FALSE;
                        i++;
                }
                while(i < (ParamSize-1));
        }
        else
        {
                do
                {
                        NewPixels[i].x = Table[i].x;
                        NewPixels[i].y = Table[i].y;
                        i++;
                }
                while(i < ParamSize);
                Table[0].y = Table[0].y - 1;
                i=0;
                do
                {
                        Table[i+1].x = NewPixels[i].x;
                        Table[i+1].y = NewPixels[i].y;
                        i++;
                }
                while(i < (ParamSize-1));
                i=0;
                do
                {
                        if(Table[0].x == Table[i+1].x && Table[0].y == Table[i+1].y)
                                ReturnValue = FALSE;
                        i++;
                }
                while(i < (ParamSize-1));
        }
        i=0;
        textbackground(Color);
        do
        {
                gotoxy(Table[i].x,Table[i].y);
                cprintf(" ");
                i++;
        }
        while(i<ParamSize);
        return ReturnValue;
}

