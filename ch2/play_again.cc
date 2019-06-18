#include <iostream>
using namespace std;

int main()
{
    char again = 'y'; // setting to "y" does not work !
    while (again == 'y')
    {
        cout << "\n**Played an exciting game**";
        cout << "\nDo you want to play again? (y/n): ";
        cin >> again;
    }
    cout << "\nOkay, bye.";
    return 0;
}