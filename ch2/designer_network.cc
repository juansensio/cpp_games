#include <iostream>
#include <string>
using namespace std;

int main()
{
    string username;
    string password;
    bool success;

    cout << "\tGame Designer’s Network\n";
    do
    {
        cout << "\nUsername: ";
        cin >> username;

        cout << "Password: ";
        cin >> password;

        // The expression is true only if the two expressions it joins are true; otherwise, it is false.
        if (username == "S.Meier" && password == "civilization")
        {
            cout << "\nHey, Sid.";
            success = true;
        }

        else if (username == "S.Miyamoto" && password == "mariobros")
        {
            cout << "\nWhat’s up, Shigeru?";
            success = true;
        }

        else if (username == "W.Wright" && password == "thesims")
        {
            cout << "\nHow goes it, Will?";
            success = true;
        }

        // The expression is true if the first expression or the second expression is true; otherwise, it is false.
        else if (username == "guest" || password == "guest")
        {
            cout << "\nWelcome, guest.";
            success = true;
        }

        else
        {
            cout << "\nYour login failed.";
            success = false;
        }

        // The expression is true if the original is false; the new expression is false if the original is true.
    } while (!success);

    return 0;
}