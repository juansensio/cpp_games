#include <iostream>
#include <string>

using namespace std;

// To create an overloaded function, you simply need to write multiple function definitions with the same name and different parameter lists.
int triple(int number);
string triple(string text);

int main()
{
    cout << "Tripling 5: " << triple(5) << "\n\n";
    cout << "Tripling ’gamer’: " << triple("gamer");
    return 0;
}

int triple(int number)
{
    return (number * 3);
}

string triple(string text)
{
    return (text + text + text);
}