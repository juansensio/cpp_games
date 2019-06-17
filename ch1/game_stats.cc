#include <iostream>

using namespace std;

int main()
{
    // declare variables
    int score;
    double distance;
    char playAgain;
    bool shieldsUp;
    short lives, aliensKilled;

    // assigning values to variables
    score = 0;
    distance = 1200.76;
    playAgain = 'y';
    shieldsUp = true;
    lives = 3;
    aliensKilled = 10;

    // declare and assign at the same time
    double engineTemp = 6572.89;

    // display variable values
    cout << "\nscore: " << score << endl;
    cout << "distance: " << distance << endl;
    cout << "playAgain: " << playAgain << endl;
    //skipping shieldsUp since you don’t generally print Boolean values
    cout << "lives: " << lives << endl;
    cout << "aliensKilled: " << aliensKilled << endl;
    cout << "engineTemp: " << engineTemp << endl;

    // get user input
    int fuel;
    cout << "\nHow much fuel? ";
    cin >> fuel;
    cout << "fuel: " << fuel << endl;

    // define a new name for an existing type
    // typedef <current type> <new name>
    typedef unsigned short int ushort;
    ushort bonus = 10;

    cout << "\nbonus: " << bonus << endl;

    return 0;
}