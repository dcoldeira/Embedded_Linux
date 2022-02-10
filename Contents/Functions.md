
# Basic programs featuring functions can be found [here..](Functions/README.md)

### Functions have:

- A name

name of functions,same rules as variable.

- A parameter list

the variables passed into the function, their type must be specified. 

- A return type

Type of data that is returned from the function.

- A body

All statements in the {} that are executed when the function is called. 



### Prototypes:

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

### Overloading 

Functions overloading allows to create multiple functions with the same name, as long as they have different parameters

```C++
void printNumber(int a){
    cout<<a; //effective only with integer arguments 
}

//overlapping it
void printNumber(float a){
    cout<<a; //now it will work for both integers and floats 
}
```

### Recursion

A recursive function in C++ is a function that call itself. A termination condition must be included to avoid recursion running indefinitely..

```C++
using namespace std;

    int factorial(int n){
        if (n==1){
                return 1;
        }else{
            return n*factorial(n-1);
        }
    }

int main(){
    int num{};
    cout<<"Enter number: "<<endl;
    cin>>num;
    cout<<"factorial of "<<num<<" is "<<factorial(num);
    return 0;
}
``` 
### Function Arguments

- by value (default)

This function passes the copy of the variable/s as argument:

```C++
void myFunction(int x){
    x =100
}
int main(){
    int var = 20;
    myFunction(var);
    cout<< var;
}
```

- by reference

Copies an argument's address into the formal parameter(i.e with pointers - Only used in cases like data type uses a lot of memory etc):
```C++
void myFunction(int *x){
    *x =100
}
int main(){
    int var = 20;
    myFunction(&var);
    cout<< var;
}
``` 
