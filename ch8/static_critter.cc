#include <iostream>

using namespace std;

class Critter
{
public:
    static int s_Total; //static member variable declaration
                        //total number of Critter objects in existence

    Critter(int hunger = 0);
    static int *GetTotal(); //static member function prototype

    int *getHunger() { return &m_Hunger; };

private:
    int m_Hunger;
};

int Critter::s_Total = 0; //static member variable initialization

Critter::Critter(int hunger) : m_Hunger(hunger)
{
    cout << "A critter has been born!" << endl;
    ++s_Total;
}

int *Critter::GetTotal() //static member function definition
{
    return &s_Total;
}

int main()
{
    cout << "The total number of critters is: ";
    cout << Critter::s_Total << "\n\n";

    Critter crit1, crit2, crit3;

    cout << "\nMemmory Address for static and non-static variables: ";
    cout << crit1.GetTotal() << ' ' << crit1.getHunger() << "\n";
    cout << crit2.GetTotal() << ' ' << crit2.getHunger() << "\n";
    cout << crit3.GetTotal() << ' ' << crit3.getHunger() << "\n";

    return 0;
}