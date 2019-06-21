#include <iostream>
#include <string>

using namespace std;

class Critter
{
public:
    Critter(const string &name = "", int age = 0);
    ~Critter();                           //destructor prototype
    Critter(const Critter &c);            //copy constructor prototype
    Critter &operator=(const Critter &c); //overloaded assignment op
    void Greet() const;

private:
    string *m_pName; // data member that is a pointer
    int m_Age;       // data member that is not a pointer
};

Critter::Critter(const string &name, int age)
{
    cout << "Constructor called\n";
    m_pName = new string(name); // a string is created in the heap
    m_Age = age;                // an int is assigned in the stack
}
Critter::~Critter() //destructor definition
{
    cout << "Destructor called\n";
    delete m_pName; // delete memmory on the heap to avoid memmory leak
}

Critter::Critter(const Critter &c) //copy constructor definition
{
    cout << "Copy Constructor called\n";
    m_pName = new string(*(c.m_pName)); // deep copy
    m_Age = c.m_Age;
}

Critter &Critter::operator=(const Critter &c) //overloaded assignment op def
{
    cout << "Overloaded Assignment Operator called\n";
    if (this != &c)
    {
        delete m_pName;
        m_pName = new string(*(c.m_pName));
        m_Age = c.m_Age;
    }
    return *this;
}

void Critter::Greet() const
{
    cout << "I’m " << *m_pName << " and I’m " << m_Age << " years old. ";
    cout << "&m_pName: " << &m_pName << endl;
}

void testDestructor();
void testCopyConstructor(Critter aCopy);
void testAssignmentOp();

int main()
{
    testDestructor();
    cout << endl;

    Critter crit("Poochie", 5);
    crit.Greet();
    testCopyConstructor(crit);
    crit.Greet();
    cout << endl;

    testAssignmentOp();

    return 0;
}

void testDestructor()
{
    Critter toDestroy("Rover", 3);
    toDestroy.Greet();
}

void testCopyConstructor(Critter aCopy) // if a custom copy constructor exists, it is called automatically
{
    aCopy.Greet();
} // destroy aCopy
// without deep copy in custom copy constructor, this would delete the original object heap

void testAssignmentOp()
{
    Critter crit1("crit1", 7);
    Critter crit2("crit2", 9);
    crit1 = crit2;
    crit1.Greet();
    crit2.Greet();
    cout << endl;

    Critter crit3("crit", 11);
    crit3 = crit3;
    crit3.Greet();
}