#include "weapon.h"
using namespace std;

Weapon::Weapon(){}

Weapon::Weapon(string name, string description, int damage) : Item(name , description)
{
    this->damage = damage;
}