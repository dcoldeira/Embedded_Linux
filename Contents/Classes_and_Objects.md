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

**This (the reserved keyboard pointer)**
