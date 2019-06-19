#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "Creating a list of scores.\n";
    vector<int> scores(10, 0); //initialize all 10 elements to 0
    cout << "Vector size is :" << scores.size() << endl;
    cout << "Vector capacity is:" << scores.capacity() << endl;

    cout << "Reserving more memory.\n";
    scores.reserve(20); //reserve memory for 10 additional elements
    cout << "Vector size is :" << scores.size() << endl;
    cout << "Vector capacity is:" << scores.capacity() << endl;
    return 0;
}