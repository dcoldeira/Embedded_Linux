# Control Flow

### If Statement 

```C++
#include <iostream>

using namespace std;

int main(){

    int num{};

    cout<<"Please enter qualification number"<<endl;
    cin>> num;

    if (100 >= num && num >= 91){
        cout<<"A";
    } else if(90 >= num && num >70 ){
        cout<<"B";
        } else if(69 >= num && num >=70 ){
        cout<<"C";
    }else cout<<"Need to work harder "<<endl;

}
```

### The Switch Statement

- Control expression must evaluated to an integer type
- The case expression must be constant expressions that evaluate to an integer or literal 
- Once a match,  all following cases are executed **until** a break is reached the switch complete  

```C++ 

``