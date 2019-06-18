#include <iostream>
// this header contains functions to generate random numbers
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    //seed random number generator with current date and time so it is always different
    srand(static_cast<unsigned int>(time(0)));

    int randomNumber = rand(); //generate random number between 0 and RAND_MAX
    cout << RAND_MAX << endl;

    int die = (randomNumber % 6) + 1; // get a number between 1 and 6
    cout << "You rolled a " << die << endl;

    return 0;
}