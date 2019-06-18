# CHAPTER 2: TRUTH, BRANCHING, AND THE GAME LOOP: GUESS MY NUMBER

So far, the programs you’ve seen have been linear—each statement executes, in order, from top to bottom. However, to create interesting games, you need to write programs that execute (or skip) sections of code based on some condition. That’s the main topic of this chapter.

## Understanding truth

You can represent true and false with their corresponding keywords, **true** and **false**. You can store such a Boolean value with a bool variable.

## Using the if statement

You can use an **if** statement to test an expression for truth and execute some code based on it.

- [score_rater](score_rater.cc)

## Using the else clause

You can add an **else** clause to an if statement to provide code that will only be executed if the tested expression is false.

- [score_rater_2.0](score_rater_2.0.cc)
- [score_rater_3.0](score_rater_3.0.cc): sequence of if statements with else clauses

## Using the switch statement

You can use a **switch** statement to create multiple branching points in your code

- [menu_chooser](menu_chooser.cc)

## Using while loops

**while** loops let you repeat sections of code as long as an expression is true.

- [play_again](play_again.cc)

## Using do loops

**do** loops let you repeat a section of code based on an expression. The difference is that a do loop tests its expression after each loop iteration. This means that the loop body is always executed at least once.

- [play_again_2.0](play_again_2.0.cc)

## Using break and continue statements

You can immediately exit a loop with the **break** statement, and you can jump directly to the top of a loop with a **continue** statement.

- [finicky_counter](finicky_counter.cc)

## Using logical operators

Logical NOT, !, has a higher level of precedence than logical AND, &&, which has a higher precedence than logical OR, ||. Just as with arithmetic operators, if you want an operation with lower precedence to be evaluated first, you can use parentheses.

- [designer_network](designer_network.cc)

## Generating random numbers

- [die_roller](die_roller.cc)

## Understanding the game loop

- **Setup**. This often involves accepting initial settings or loading game assets, such as sound, music, and graphics. The player might also be presented with the game backstory and his objectives.
- **Getting player input**. Whether it comes from the keyboard, mouse, joystick, trackball, or some other device, input from the player is captured.
 - **Updating game internals**. The game logic and rules are applied to the game world, taking into account player input. This might take the shape of a physics system determining the interaction of objects or it might involve calculations of enemy AI, for example.
 - **Updating the display**. In the majority of games, this process is the most taxing on the computer hardware because it often involves drawing graphics. However, this process can be as simple as displaying a line of text.
 - **Checking whether the game is over**. If the game isn’t over (if the player’s character is still alive and the player hasn’t quit, for example), control branches back to the getting player input stage. If the game is over, control falls through to the shutting down stage.
 - **Shutting down**. At this point, the game is over. The player is often given some final information, such as his score. The program frees any resources, if necessary, and exits.

 ## Project

 - [guess_number](guess_number.cc)

 ## Summary

 - You can use the truth or falsity of an expression to branch to (or skip) sections of code.
 - You can represent truth or falsity with the keywords, **true** and **false**.
 - You can evaluate any value or expression for truth or falsity.
 - Any non-zero value can be interpreted as true, while 0 can be interpreted as false.
 A common way to create an expression to be evaluated as true or false is to compare values with the relational operators.
 - The **if** statement tests an expression and executes a section of code only if the expression is true.
 - The **else** clause of an if statement specifies code that should be executed only if the expression tested in the if statement is false.
 - The **switch** statement tests a value that can be treated as an int and executes a section of code labeled with the corresponding value.
 - The **defaul**t keyword, when used in a switch statement, specifies code to be executed if the value tested in the switch statement matches no listed values.
 - The **while** loop executes a section of code if an expression is true and repeats the code as long as the expression is true.
 - A **do** loop executes a section of code and then repeats the code as long as the expression is true.
 - Used in a loop, the **brea**k statement immediately ends the loop.
 - Used in a loop, the **continue** statement immediately causes the control of the program to branch to the top of the loop.
 - The **&& (AND)** operator combines two simpler expressions to create a new expression that is true only if both simpler expressions are true.
 - The **|| (OR)** operator combines two simpler expressions to create a new expression that is true if either simpler expression is true.
 - The **! (NOT)** operator creates a new expression that is the opposite truth value of the original.
 - The game loop is a generalized representation of the flow of events in a game, the core of which repeats.
 - The file **cstdlib** contains functions that deal with generating random numbers.
 - The function **srand()**, defined in cstdlib, seeds the random number generator.
 - The function **rand()**, defined in cstdlib, returns a random number.

 ## Exercises

- [menu_chooser_2.0](menu_chooser_2.0.cc)
- [wrong_loop](wrong_loop.cc)
- [guess_number_2.0](guess_number_2.0.cc)
