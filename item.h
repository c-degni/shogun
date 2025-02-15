#include <string>
using namespace std;
#ifndef ITEM_H
#define ITEM_H

class Item
{
    public:
        Item();
        Item(string n, string d);

        string name;
        string description;
};

#endif