#include "player.h"
#include "stage.h"
using namespace std;

#define NUMBER_OF_STAGES 3

class Game
{
    public:
        Game();
        Game(string t);

        Player player;
        Stage *currentStage;
        Stage stages[NUMBER_OF_STAGES];
        
        void enterStage(Stage *stage);
        void runStage(Stage *stage);
        void lootStage(Stage *stage);
        void fightBoss(Stage *stage);
        void shop(Stage *stage);
        void endGame();

        void setTitle(string t);
        string getTitle();

    private:
        string title;
};