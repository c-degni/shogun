#include <string>
using namespace std;

class Item
{
    public:
        Item();
        Item(string n, string d);

        string name;
        string description;
};