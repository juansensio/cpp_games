/* 
GAME LIBRARY

Write a program using vectors and iterators that allows a user to maintain a list of his or her favorite games. 
The program should allow the user to list all game titles, add a game title, and remove a game title.

Create an empty list of games
Ask user for action (list, add, remove or quit)
if list
    list all games
    ask again
if add
    ask for name and add to vector
    ask again
if remove
    ask for name
    if name is found, remove
    if name is not found, show message
    ask again
if quit
    exit program
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> games;
    unsigned int action = 1;
    enum actions
    {
        LIST,
        ADD,
        REMOVE,
        QUIT,
        NUM_ACTIONS
    };

    cout << "Welcome to your game library." << endl;

    string _game;
    vector<string>::iterator toRemove;
    while (action != QUIT)
    {
        cout << "Please, insert an action: list (0), add (1), remove (2) or quit(3)" << endl;
        cin >> action;

        switch (action)
        {
        case LIST:
            if (games.empty())
                cout << "You library is empty." << endl;
            else
            {
                cout << "This is a list of all your games:" << endl;
                for (vector<string>::const_iterator i = games.begin(); i != games.end(); ++i)
                {
                    cout << '\t' << *i << endl;
                }
            }
            break;
        case ADD:
            cout << "Add name of your new game: ";
            cin >> _game;
            if (find(games.begin(), games.end(), _game) == games.end())
                games.push_back(_game);
            else
                cout << "Looks like " << _game << " is already in your library" << endl;
            break;
        case REMOVE:
            cout << "Insert name of the game to remove: ";
            cin >> _game;
            toRemove = find(games.begin(), games.end(), _game);
            if (toRemove != games.end())
                games.erase(toRemove);
            else
                cout << "Looks like " << _game << " is not in your library" << endl;
            break;
        default:
            action = QUIT;
            break;
        }
    }

    cout << "Good bye." << endl;

    return 0;
}