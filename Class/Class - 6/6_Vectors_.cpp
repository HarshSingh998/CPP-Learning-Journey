
/*

STL - Standard Template Library
STL is a collection of ready-made C++ classes and functions that help us solve programming problems easily without writing everything from scratch.



STL has four main components :

1. Containers :- Store and organize data.
Example: Vector , Array , List , Map

2. Algorithms :- Perform operations on data.
Example: Sort , Search , Reverse

3. Iterators :- Access elements in containers.
Example: begin() , end() , rbegin() , rend()

4. Functors :- Objects that behave like functions.
Example: Greater , Less , Equal





? INTRODUCTION TO VECTOR :-
● Vector is a dynamic array in C++.
● It is a part of STL (Standard Template Library).
● It stores multiple elements of the same data type.
● Its size can increase or decrease dynamically.
● Vector elements are stored in contiguous memory.
● Indexing starts from 0.
● Vector automatically manages memory.





! Vector Header File :-
#include <vector>


You Can Also Use :- 
#include <bits/stdc++.h>       
( It includes almost all standard C++ headers, including <vector>, <algorithm>, <iostream>, etc. )





? Vector Syntax :-
vector <data_type> vector_name;

Example: 
vector <int> vec;     // Declaration of vector of integer type

vector <int> vec = {1, 2, 3, 4, 5};     // Declaration and initialization of vector of integer type

vector <int> vec(5, 0);     // Declaration of vector of integer type with size 5 and all elements initialized to 0





*/


#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector <int> vec = {1, 2, 3, 4, 5}; 
    cout << vec[0] << endl;        // Output: 1
    cout << vec[1] << endl;        // Output: 2
    cout << vec[2] << endl;        // Output: 3
    cout << vec[3] << endl;        // Output: 4
    cout << vec[4] << endl;        // Output: 5


    vector <int> v(5, 0); 
    cout << v[0] << endl;        // Output: 0
    cout << v[1] << endl;        // Output: 0
    cout << v[2] << endl;        // Output: 0
    cout << v[3] << endl;        // Output: 0
    cout << v[4] << endl;        // Output: 0

    return 0;
}









/*

Syntax Of  " for each " loop in C++ :-

for (data_type variable_name : container_name) { 
    ( Code to be executed for each element in the container )
}

*/

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector <int> vec(5, 0);

    for(int value : vec) {
        cout << value << endl;        // Output: 0 0 0 0 0
    }



    vector <char> v = {'a', 'b', 'c', 'd', 'e'};
    
    for(char value : v) {
        cout << value << endl;        // Output: a b c d e
    }



    return 0;
}

