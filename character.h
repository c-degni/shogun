#include <vector>
#include "item.h"
using namespace std;

class Character
{
    public:
        Character();
        Character(string n, int health, int atk);
        
        string name;

        int getCurrentHealth();
        void setCurrentHealth(int h);
        int getAttackStat();
        void setAttackStat(int a);

    private:
        int currentHealth;
        int attack;
};