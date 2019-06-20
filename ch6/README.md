# CHAPTER 6: REFERENCES: TIC-TAC-TOE

## Using references

A *reference* provides another name for a variable. Whatever you do to a reference is done to the variable to which it refers.

- [reference](reference.cc)

## Passing reference to alter arguments

References come in quite handy when you are passing variables to functions because when you pass a variable to a function, the function gets a copy of the variable. This means that the original variable you passed (called the argument variable) can’t be changed. Sometimes this might be exactly what you want because it keeps the argument variable safe and unalterable. But other times you might want to change an argument variable from inside the function to which it was passed. You can accomplish this by using references.

- [swap](swap.cc)

## Passing references for efficiency

Passing a variable by value creates some overhead because you must copy the variable before you assign it to a parameter. Passing by reference, on the other hand, is efficient because you don’t make a copy of an argument variable. However, this introduces a potential problem, it opens up an argument variable to being changed. Is there a way to take advantage of the efficiency of passing by reference while protecting an argument variable’s integrity? Yes, to pass a **constant reference**.

- [inventory](inventory.cc)

## Returning references

Just like when you pass a value, when you return a value from a function, you’re really returning a copy of the value. Returning a reference is an efficient alternative.

- [inventory_referencer](inventory_referencer.cc)


## Project

- [tic_tac_toe](tic_tac_toe.cc)


## Summary
 - A reference is an alias; it’s another name for a variable.
 - You create a reference using &—the referencing operator.
 - A reference must be initialized when it’s defined.
 - A reference can’t be changed to refer to a different variable.
 - Whatever you do to a reference is done to the variable to which the reference refers.
- When you assign a reference to a variable, you create a new copy of the referenced value.
- When you pass a variable to a function by value, you pass a copy of the variable to the function.
- When you pass a variable to a function by reference, you pass access to the variable.
- Passing by reference can be more efficient than passing by value, especially when you are passing large objects.
- Passing a reference provides direct access to the argument variable passed to a function. As a result, the function can make changes to the argument variable.
 - A constant reference can’t be used to change the value to which it refers. You declare a constant reference by using the keyword const.
 - You can’t assign a constant reference or a constant value to a non–constant reference.
 - Passing a constant reference to a function protects the argument variable from being changed by that function.
 - Changing the value of an argument variable passed to a function can lead to confusion, so game programmers consider passing a constant reference before passing a non–constant reference.
 - Returning a reference can be more efficient than returning a copy of a value, especially when you are returning large objects.
 - You can return a constant reference to an object so the object can’t be changed through the returned reference.
 - A basic technique of game AI is to have the computer consider all of its legal moves and all of its opponent’s legal replies before deciding which move to take next.

## Exercises

- [mad_lib_2.0](mad_lib_2.0.cc)