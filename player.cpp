#include "player.h"
using namespace std;

Player::Player(){}

Player::Player(string n)
{
    name = n;
}

int Player::getMaxHealth()
{
    return maxHealth;
}

void Player::setMaxHealth(int h)
{
    maxHealth = h;
}

void Player::addItemToInventory(Item item)
{
    int inventorySize = inventory.size();
    if(inventorySize == MAX_INVENTORY_SLOTS)
    {
        char input;
        string itemToReplace;
        cout << "Inventory is full. Would you like to replace an item in your inventory (y / n)? ";
        cin >> input;
        if(input == 'y')
        {  
            displayInventory();
            cout << "Type in the name of the item you would like to replace. " << endl;
            cin >> itemToReplace;
            
            for(int slot = 0; slot < inventory.size(); slot++)
            {
                if(inventory[slot].name == itemToReplace)
                {
                    cout << inventory[slot].name << " has been replaced with " << itemToReplace << endl;
                    inventory[slot].name = item;
                    return;
                }
            }
            cout << "Item not found." << endl;
            addItemToInventory(item);
        }
        else if(input == 'n')
        {
            cout << "No items will be added to your inventory." endl;
            cout << "Your inventory is still at max capacity." << endl;
            return; 
        }
        else
        {
            cout << "Invalid input." << endl;
            addItemToInventory(item);
        }
    }
    cout << item.name << " has been added to your inventory." << endl;
    cout << "You have " << MAX_INVENTORY_SLOTS - inventorySize << " inventory slots left." << endl;
    inventory.push_back(item);
}

void Player::displayInventory()
{
    if(inventory.size() == 0)
    {
        cout << "Your inventory is currently empty." << endl;
        return;
    }

    cout << "The items currently in your inventory are: " << endl;
    for(int item = 0; item < inventory.size(); item++)
    {
        cout << "\t" << inventory[item].name << ": " << inventory[item].description << endl;
    }
}