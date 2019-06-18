#include <iostream>

using namespace std;

int main()
{
    // the result of dividing two ints is an int (ignore decimals)
    cout << "Seven divided by three is " << 7 / 3 << endl;
    // if at least on element is decimal, result is decimal
    cout << "Seven divided by three is " << 7.0 / 3 << endl;
    cout << "Seven divided by three is " << 7 / 3.0 << endl;
    cout << "Seven divided by three is " << 7.0 / 3.0 << endl;
    return 0;
}