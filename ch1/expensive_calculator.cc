#include <iostream>

using namespace std;

int main()
{
    // this is an addition
    cout << "7 + 3 = " << 7 + 3 << endl;

    // this is a subtraction
    cout << "7 - 3 = " << 7 - 3 << endl;

    // this is a multiplication
    cout << "7 * 3 = " << 7 * 3 << endl;

    // the result of any arithmetic calculation involving only integers
    // (numbers without fractional parts) is always another integer.
    // The fractional part of the result is thrown away.
    cout << "7 / 3 = " << 7 / 3 << endl;

    // To get a result that includes a fractional part, at least one of
    // the values needs to be a floating point (a number with a fractional part).
    cout << "7.0 / 3.0 = " << 7.0 / 3.0 << endl;

    // The modulus operator returns the remainder of integer division.
    cout << "7 % 3 = " << 7 % 3 << endl;

    // Multiplication, division, and modulus have equal precedence,
    // which is higher than the precedence level that addition and subtraction share.
    cout << "7 + 3 * 5 = " << 7 + 3 * 5 << endl;

    // parentheses have higher precedence than any arithmetic operator.
    cout << "(7 + 3) * 5 = " << (7 + 3) * 5 << endl;

    return 0;
}