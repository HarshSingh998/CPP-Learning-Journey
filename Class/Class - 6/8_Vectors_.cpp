
/*

! Static And Dynamic Allocation Of Memory In C++

Static Memory Allocation :-
Static memory allocation is a process in which memory size is fixed at compile time and cannot be changed during program execution.

Example:
int arr[5];

Dynamic Memory Allocation :-
Dynamic memory allocation is a process in which memory is allocated at runtime according to the program's requirements.

Example:
vector<int> v;





1. Static Memory Allocation :- 
- Memory size is fixed before program execution.
- Size is decided at compile time.
- Memory cannot be resized easily.
- Memory allocation is automatic for local variables.
- Commonly uses stack memory for local variables.

- Example:
int arr[5];
- Array size is fixed at 5 elements.



2. Dynamic Memory Allocation :-
- Memory is allocated during program execution.
- Size is decided at runtime.
- Memory size can be decided according to user input.
- Memory can be allocated as required.
- Uses heap memory.
- Memory is managed using new and delete.







! Stack Memory Vs Heap Memory

1. Stack Memory :-
Stack Memory is a memory area used for local variables and function calls ( static Memory allocation ). 
Memory is managed automatically, and it is generally released when the function ends.



2. Heap Memory :-
Heap Memory is a memory area used for dynamic memory allocation. 
Memory can be allocated during runtime according to program requirements.






* Difference b/w Stack Memory and Heap Memory :-

Stack memory is managed automatically.
Heap memory allocated using new is released using delete.

Stack is generally used for local variables and function calls.
Heap is generally used for dynamic memory allocation.

Stack allocation is generally faster.
Heap allocation provides more flexibility.




* Difference b/w Static and Dynamic Memory Allocation :-

In static allocation, memory size is decided before execution.
In dynamic allocation, memory size can be decided during execution according to user input.






Vector :- Vector is a dynamic array that automatically manages memory and can change its size during program execution.

Vector Properties :-

1. Size
- size() returns the number of elements currently present in a vector.
- It changes when elements are added or removed.

- Example:
vector<int> v = {10, 20, 30};
cout << v.size();  // 3



2. Capacity
- capacity() returns the total number of elements that a vector can store in its currently allocated memory without requiring reallocation.
- Capacity is always greater than or equal to size.
- Capacity may increase automatically when new elements are added.

- Example:
vector<int> v = {10, 20, 30};
cout << v.capacity();  // At least 3

*/



#include <iostream>
using namespace std;

int main() {

    vector<int> v;
    
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);

    cout << "Size: " << v.size() << endl;       // Output: Size: 3
    cout << "Capacity: " << v.capacity() << endl;     // Output: Capacity: 4 


    v.push_back(3);
    v.push_back(4);

    cout << "Size: " << v.size() << endl;       // Output: Size: 5
    cout << "Capacity: " << v.capacity() << endl;     // Output: Capacity: 8


    return 0;
}











/*

? Single Number In Vector -

Find the single number in an array where every element appears twice except one.

Input:
nums[] = {4, 1, 2, 1, 2}

Output:
Single Number: 4

*/


#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v = {4, 1, 2, 1, 2};

    int ans = 0;

    for(int value : v ){
        ans = ans ^ value;
    }

    cout << "Single Number: " << ans << endl;

    return 0;
}
