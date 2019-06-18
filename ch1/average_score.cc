#include <iostream>

using namespace std;

int main()
{
    int score1, score2, score3;

    cout << "Enter 3 scores:";
    cin >> score1 >> score2 >> score3;

    // if at least on element is decimal, result is decimal
    cout << (score1 + score2 + score3) / 3.0 << endl;
    return 0;
}