// Guess My Number

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// the game loop

int main()
{
    // setup

    srand(static_cast<unsigned int>(time(0))); //seed random number generator

    int secretNumber = rand() % 100 + 1; // random number between 1 and 100
    int tries = 0;
    int guess;

    cout << "\tWelcome to Guess My Number\n\n";

    do
    {
        // get player input

        cout << "Enter a guess: ";
        cin >> guess;
        ++tries;

        // update game internals and display

        if (guess > secretNumber)
        {
            cout << "Too high!\n\n";
        }
        else if (guess < secretNumber)
        {
            cout << "Too low!\n\n";
        }
        else
        {
            cout << "\nThat’s it! You got it in " << tries << " guesses!\n";
        }

        // check if the game is over
    } while (guess != secretNumber);

    //shut down

    return 0;
}