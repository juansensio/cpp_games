#include <iostream>

using namespace std;

int main()
{
    char again; // it is not tested after the first iteration
    do
    {
        cout << "\n**Played an exciting game**";
        cout << "\nDo you want to play again? (y/n): ";
        cin >> again;
    } while (again == 'y');

    cout << "\nOkay, bye.";

    return 0;
}