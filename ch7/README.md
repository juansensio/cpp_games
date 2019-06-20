# CHAPTER 7: POINTERS: TIC-TAC-TOE 2.0

## Understanding pointer basics

A *pointer* is a variable that can contain a memory address. Pointers give you the ability to work directly and efficiently with computer memory.

- [pointing](pointing.cc)

By using the const keyword when you declare and initialize a pointer, you can restrict the pointer so it can only point to the object to which it was initialized to point.

- [pointers_and_constants](pointers_and_constants.cc)

## Passing pointers

When you pass a pointer, you pass only the address of an object. This can be quite efficient, especially if you’re working with objects that occupy large chunks of memory.

- [swap_pointer](swap_pointer.cc)

## Returning pointers

- [inventory_pointer](inventory_pointer.cc)

## Pointers and arrays

An array name is really a constant pointer to the first element of the array. Because the elements of an array are stored in a contiguous block of memory, you can use the array name as a pointer for random access to elements.

- [array_parser](array_parser.cc)

## Summary

- Computer memory is organized in an ordered way, where each chunk of memory has its own unique address.
 - A pointer is a variable that contains a memory address.
 - In many ways, pointers act like iterators from the STL. For example, just as with iterators, you use pointers to indirectly access an object.
 - To declare a pointer, you list a type, followed by an asterisk, followed by a name.
 - Programmers often prefix pointer variable names with the letter “p” to remind them that the variable is indeed a pointer.
 - Just like an iterator, a pointer is declared to refer to a value of a specific type.
 - It’s good programming practice to initialize a pointer when you declare it.
 - If you assign 0 to a pointer, the pointer is called a null pointer.
 - To get the address of a variable, put the address of operator (&) before the variable name.
 - When a pointer contains the address of an object, it’s said to point to the object.
-  Unlike references, you can reassign pointers. That is, a pointer can point to different objects at different times during the life of a program.
 - Just as with iterators, you dereference a pointer to access the object it points to with *, the dereference operator.
 - Just as with iterators, you can use the -> operator with pointers for a more readable way to access object data members and member functions.
 - A constant pointer can only point to the object to which it was initialized to point. You declare a constant pointer by putting the keyword const right before the pointer name, as in int* const p = &i;.
 - You can’t use a pointer to a constant to change the value to which it points. You declare a pointer to a constant by putting the keyword const before the type name, as in const int* p;.
 - A constant pointer to a constant can only point to the value to which it was initialized to point, and it can’t be used to change that value. You declare a constant pointer to a constant by putting the keyword const before the type name and right before the pointer name, as in const int* const p = &I;.
 - You can pass pointers for efficiency or to provide direct access to an object.
 - If you want to pass a pointer for efficiency, you should pass a pointer to a constant or a constant pointer to a constant so the object you’re passing access to can’t be changed through the pointer.
 - A dangling pointer is a pointer to an invalid memory address. Dangling pointers are often caused by deleting an object to which a pointer pointed. Dereferencing such a pointer can lead to disastrous results.
 - You can return a pointer from a function, but be careful not to return a dangling pointer.

 ## Exercises

  - [triple_address](triple_address.cc)