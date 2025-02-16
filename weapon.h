#include "item.h"
using namespace std;

class Weapon : Item
{
    public:
        Weapon();
        Weapon(string name, string description, int damage) : Item(name , description)
        {
            this->damage = damage;
        }

        int damage;
};