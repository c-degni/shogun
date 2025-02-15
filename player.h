#include "character.h"
using namespace std;

#define MAX_INVENTORY_SLOTS 4

class Player : Character
{
    public:
        Player(string name);

        string name;
        Weapon weapon;
        Item inventory[MAX_INVENTORY_SLOTS];
        Armor chestplate;

        int getMaxHealth();
        void setMaxHealth(int h);

    private:
        int maxHealth;
};
