#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    while (true) // infinite loop, need and exit condition !
    {
        count += 1;

        //end loop if count is greater than 10
        if (count > 10)
        {
            break;
        }

        //skip the number 5
        if (count == 5)
        {
            continue;
        }

        cout << count << endl;
    }

    return 0;
}