# CHAPTER 3: FOR LOOPS, STRINGS, AND ARRAYS: WORD JUMBLE

## Using for loops

the for loop lets you repeat a section of code, but for loops are particularly suited for counting and moving through a sequence of things.

- [counter_program](counter_program.cc)


## Understanding objects

Objects combine data and functions. A data element of an object is called a **data member**, while a function of an object is called a **member function**.

## Using string objects

**string** objects are sequence of characters.

- [string_tester](string_tester.cc)

## Using arrays

**arrays** provide a way to work with elements of any type.

- [hero_inventory](hero_inventory.cc)

## Understanding C-style strings

Before string objects came along, C++ programmers represented strings with arrays of characters terminated by a null character.
C-style strings don’t have member functions. But the cstring file, which is part of the standard library, contains a variety of functions for working with C-style strings. A nice thing about string objects is that they’re designed to work seamlessly with C-style strings.

## Using multidimensional arrays
 
- [tic_tac_toe_board](tic_tac_toe_board.cc)

## Project

- [word_jumble](word_jumble.cc)

## Summary

- The **for** loop lets you repeat a section of code. In a for loop, you can provide an initialization statement, an expression to test, and an action to take after each loop iteration.
 - for loops are often used for counting or looping through a sequence.
 - **Objects** are encapsulated, cohesive entities that combine data (called data members) and functions (called member functions).
 - **string** objects (often just called strings) are defined in the file string, which is part of the standard library. string objects allow you to store a sequence of characters and also have member functions.
 - string objects are defined so that they work intuitively with familiar operators, such as the concatenation operator and the relational operators.
 - All string objects have member functions, including those for determining a string object’s length, determining whether a string object is empty, finding substrings, and removing substrings.
 - Arrays provide a way to store and access sequences of any type.
 - A limitation of arrays is that they have a fixed length.
 - You can access individual elements of string objects and arrays through the subscripting operator.
 - Bounds checking is not enforced when attempts are made to access individual elements of string objects or arrays. Therefore, bounds checking is up to the programmer.
 - C-style strings are character arrays terminated with the null character. They are the standard way to represent strings in the C language. And even though C-style strings are perfectly legal in C++, string objects are the preferred way to work with sequences of characters.
 - Multidimensional arrays allow for access to array elements using multiple subscripts. For example, a chessboard can be represented as a two-dimensional array, 8 × 8 elements.

 ## Exercises

- [word_jumble_2.0](word_jumble_2.0.cc): add scoring system