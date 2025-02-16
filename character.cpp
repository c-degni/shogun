#include "character.h"
using namespace std;

Character::Character(){}

Character::Character(string n, int health, int atk)
{
    name = n;
    currentHealth = health;
    attack = atk
}

int Character::getCurrentHealth()
{
    return currentHealth;
}

void Character::setCurrentHealth(int h)
{
    currentHealth = h;
}
    
int Character::getAttackStat()
{
    return attack;
}

void Character::setAttackStat(int a)
{
    attack = a;
}

bool Character::isDead()
{
    return currentHealth <= 0;
}