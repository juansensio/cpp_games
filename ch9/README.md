# CHAPTER 9: ADVANCED CLASSES AND DYNAMIC MEMORY: GAME LOBBY

C++ gives a game programmer a high degree of control over the computer. One of the most fundamental abilities is direct control over memory. In this chapter, you’ll learn about dynamic memory—memory that you manage yourself.

## Aggregation

- [critter_farm](critter_farm.cc)

## Friend functions and operator overloading

*Friend functions* have complete access to any member of a class. *Operator overloading* allows you to define new meanings for built-in operators as they relate to objects of your own classes.

- [friend_critter](friend_critter.cc)

## Dynamically allocating memory

So far, whenever you’ve declared a variable, C++ has allocated the necessary memory for it. When the function that the variable was created in ended, C++ freed the memory. This memory, which is used for local variables, is called the *stack*. But there’s another kind of memory that persists independent of the functions in a program. You, the programmer, are in charge of allocating and freeing this memory, collectively called the *heap* (or free store).

- [heap](heap.cc)

One problem with allowing a programmer to allocate and free memory is that he might allocate memory and lose any way to get at it, thus losing any way to ever free it. When memory is lost like this, it’s called a *memory leak*.

## Data memebers and the heap

You’ve seen how you can use aggregation to declare data members that store objects, but you can also declare data members that are pointers to values on the heap.

- [heap_data_memeber](heap_data_memeber.cc)

When you have a class that allocates memory on the heap, you should write a destructor that cleans up and frees that memory.

For simple classes, the default copy constructor is usually fine. However, when you have a class with a data member that points to a value on the heap, you should consider writing your own copy constructor to avoid a *shallow copy*, in which the pointer data members of the copy point to the same chunks of memory as the pointer data members in the original object. What you really need is a copy constructor that produces a new object with its own chunk of memory on the heap for each data member that points to a heap object—*a deep copy*.

When you have a class with a data member that points to memory on the heap, you should consider overloading the assignment operator for the class.

## Project

- [game_lobby](game_lobby.cc)

## Summary

- Aggregation is the combining of objects so that one is part of another.
 - Friend functions have complete access to any member of a class.
 - Operator overloading allows you to define new meanings for built-in operators as they relate to objects of your own classes.
 - The stack is an area of memory that is automatically managed for you and is used for local variables.
 - The heap (or free store) is an area of memory that you, the programmer, can use to allocate and free memory.
 - The new operator allocates memory on the heap and returns its address.
 - The delete operator frees memory on the heap that was previously allocated.
 - A dangling pointer points to an invalid memory location. Dereferencing or deleting a dangling pointer can cause your program to crash.
 - A memory leak is an error in which memory that has been allocated becomes inaccessible and can no longer be freed. Given a large enough leak, a program might run out of memory and crash.
 - A destructor is a member function that’s called just before an object is destroyed. If you don’t write a destructor of your own, the compiler will supply a default destructor for you.
 - The copy constructor is a member function that’s invoked when an automatic copy of an object is made. A default copy constructor is supplied for a class if you don’t write one of your own.
 - The default copy constructor simply copies the value of each data member to data members with the same names in the copy, producing a member-wise copy.
 - Member-wise copying can produce a shallow copy of an object, in which the pointer data members of the copy point to the same chunks of memory as the pointers in the original object.
-  A deep copy is a copy of an object that has no chunks of memory in common with the original.
- A default assignment operator member function, which provides only member-wise duplication, is supplied for you if you don’t write one of your own.
 - The this pointer is a pointer that all non-static member functions automatically have; it points to the object that was used to call the function.