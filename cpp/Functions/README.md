 ### Basic C++ programs 


**These C++ programs are extremely basic *procedural* programming examples showing the basics and fundamentals in modern C++. They perform concepts like Variables and Constants, Vectors, Statements and Operators, Characters and Strings, Controlling Program Flow, and Functions**


[1 - Menu.cpp](programs/Menu.cpp)

**Controlling Flow**

The program performs 'vectors', 'for', 'if', 'if else', 'nested' and 'while' statements as well as operators and variables.

The program displays 6 options allowing the user to choose from. Users can add numbers, displays them, calculate the main of these numbers as well as printing the largest or smallest number from the list they create.

[2 - Functions.cpp](programs/Functions.cpp)

**Functions calculating areas and volumes.**

Two different functions are built individually per calculation passing arguments from one another to then pass final values to the main() function so that they can be printed.

The menu_options() function displays and controls a menu letting the user choose what to calculate, this function also controls errors with 'if/else' statements (and cin.fail(), cin.clear()), making sure the right values are passed when compiling.   

[3 - MenuFunctions.cpp](programs/MenuFunctions.cpp)

**Menu program (as above) but performing with functions.**

This program is somehow a bit more elaborated than the Menu program as everything it performs is defined within functions, these functions are called from a switch statement this time which controls the menu options inside the main() function calling all the other different functions and passing the values as references instead of passing them by values.

This program features functions - "passing by references".   
