#include <iostream>

using namespace std;

int main()
{
    // this is a contant value
    const int ALIEN_POINTS = 150;

    // This won't work
    //ALIEN_POINTS = 200;

    int aliensKilled = 10;
    int score = aliensKilled * ALIEN_POINTS;
    cout << "score: " << score << endl;

    // list of unsigned ints (from 0 to the number of elements - 1)
    enum difficulty
    {
        NOVICE,
        EASY,
        NORMAL,
        HARD,
        UNBEATABLE
    };
    difficulty myDifficulty = EASY;

    // this won't work
    //myDifficulty = 4;

    // You can assign values to the enumerators if you want
    enum shipCost
    {
        FIGHTER_COST = 25,
        // enumerators that are not assigned values get the value of the previous enumerator + 1
        BOMBER_COST, // this is 26
        CRUISER_COST = 50
    };
    shipCost myShipCost = BOMBER_COST;
    cout << "\nTo upgrade my ship to a Cruiser will cost "
         << (CRUISER_COST - myShipCost) << " Resource Points.\n";

    return 0;
}