#include <iostream>
#include <string>

using namespace std;

int main()
{

    int score = 100;
    int *const pScore = &score; //a constant pointer (can change value, but not address)
    cout << score << " " << *pScore << endl;
    *pScore = 500;
    cout << score << " " << *pScore << endl;
    int score2 = 200;
    //*pScore = &score2; // illegal

    const int *pNumber; //a pointer to a constant (can change address, but not value)
    int lives = 3;
    pNumber = &lives;
    cout << lives << " " << *pNumber << endl;
    int lives2 = 5;
    pNumber = &lives2;
    cout << lives2 << " " << *pNumber << endl;
    //*pNumber = 4; // illegal

    int BONUS = 10;
    const int *const pBONUS = &BONUS; //a constant pointer to a constant (cannot change value or address)
    cout << BONUS << " " << *pBONUS << endl;
    //*pBONUS = 20; // illegal
    int BONUS2 = 20;
    //pBONUS = &BONUS2; // illegal

    return 0;
}