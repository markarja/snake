//---------------------------------------------------------------------------

#ifndef SnakeFoodH
#define SnakeFoodH
//---------------------------------------------------------------------------

class SnakeFood
{
        private:
        int x;
        int y;
        bool Eaten;
        public:
        void SetFoodX(int);
        void SetFoodY(int);
        void SetEaten(bool);
        bool GetEaten(void);
        int GetFoodX(void);
        int GetFoodY(void);
        void DrawSnakeFood(int,int);
};
#endif
