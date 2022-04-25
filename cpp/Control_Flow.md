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

### For loop
```C++
#include<iostream>
#include <vector>
using namespace std;

int main(){

//    for(int i{1}; i<=10;++i)
//        cout<<i<<endl;

//     for(int i{1}; i<=10; i+=2) //increasing by 2..
//        cout<<i<<endl;

//    for(int i{10}; i>0; --i) //decreasing by 1..
//        cout<<i<<endl;

//    for(int i{10}; i>=0; i-=2) //decreasing by 2..
//        cout<<i<<endl;
//    cout<<"Bastoff"<<endl;

//    for(int i{0}; i<=100; i+=10) {
//        if(i%15==0)
//            cout<<i<<endl;
//    }

//    for(int i{1},j{5};i<=5;++i,++j)
//        cout<<i<<"+"<<j<<"="<<(i+j)<<endl;

//    for(int i{1},j{5} ; i<=5 ; i++, j++)
//            cout<<i<<" X "<<j<<" : "<<(i*j)<<endl;

    vector<int>nums{10,20,30,40,50};
        for(int i{0}; i<nums.size();++i)
            cout<<nums[i]<<endl;

    return 0;
}
```

### Range-based for Loop

(introduced in C++11) - Arrays:

```C++
#include<iostream>

using namespace std;

int main(){
    int scores[]{10,50,35}; // auto here tells the compiler to figure our the type of variable used 
    for (auto score:scores)
        cout<<score<<endl;
    return 0;
}
```
Vectors:

```C++
#include<iostream>
#include <vector>
#include<iomanip> // used to round results

using namespace std;

int main(){
    vector<double>temperatures{23,20,26,18};
    double total{};
    double average_temp {};
    for (auto temp:temperatures)
        total += temp; //adds up temperatures
    if (temperatures.size() != 0)
    average_temp = total/temperatures.size();
    cout<<fixed<<setprecision(1); //iomanip
    cout<<"The temperature is: "<<average_temp<< endl;
    return 0;
}
```
Collections:
```C++
#include<iostream>

using namespace std;

int main(){
    for (auto val:{1,2,3,4,5,6}) //collection
    cout<<val<<endl;
    return 0;
}
//displays number in a column
```
C stile string

```C++
#include<iostream>

using namespace std;

int main(){
    for (auto c:"This is a line")
    cout<<c; //without ending line here
    return 0;
}
```
### While Loop

```C++
#include <iostream>

using namespace std;

int main(){

    int num{};

    cout<<"Enter a positive integer to start the countdown: "<<endl;
    cin>>num;
    while(num >=0){
        cout<<num<<endl;
        --num;
    }
    return 0;
}
```
Counting up:

```C++
#include <iostream>

using namespace std;

int main(){

    int num{};
    cout<<"Enter a positive integer to count up to:"<<endl;
    cin>>num;

    int i{1};
    while(num >= i){
        cout<<i<<endl;
        ++i;
    }
    return 0;
}
```
Input validation: 

```C++
#include <iostream>

using namespace std;

int main(){

   cout<<"Enter an integer less than 50:"<<endl;
   int num{};
   cin>>num;
   while(num >=50){ //or something like  !(num < 50)
    cout<<"Try again, less than 50 this time!"<<endl;
    cin>>num;
   }
   cout<<"That's it, thanks!"<<endl;

    return 0;
}
```
Boolean flag

```C++
#include <iostream>

using namespace std;

int main(){
    cout<<"Please enter an integer between 1 and 50:"<<endl;
    int num{};
    bool done{false};
    cin>>num;

    while(!done){
        cout<<"Try again, enter an integer between 1 and 50 this time:"<<endl;
        cin>>num;
        if(num <= 1 || num >= 50)
            cout<<"Out of rang, try again:"<<endl;
            else{
                cout<<"Thanks"<<endl;
                done = true;
            }
    }

    return 0;
}
```
### Do while

```c++
include <iostream>

using namespace std;

int main(){

    char selection{};
    do{
        cout<<"Please choose:"<<endl;
        cout<<"1 - for One Option"<<endl;
        cout<<"2 - for Two Option"<<endl;
        cout<<"3 - for Three Option"<<endl;
        cout<<""<<endl;
        cout<<"-----------"<<endl;
        cout<<""<<endl;
        cin>>selection;
        cout<<""<<endl;
            if (selection == '1'){
                cout<<"You have chosen option One(1)"<<endl;
                cout<<""<<endl;
            }else if (selection == '2'){
                cout<<"You have select option Two(2)"<<endl;
            }else if (selection == '3'){
                cout<<"You have select option Three(3)"<<endl;
            }else if (selection == 'q'|| selection=='Q'){
                cout<<"Good bye!"<<endl;
            }else
            cout<<"Invalid character\n"<<endl;
    }while(selection !='q' && selection!='Q');
    return 0;
}
```
### Nested Loops

```C++
#include <iostream>

using namespace std;

int main(){

    for (int num1 {1}; num1 <=10; ++num1){
        for(int num2{2};num2 <=10;++num2){
            cout<<num1<<" X "<<num2<<" = "<<num1*num2<<endl;
        }
        cout<<"----------"<<endl;
    }
    return 0;
}
```
Histogram 

```C++
#include <iostream>
#include<vector>

using namespace std;

int main(){

    int num_of_items{};
    cout<<"How many data do you have?\n";
    cin>>num_of_items;

    vector<int>data{};

    for(int i{1}; i<= num_of_items; ++i){
        int data_item{};
        cout<<"Enter data items\n"<<i<<":";
        cin>>data_item;
        data.push_back(data_item);
    }

    cout<<"Displaying the data: "<<endl;
        for(auto val:data){
            for (int i{1}; i<=val; ++i){
                if (i%5==0)
                    cout<<"*";
                else
                    cout<<"-";
            }
            cout<<endl;
        }
        cout<<endl;
    return 0;
}
```