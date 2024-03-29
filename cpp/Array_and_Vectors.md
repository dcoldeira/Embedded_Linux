# Array and Vectors

### Arrays

Compound data type/structure. A collection of elements of the same type that can be accessed directly. They fixed in sizes, they are stored continuously in memory and individual elements can be accessed by their position or index. 

```C++
#include <vector>

using namespace std;

int grades [] {12,45,76,2};
cout<<grades[0]<<endl; // prints 12

// Multidimensional arrays:
int multy_dim_array [][]; //rows and column
```
### Vectors 

Vectors are objects (from the Standard Template Library), their are some sort of dynamic arrays with similar syntax that can grow and shrink in size at execution time, they provided bound checking,power function like find, sort, reverse etc can be used. 

Vectors element start at 0 and last element is -1 and they initialized to 0. Vectors can be copies of arrays or another vector etc.. They are very efficient!

```C++
#include <vector>  //must be included

using namespace std;

//initializing Vectors containing no elements
vector <char> vowel;

// initializing 3 vectors (elements) to 100 .. i.e {100, 100, 100}
vector <int> grades (3, 100); 

// 3 vectors 98, 100, 99
vector<int> three_grades {98, 100, 99} 

//if subscript operator[square brackets] is used no bounding is checked, 
vector <int> test_scores{99, 98, 40, 88};
cout<<"First score at index zero: " << test_scores[0]<<endl; 

//As they are objects, they can perform operations (access to their methods in their classes), 
//so another way to access to them:
cout<<"First score at index zero: " << test_scores.at(0)<<endl; 
//'.at' not just calls the vector at that index but can also re-write it:
test_scores.at(0) = 100; //assignment statement

//.push_back method adds a new element at the end of the vector   
test_scores.push_back(80); //adds the 80 element to the vector
```
Elements must be of the same type as all the other vector elements

### To cout a verctor:

```C++
    cout<<"";
      for (const int& i : vectors_name) { // auto instead of const when is a char or String
    cout << i << "  ";
```
An example:

```C++
#include<iostream>
#include <vector>

using namespace std;

int main(){
    
    vector<int> grades{0};
    grades.push_back(3);
    
    cout<<"";
      for (const int& i : grades) {
    cout << i << "  ";
  }
    
    return 0;
    }
```
[more here...](https://www.programiz.com/cpp-programming/vectors)
