#include <iostream>

using namespace std;

int *intOnHeap(); //returns an int on the heap
void leak1();     //creates a memory leak
void leak2();     //creates another memory leak

int main()
{
    int *pHeap = new int; // The new operator allocates memory on the heap and returns its address.
    *pHeap = 10;
    cout << "*pHeap: " << *pHeap << "\n\n";

    int *pHeap2 = intOnHeap();                // pointer to int on heap
    cout << "*pHeap2: " << *pHeap2 << "\n\n"; // value persists after the function

    // Unlike storage for local variables on the stack, memory that you’ve allocated on the heap must be explicitly freed.

    cout << "Freeing memory pointed to by pHeap.\n\n";
    delete pHeap;

    cout << "Freeing memory pointed to by pHeap2.\n\n";
    delete pHeap2;

    //get rid of dangling pointers
    pHeap = 0;
    pHeap2 = 0;

    return 0;
}

int *intOnHeap()
{
    int *pTemp = new int(20); // create int on heap
    return pTemp;             // return pointer to int on heap
}

// we cannot delete this
void leak1()
{
    int *drip1 = new int(30);
}

void leak2()
{
    int *drip2 = new int(50); // allocate memmory on the heap
    drip2 = new int(100);     // allocate new memmory on the heap
    delete drip2;             // delete second chunk of memmory, but first is lost !
}