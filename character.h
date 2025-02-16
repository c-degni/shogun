#include <vector>
#include "item.h"
using namespace std;
#ifndef CHARACTER_H
#define CHARACTER_H

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
        bool isDead();

    private:
        int currentHealth;
        int attack;
};

#endif