#include <iostream.h>
#include <conio.h>
#include <vcl.h>
#include <stdlib.h>
#include "snake.h"
#include "KeyboardReader.h"
#include "SnakeFood.h"
void main(void)
{
        Randomize();
        int GameEnd = 1;
        bool GamePaused = FALSE;
        SnakeFood * Food = new SnakeFood;
        Snake * Player = new Snake;
        KeyboardRead * Reader = new KeyboardRead(false);
        Player->SetSize(3);
        Player->SetLocation(10,10,Player->GetSize());
        Player->SetColor(4);
        Player->SetDirection('r');
        textcolor(BLACK);
        Food->SetEaten(TRUE);
        textmode(C80X60);
        _setcursortype(_NOCURSOR);
        while(GameEnd == 1)
        {
             Sleep(40);
             if(Food->GetEaten() == TRUE)
             {
                Food->SetFoodX(1 + random(80));
                Food->SetFoodY(1 + random(60));
                Food->SetEaten(FALSE);
             }
             if(Reader->ButtonPressed == 54)
             {
                Player->SetDirection('r');
             }
             else if(Reader->ButtonPressed == 52)
             {
                Player->SetDirection('l');
             }
             else if(Reader->ButtonPressed == 53)
             {
                Player->SetDirection('u');
             }
             else if(Reader->ButtonPressed == 56)
             {
                Player->SetDirection('d');
             }
             else if(Reader->ButtonPressed == 27)
             {
                gotoxy(40,30);
                textbackground(BLACK);
                cprintf("Quit game!");
                Sleep(400);
                break;
             }
             else if(Reader->ButtonPressed == 112)
             {
                GamePaused = TRUE;
             }
             else
             {
             }
             if(GamePaused == FALSE)
             {
                Food->DrawSnakeFood(Food->GetFoodX(),Food->GetFoodY());
                if(Player->DrawSnake(Player->GetSize(),Player->GetSnakeX(),Player->GetSnakeY()))
                {
                        if(Player->GetSnakeX() > 80 || Player->GetSnakeX() < 0 || Player->GetSnakeY() > 60 || Player->GetSnakeY() < 0)
                                GameEnd = 0;
                        else
                                GameEnd = 1;
                }
                else
                        GameEnd = 0;
                if(Player->GetSnakeX() == Food->GetFoodX() && Player->GetSnakeY() == Food->GetFoodY())
                {
                        Food->SetEaten(TRUE);
                        Player->SetSize(Player->GetSize() + 1);
                }
             }
             else
             {
                gotoxy(40,30);
                printf("Game Paused!");
                if(Reader->ButtonPressed != 112)
                {
                        gotoxy(40,30);
                        printf("            ");
                        GamePaused = FALSE;
                }
             }
        }
        delete Player;
        delete Food;
        Reader->Terminate();
        return;
}

