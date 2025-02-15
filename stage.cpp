#include "stage.h"
using namespace std;

Stage::Stage(string n)
{
    name = n;
}

Stage::Stage(string n, Character b, Item s[MAX_VENDOR_STORAGE])
{
    name = n;
    boss = b;
}

string Stage::getStageName()
{
    return name;
}

void Stage::setStageName(string n)
{
    name = n;
}

Item Stage::getItem(int index)
{
    return shop[index];
}

void Stage::createShop(Item item1, Item item2, Item item3, Item item4, Item item5)
{
    shop = {item1, item2, item3, item4, item5};
}