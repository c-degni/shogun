#include "stage.h"
using namespace std;

Stage::Stage(){}

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

void Stage::createShop(vector<Item> items)
{
    for(int item = 0; item < items.size(); item++)
    {
        shop.push_back(items[item]);
    }
}