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
#include <iostream>

using namespace std;

int main(){

    enum Direction{
        up, down, left, right
    };

    Direction heading {right};

    switch (heading){
    case left:
        cout<<"going left"<<endl;
        break;
    case right:
        cout<<"going right"<<endl;
        break;
    default:
        cout<<"handles the rest"<< endl;
    }
}
```

### Conditional operator - ?:

`(cond_expr) ? expr1 : expre2`

- **cond_expr** evaluates to a boolean expression. If **cond_expr** is true then the value of expr1 is returned, otherwise, if false expr2 is returned.  - E    asy to abuse!

```C++
#include <iostream>

using namespace std;

int main(){
    // cout<<"Type a number to evaluate if it's even or odd"<<endl;
    // int num {};
    // cin>>num;
    // cout<<"Number is "<<((num%2==0) ? "even!" : "odd")<<endl;

//---------------0

// Little program to find out the largest and smallest 
//number given:
    int num1{};
    int num2{};

    cout<< "Enter two numbers separated by a space"<<endl;
    cin>>num1>>num2;

    if (num1 != num2){
        cout<<"The largest is "<< ((num1>num2)?num1 : num2)<<endl;
        cout<<"and the smallest is "<<((num1<num2)?num1:num2)<<endl;
    } else{
        cout<<"Numbers are the same"<<endl;
    }
}
```

### Looping/Iteration/Repetition

Loops allow the execution of an statement or block of statements repeatedly, looping constructor in C++ are:

- *for* loop
- *range-based for* loop
- *while* loop
- *do while* loop 

#### For loop
```C++

```