

/*

Vectors Functions :-
1. Size() :- Returns the number of elements in the vector.
2. Push_back() :- Adds an element at the end of the vector.
3. Pop_back() :- Removes the last element from the vector.
4. front() :- Returns the first element of the vector.
5. back() :- Returns the last element of the vector.
6. at() :- Returns the element at a specific position in the vector.



*/



#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector <char> vec = {'a', 'b', 'c', 'd', 'e'};

    cout << "Size of vector: " << vec.size() << endl;
    
    for(char value : vec) {
        cout << value << endl;
    }

    return 0;
}







#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector <int> vec ;

    cout << "Size of vector: " << vec.size() << endl;
    vec.push_back(1);
    vec.push_back(25);
    vec.push_back(35);
    cout << "After Push Back Size of vector: " << vec.size() << endl;
    
    for(int value : vec) {
        cout << value << endl;
    }

    return 0;
}







#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector <int> vec ;

    cout << "Size of vector: " << vec.size() << endl;

    vec.push_back(1);
    vec.push_back(25);
    vec.push_back(35);
    cout << "After Push Back Size of vector: " << vec.size() << endl;

    vec.pop_back();
    cout << "After Pop Back Size of vector: " << vec.size() << endl;
    
    for(int value : vec) {
        cout << value << endl;
    }

    return 0;
}







#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector <int> vec ;

    cout << "Size of vector: " << vec.size() << endl;
    
    vec.push_back(1);
    vec.push_back(25);
    vec.push_back(35);
    cout << "After Push Back Size of vector: " << vec.size() << endl;

    vec.pop_back();
    cout << "After Pop Back Size of vector: " << vec.size() << endl;

    cout << "First Element: " << vec.front() << endl;
    cout << "Last Element: " << vec.back() << endl;


    cout << "Element at index 0: " << vec.at(0) << endl;
    cout << "Element at index 1: " << vec.at(1) << endl;

    return 0;
}

