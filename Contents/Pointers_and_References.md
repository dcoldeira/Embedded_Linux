### Pointers and References

- They are declared in the same way as variables but with an asterisk prior to the variable name (which is not a mathematical operator)
- We read them from right to left
- Like variables, if they are not initialized they will contain 'garbage' data (they will point anywhere).
- Introduced in C++ 11 and represent address zero.
- They are **addresses** to variables, vectors, functions etc. (i.e, all pointers have the same size as they only point to variables (by the '&' assigning address operator), vectors, functions etc which can be from different types!)

```C++
#include <iostream>

using namespace std;

int main(){

    int num{10};
    cout<<"Value of num is: "<<num<<endl; //10
    cout<<"sizeof of num is: "<<sizeof num<<endl; //4 
    cout<<"Address of num is: "<<&num<<endl;//0x7....

    return 0;
}
```

### Referencing a Pointer

  To access data we are pointing to - dereferencing a pointer 

  - the asterisk **'*'** is used to both to declare  and to dereference a pointer in C++.

```C++
#include <iostream>

using namespace std;

int main(){

    int score{100};
    int *score_ptr{&score};

    cout<<*score_ptr<<endl; //100

    *score_ptr = 200;

    cout<<*score_ptr<<endl; //dereferencing the pointer to 200
    cout<<score<<endl; //displays 200 as has been changed by the pointer above

    double hight_temp {32.3};
    double low_temp {0.3};
    double *temp_ptr{&hight_tem};

    cout<<*temp_ptr<<endl; //32.3
    temp_ptr = &low_temp;
    cout<<*temp_ptr<<endl; //0.3

    cout<< "\n-------------------"<<endl;

    vector<string>names{"David", "John", "Maria"};
    vector<string>*vector_ptr{nullptr};

    vector_ptr = &names;
    cout<<"First name: "<<(*vector_ptr).at(0)<<endl; // will print David as (*vector_prt has been dereferenced)
    for(auto names:*vector_ptr)
        cout<<names<<" ";
    cout<<endl;
    cout<<endl;
    
    return 0;
}
```

**& denotes a reference..** [More here](https://isocpp.org/wiki/faq/references)



