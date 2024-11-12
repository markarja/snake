//---------------------------------------------------------------------------
#ifndef gameH
#define gameH
//---------------------------------------------------------------------------
class Game
{
        private:
        int Points;
        char * PlayerName;
        int HiScores[10];
        public:
        Game();
        void SetPlayerName(void);
        void SetPoints(int);
        void WriteHiScore(int);
        void ReadHiScores(void);
        int GetPoints(void);
        char * GetPlayerName(void);
        void DrawMenu(void);

};
#endif
