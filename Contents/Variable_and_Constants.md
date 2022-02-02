# Variable and Constants

## Conceptual Perspective 

Abstraction from memory location, binding, i.e allocating variables to names. Variables have type and value, they must be declared before we can use them and they can change.

Variables most be declared first 

```C++
int age; // not initialized 
double rate; // not initialized 
string name; // not initialized 
char name [2];

//We can also declare variables of non-c++ build types like below
Account david_account;

//Initialization all 3 are equivalent.
int age = 42; //c-like initialization

int age (42); //Constructor initialization

int age {42}; //c++11 list initialization  syntax 
```

Variables should be readable and maintainable and better if we declare them as close as we need them as possible (under_scores or CamelCase is fine in c++). 

### Global variables 

Can be access by any part of the program meaning can potentially be changed from any part of the program, they are declared outside the main() function 

### Constants 

- They have names
- Occupy storage 
- Are usually typed 
- Values can not changed once declared

```C++
//Literal constants are the most obvious ones
x = 20,53;
name = "David"; 

//Character Literal constants 
\n //newline
\r // return.. escape codes 

//Const keyword
const double pi {3.1415926}; // they must be initialized!

//legacy - Not to be used in modern C++
# define pi 3.1415926;
```