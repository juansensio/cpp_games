#include <iostream>
#include <string>
// include vector definition
#include <vector>

// vector lives in std namespace
using namespace std;

int main()
{
    // declaring a vector
    vector<string> inventory;

    /* 
        alternatives

        vector<string> inventory(10); // empty vector with size 10
        vector<string> inventory(10, "nothing"); // all 10 elements are equal to "nothing"
        vector<string> inventory(myStuff); // initialize vector with the content of another vector
     */

    // push_back adds a new element at the end of the vector
    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("shield");

    cout << "You have " << inventory.size() << " items.\n";

    cout << "\nYour items:\n";
    for (unsigned int i = 0; i < inventory.size(); ++i)
    {
        cout << inventory[i] << endl;
    }

    cout << "\nYou trade your sword for a battle axe.";
    inventory[0] = "battle axe";
    cout << "\nYour items:\n";
    for (unsigned int i = 0; i < inventory.size(); ++i)
    {
        cout << inventory[i] << endl;
    }

    cout << "\nThe item name ’" << inventory[0] << "’ has ";
    cout << inventory[0].size() << " letters in it.\n";

    cout << "\nYour shield is destroyed in a fierce battle.";
    // pop_back removes last element in vector
    inventory.pop_back();
    cout << "\nYour items:\n";
    for (unsigned int i = 0; i < inventory.size(); ++i)
    {
        cout << inventory[i] << endl;
    }

    cout << "\nYou were robbed of all of your possessions by a thief.";
    // clear removes all elements and set size to 0
    inventory.clear();

    if (inventory.empty())
    {
        cout << "\nYou have nothing.\n";
    }
    else
    {
        cout << "\nYou have at least one item.\n";
    }

    return 0;
}