# Classes and Objects

### Classes

- Blueprints from which objects are created 
- user friendly data type
- has attributes, methods..
- provide  a public  interface 

**Classes should be named so that "object.function" is easy to read and appears to be logical.**

```C++
class NiceClass{
public:    
    string niceString{};
    int niceInt{};
};
```
### Objects

- Created from classes
- represents a specific instance of a class
- can create many objects
- has its own identity
- each can use the defined class methods

```C++
class NiceClass{
public:

    string niceString{};
    int niceInt{};
};

int main(){
    NiceClass niceObject;
    niceObject.niceString = "The nice string";
    cout<<niceObject.niceString;
}
```

### Class members modifiers

- Public 

Accessible everywhere

- Private

accessible only for members of the class

- Protected

Used in inherence 


### Constructors

```C++
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class NiceClass{
public:
    string niceString{};
    int niceInt{};
    NiceClass(string nicestring, int niceint){ //constructor
        niceString = nicestring;
        niceInt = niceint;
    }
};

int main(){

    NiceClass niceObject("The nice string", 1);

    cout<<niceObject.niceString<<" "<<niceObject.niceInt;
    return 0;
}
```
The header .h file holds the function declarations (prototype) and variables declarations:

```C++
// in NiceClass.h
#ifndef NICECLASS_H
#define NICECLASS_H
#include<iostream>
#include<NiceClass.h>
using namespace std;

class NiceClass
{

public:
    string niceString;
    int niceInt;
    NiceClass(string nicestring, int niceint);
    string msg();
};

#endif // NICECLASS_H
```
**Models -** Implementation and methods go in the source ".cpp" file ("::" is called **binary scope resolution operator**):

```C++
//in NiceClass.cpp
#include "NiceClass.h"

NiceClass::NiceClass(string nicestring,int niceint)

{
    niceString = nicestring;
    niceInt = niceint;

}

string NiceClass::msg()
{
    cout<<niceString<<" "<<niceInt<<endl;
}
```

And main then: 
```C++
//main.cpp
#include<iostream>
#include <bits/stdc++.h>
#include<NiceClass.h>
using namespace std;

//class NiceClass{
//public:
//    string niceString{};
//    int niceInt{};
//    NiceClass(string nicestring, int niceint){
//        niceString = nicestring;
//        niceInt = niceint;
//    }
//};

int main(){

    NiceClass niceObject("The nice string", 1);
    niceObject.msg();

    //cout<<niceObject.niceString<<" "<<niceObject.niceInt;
    
    return 0;
}
```