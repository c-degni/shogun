#include "character.h"
using namespace std;

#define MAX_VENDOR_STORAGE 5

class Stage
{
    public:
        Stage(string name);
        Stage(string name, Character boss, Item shop[MAX_VENDOR_STORAGE]);

        Character boss;

        string getStageName();
        void setStageName(string n);

        Item getItem(int index);
        void createShop(Item item1, Item item2, Item item3, Item item4, Item item5);

    private:
        string name;
        vector<Item> shop;
};