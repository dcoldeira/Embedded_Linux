# Functions

- Name

name of functions,same rules as variable.

- Parameter list

the variables passed into the function, their type must be specified. 

- Return type

Type of data that is returned from the function.

- body

All statements in the {} that are executed when the function is called. 
### [Some of the old stuff done](Old_Stuff)

### Protos

```C++
// protos.cpp -- using prototypes and function calls
#include <iostream>

using namespace std;

void cheers(int);
    // prototype: no return value
    double cube(double x); // prototype: returns a double
    int main(){

    cheers(5);

    // function call
    cout << "Give me a number: ";
    double side;
    cin >> side;
    double volume = cube(side);

    // function call
    cout << "A " << side <<" side long cube has a volume of ";
    cout << volume << " cubic meters.\n";
    cheers(cube(2));

    // prototype protection at work
    return 0;
    }
    void cheers(int n){

    for (int i = 0; i < n; i++)
        cout << "Cheers! ";
        cout << endl;
    }
    double cube(double x){
    return x * x * x;
}
```