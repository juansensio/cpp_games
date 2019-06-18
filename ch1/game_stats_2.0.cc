#include <iostream>

using namespace std;

int main()
{
    unsigned int score = 5000;
    cout << "score: " << score << endl;

    //altering the value of a variable
    score = score + 100;
    cout << "score: " << score << endl;

    //combined assignment operator
    score += 100;
    cout << "score: " << score << endl;

    // prefix increment operators (increment before opeartion)
    int lives = 3;
    ++lives;
    cout << "lives: " << lives << endl;

    // postfix increment operators (increment after expression)
    lives = 3;
    lives++;
    cout << "lives: " << lives << endl;

    lives = 3;
    int bonus = ++lives * 10;
    cout << "lives, bonus = " << lives << ", " << bonus << endl;

    lives = 3;
    bonus = lives++ * 10;
    cout << "lives, bonus = " << lives << ", " << bonus << endl;

    //integer wrap around
    score = 4294967295; // largest integer possible
    cout << "\nscore: " << score << endl;
    ++score; // next integer is the first
    cout << "score: " << score << endl;

    return 0;
}