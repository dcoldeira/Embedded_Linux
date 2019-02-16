 Basic C++ programs
================================


[1 - Menu.cpp](https://github.com/dcoldeira/Cpp/blob/master/Menu.cpp)

**The idea of this little program is to show the basic of the Controlling Program Flow in modern Cpp.**

The program performs 'vectors', 'for', 'if', 'if else', 'nested' and 'while' statements as well as operators and variables.

The program displays 6 options allowing the user to choose from. Users can add numbers, displays them, calculate the main of these numbers as well as printing the largest or smallest number from the list they create.  

[2 - Functions.cpp](https://github.com/dcoldeira/Cpp/blob/master/Functions.cpp)

**This program is built out of functions that calculate areas and volumes.**

Two different functions are built individually per calculation passing arguments from one another to then pass final values to the main() function so that they can be printed.

The menu_options() function displays and controls a menu letting the user choose what to calculate, this function also controls errors with 'if/else' statements (and cin.fail(), cin.clear()), making sure the right values are passed when compiling.   

[3 - MenuFunctions.cpp](https://github.com/dcoldeira/Cpp/blob/master/MenuFunctions.cpp)

**This program does exactly as the Menu program above but it has been programmed in terms of functions, everything now is a function **

This program is a bit more advanced than the Menu program as everything it performs is defined within functions, these functions are called from a Switch statement this time which controls the menu options inside the main() function.  
