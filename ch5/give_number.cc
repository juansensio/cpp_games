#include <iostream>
#include <string>

using namespace std;

// if a value isn’t passed to low when the function is called, low is assigned 1.
int askNumber(int high, int low = 1);

// Once you specify a default argument in a list of parameters, you must specify default arguments for all remaining parameters
// OK -> void setDisplay(int height, int width, int depth = 32, bool fullScreen = true);
// KO -> void setDisplay(int width, int height, int depth = 32, bool fullScreen);
// also, once you omit an argument, you must omit arguments for all remaining parameters.

int main()
{
    int number = askNumber(5);
    cout << "Thanks for entering: " << number << "\n\n";

    number = askNumber(10, 5);
    cout << "Thanks for entering: " << number << "\n\n";

    return 0;
}

int askNumber(int high, int low)
{
    int num;
    do
    {
        cout << "Please enter a number"
             << " (" << low << " - " << high << "): ";
        cin >> num;
    } while (num > high || num < low);

    return num;
}