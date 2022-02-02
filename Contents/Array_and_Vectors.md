# Array and Vectors

### Arrays

Compound data type/structure. A collection of elements of the same type that can be accessed directly. They fixed in sizes, they are stored continuously in memory and individual elements can be accessed by their position or index. 

```C++
int grades [] {12,45,76,2};

cout<<the_array{0}<<endl; // prints 12

// Multidimensional arrays:

int multy_dim_array [][]; //rows and column
```
### Vectors 

```C++
#include <vector>

using namespace std;

vector <int> grades (3, 100); // initializing 3 vectors to 100
vector<int> gradotes {98, 100, 99} // 3 vectors 98, 100, 99

// vectors element start at 0 and last element is -1 and they initialized to 0 
```