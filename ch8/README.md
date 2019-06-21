# CHAPTER 8: CLASSES: CRITTER CARETAKER

*Object-oriented programming (OOP)* is a different way of thinking about programming. It’s a modern methodology used in the creation of the vast majority of games (and other commercial software, too). In OOP, you define different types of objects with relationships to each other that allow the objects to interact

## Defining new types

- [simple_critter](simple_critter.cc)

## Using constructors

- [constructor_critter](constructor_critter.cc)

## Setting memeber access levels

Like functions, you should treat objects as encapsulated entities. This means that, in general, you should avoid directly altering or accessing an object’s data members. Instead, you should call an object’s member functions, allowing the object to maintain its own data members and ensure their integrity.

- [private_critter](private_critter.cc)

## Using static data memebers and memeber functions

- [static_critter](static_critter.cc)

## Project

- [critter_caretaker](critter_caretaker.cc)
 
## Summary

- Object-oriented programming (OOP) is a way of thinking about programming in which you define different types of objects with relationships that interact with each other.
-  You can create a new type by defining a class.
-  A class is a blueprint for an object.
-  In a class, you can declare data members and member functions.
-  When you define a member function outside of a class definition, you need to qualify it with the class name and scope resolution operator (::).
- You can inline a member function by defining it directly in the class definition.
 - You can access data members and member functions of objects through the member selection operator (.).
 - Every class has a constructor—a special member function that’s automatically called every time a new object is instantiated. Constructors are - often used to initialize data members.
 - A default constructor requires no arguments. If you don’t provide a constructor definition in your class, the compiler will create a default - constructor for you.
-  Member initializers provide shorthand to assign values to data members in a constructor.
-  You can set member access levels in a class by using the keywords public, private, and protected. (You’ll learn about protected in Chapter 9, - “Advanced Classes and Dynamic Memory: Game Lobby.” )
-  A public member can be accessed by any part of your code through an object.
 - A private member can be accessed only by a member function of that class.
-  An accessor member function allows indirect access to a data member.
-  A static data member exists for the entire class.
-  A static member function exists for the entire class.
-  Some game programmers prefix private data member names with m_ and static data member names with s_ so that they’re instantly recognizable.
-  A constant member function can’t modify non-static data members or call non-constant member functions of its class.

## Exercises

- [critter_caretaker_2.0](critter_caretaker_2.0.cc)
