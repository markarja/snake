//---------------------------------------------------------------------------

#ifndef snakeH
#define snakeH
//---------------------------------------------------------------------------
class Snake
{
        private:
        struct SnakePixels
        {
                int x;
                int y;
        };
        int Speed;
        int Size;
        int Color;
        int Lives;
        char Direction;
        char LastDirection;
        SnakePixels Table[200];
        SnakePixels NewPixels[200];
        public:
        Snake();
        int GetLives(void);
        int GetSpeed(void);
        int GetSize(void);
        char GetDirection(void);
        int GetSnakeX(void);
        int GetSnakeY(void);
        void SetSize(int);
        void SetColor(int);
        void SetLives(int);
        void SetSpeed(int);
        void SetLocation(int,int,int);
        void SetDirection(char);
        bool DrawSnake(int,int,int);
};
#endif 
