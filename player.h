#include "character.h"
#include "weapon.h"
#include "armor.h"
using namespace std;

#define MAX_INVENTORY_SLOTS 4

class Player : Character
{
    public:
        Player(string n);

        string name;
        Weapon weapon;
        Armor chestplate;
        Item inventory[MAX_INVENTORY_SLOTS];

        int getMaxHealth();
        void setMaxHealth(int h);

    private:
        int maxHealth;
};
