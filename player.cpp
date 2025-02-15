#include "player.h"
using namespace std;

Player::Player(string n)
{
    name = n;
}

int Player::getMaxHealth()
{
    return maxHealth;
}

void Player::setMaxHealth(int h)
{
    maxHealth = h;
}