#include "item.h"
using namespace std;

class Armor : Item
{
    public:
        Armor();
        Armor(string name, string description, int health, int damage) : Item(name, description)
        {
            damageAttribute = damage;
            healthAttribute = health;
        }
        // Armor(string name, string description, int health, int damage) : Item(name , description){}

        int healthAttribute;
        int damageAttribute;
};