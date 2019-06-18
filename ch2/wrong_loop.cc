#include <iostream>

using namespace std;

int main()
{
    int x = 0; // 0 is false, will never enter loop

    while (x)
    {
        ++x;
        cout << x << endl;
    }
}