#include <stdio.h>
#include <string.h>
#include <iostream>
#include "player.h"
using namespace std;

int main(void) 
{
    Player user("Himothy");

    cout << "Hello this works for now, on vscode." << endl; // works alone
    cout << "Class files connected." << endl;
    cout << user.name << " has joined the game." << endl;

    return 0;
}