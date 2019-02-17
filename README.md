 Basic C++ programs -
=====================

*These C++ programs are basic **procedural** programming examples. They are not tutorials by any mean as they are only to show the basics and fundamentals in modern C++, they perform concepts like Variables and Constants, Vectors, Statements and Operators, Characters and Strings, Controlling Program Flow, and Functions, that is all the basics in C++ **procedural** programming that needs to be understood before properly touching Object Oriented Programming in C++.*


[1 - Menu.cpp](https://github.com/dcoldeira/Cpp/blob/master/Menu.cpp)

**The idea of this little program is to show the basic of the Controlling Program Flow in modern Cpp.**

The program performs 'vectors', 'for', 'if', 'if else', 'nested' and 'while' statements as well as operators and variables.

The program displays 6 options allowing the user to choose from. Users can add numbers, displays them, calculate the main of these numbers as well as printing the largest or smallest number from the list they create.  

[2 - Functions.cpp](https://github.com/dcoldeira/Cpp/blob/master/Functions.cpp)

**This program is built out of functions that calculate areas and volumes.**

Two different functions are built individually per calculation passing arguments from one another to then pass final values to the main() function so that they can be printed.

The menu_options() function displays and controls a menu letting the user choose what to calculate, this function also controls errors with 'if/else' statements (and cin.fail(), cin.clear()), making sure the right values are passed when compiling.   

[3 - MenuFunctions.cpp](https://github.com/dcoldeira/Cpp/blob/master/MenuFunctions.cpp)

**This program does exactly as the Menu program above does but it has been programmed in terms of functions.**

This program is a somehow a bit more advanced than the Menu program as everything it performs is defined within functions, these functions are called from a Switch statement this time which controls the menu options inside the main() function calling all the other different functions and passing the values as references instead of passing them by values.

This program features functions "passing by references".   
