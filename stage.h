#include "character.h"
using namespace std;

#define MAX_VENDOR_STORAGE 5
#define LOOT_PER_STAGE 2

class Stage
{
    public:
        Stage();
        Stage(string name);
        Stage(string name, Character boss, Item shop[MAX_VENDOR_STORAGE]);

        Character boss;
        Item loot[LOOT_PER_STAGE];

        string getStageName();
        void setStageName(string n);

        Item getItem(int index);
        void createShop(vector<Item> items);

    private:
        string name;
        vector<Item> shop;
};