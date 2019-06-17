// GAME OVER
// This is a comment
/*
    This is a comment also
 */
// comments are ignored

// preprocessor directive
// #include will include the contents of another file
// use <..> to include files that come with the compiler
// a file that you include is called a header file
#include <iostream>

// All C++ programs must have a function called main(),
// which is the starting point of the program
int main()
{
    // "Game Over !" is a string literal
    // cout is an object that sends ata to the output stream (console)
    // std::cout means cout from the standard library
    // std is a namespace
    std::cout << "Game Over !" << std::endl;

    // return 0 to indicate the program ended without a problem
    return 0;
}