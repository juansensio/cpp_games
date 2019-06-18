# CHAPTER 1: TYPES, VARIABLES, AND STANDARD I/O: LOST FORTUNE

## Introducing C++

- It's fast
- It's flexible
- It's well supported 

## Your first c++ program

- [game over](game_over.cc): hello world program
- [game over 2.0](game_over_2.0.cc): working with the std namesapce (1)
- [game over 3.0](game_over_3.0.cc): working with the std namesapce (2)

## Using arithmetics operators

- [expensive_calculator](expensive_calculator.cc): example of operations

## Declaring and initializing variables

A variable represents a particular piece of your computer’s memory that has been set aside for you to use to store, retrieve, and manipulate data.

- [game_stats](game_stats.cc): using variables 

Every variable you create has a type, which represents the kind of information you can store in the variable.

*Fundamental types*—those built into the language—include **bool** for Boolean values (true or false), **char** for single character values, **int** for integers, **float** for single-precision floating point numbers, and **double** for double-precision floating point numbers.

You can use modifiers to alter a type. **short** is a modifier that can reduce the total number of values a variable can hold. **long** is a modifier that can increase the total number of values a variable can hold. **signed** and **unsigned** are modifiers that work only with integer types. signed means that a variable can store both positive and negative values, while unsigned means that a variable can store only positive values.

## Performing operations with variables

- [game_stats_2.0](game_stats_2.0.cc): operations with variables


## Working with constants

A *constant* is an unchangeable value that you name.
An *enumeration* is a set of unsigned int constants, called *enumerators*.

- [game_stats_3.0](game_stats_3.0.cc): using constants

## Project

- [lost_fortune](lost_fortune.cc): personalized adventure game in which the player enters a few pieces of information, which the computer uses to enhance a basic adventure story.

## Summary

- C++ is the primary language used in AAA game programming.
 - A program is a series of C++ statements.
 - The basic lifecycle of a C++ program is idea, plan, source code, object file, executable.
 - Programming errors tend to fall into three categories—compile errors, link errors, and run-time errors.
 - A function is a group of programming statements that can do some work and return a value.
 - Every program must contain a main() function, which is the starting point of the program.
-  The **#include** directive tells the preprocessor to include another file in the current one.
 - The standard library is a set of files that you can include in your program files to handle basic functions like input and output.
 - **iostream**, which is part of the standard library, is a file that contains code to help with standard input and output.
 - The **std** namespace includes elements from the standard library. To access an element from the namespace, you need to prefix the element with **std:**: or employ **using**.
 - **cout** is an object, defined in the file iostream, that’s used to send data to the standard output stream (generally the computer screen).
 - **cin** is an object, defined in the file iostream, that’s used to get data from the standard input stream (generally the keyboard).
 - C++ has built-in arithmetic operators, such as the familiar addition, subtraction, multiplication, and division—and even the unfamiliar modulus.
 - C++ defines fundamental types for Boolean, single-character, integer, and floating-point values.
 - The C++ standard library provides a type of object (**string**) for strings.
 - You can use **typedef** to create a new name for an existing type.
 - A constant is a name for an unchangeable value.
 - An enumeration is a sequence of **unsigned int** constants.

 ## Exercises

 - [division](division.cc) 
 - [average_score](average_score.cc)