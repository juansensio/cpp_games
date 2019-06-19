#include <iostream>

using namespace std;

// you don’t use inline in the function declaration
int radiation(int health);

int main()
{
    int health = 80;
    cout << "Your health is " << health << "\n\n";

    health = radiation(health);
    cout << "After radiation exposure your health is " << health << "\n\n";

    health = radiation(health);
    cout << "After radiation exposure your health is " << health << "\n\n";

    health = radiation(health);
    cout << "After radiation exposure your health is " << health << "\n\n";

    return 0;
}

// To mark a function for inlining, simply put inline before the function definition
inline int radiation(int health)
{
    return (health / 2);
}