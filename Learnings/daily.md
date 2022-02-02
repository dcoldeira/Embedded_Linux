## My daily learnings progress will be documented here. 

### Variables:

Variables most be declared first 

```C++
int age; 
string name; 
char name [2];

```
### Arrays

```C++
int grades [] {12,45,76,2};
cout<<the_array{0}<<endl; // prints 12

// Multidimentionalarrays:

int multy_dim_array [][]; //rows and colums
```
### Vectors 

```C++
#include <vector>

using namespace std;

vector <int> grades (3, 100); // initializing 3 vectors to 100
vector<int> gradotes {98, 100, 99} // 3 vectors 98, 100, 99

// vectors element start at 0 and last element is -1 and they initilized to 0 
```
### Functions 


### Protos
```C++
// protos.cpp -- using prototypes and function calls
#include <iostream>
void cheers(int);
// prototype: no return value
double cube(double x); // prototype: returns a double
int main()
{
using namespace std;
cheers(5);
// function call
cout << "Give me a number: ";
double side;
cin >> side;
double volume = cube(side);
// function call
cout << "A " << side <<"-foot cube has a volume of ";
cout << volume << " cubic feet.\n";
cheers(cube(2));
// prototype protection at work
return 0;
}
void cheers(int n)
{
using namespace std;
for (int i = 0; i < n; i++)
cout << "Cheers! ";
cout << endl;
}
double cube(double x)
{
return x * x * x;
}
```
