// Guess My Number 2.0

#include <iostream>

using namespace std;

// the game loop

int main()
{
    // setup
    int secretNumber;
    cout << "Introduce a number between 0 and 100" << endl;
    cin >> secretNumber;

    int tries = 0;
    int guess, max = 100, min = 0;

    cout << "\tWelcome to Guess My Number\n\n";

    do
    {
        // get player input

        guess = min + (max - min) / 2;
        cout << " Guess: " << guess << endl;
        ++tries;

        // update game internals and display

        if (guess > secretNumber)
        {
            cout << "Too high!\n\n";
            max = guess;
        }
        else if (guess < secretNumber)
        {
            cout << "Too low!\n\n";
            min = guess;
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