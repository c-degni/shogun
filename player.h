#include "character.h"
#include "weapon.h"
#include "armor.h"
using namespace std;

#define MAX_INVENTORY_SLOTS 4

class Player : Character
{
    public:
        Player();
        Player(string n);

        string name;
        Weapon weapon;
        Armor chestplate;
        
        void addItemToInventory(Item item);
        int getMaxHealth();
        void setMaxHealth(int h);
        void displayInventory();

    private:
        int maxHealth;
        vector<Item> inventory;
};
