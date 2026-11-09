
/*

What Is Arrays ?
Arrays Are used to store multiple values in a single variable, instead of declaring separate variables for each value.



Syntax of Array:
data_type array_name[array_size];



Why Use Arrays ?
1. Arrays are used to store multiple values in a single variable.
2. Arrays are used to store similar types of values in a single variable.
3. Arrays Use Contiguous ( Continuous ) Space in Memory And Linear. 



How To Create Array ?
1. Declaration of Array
2. Initialization of Array



How To Access Array Elements ?
By using Index Number ( Pehle Element ka Index 0 hota hai, Dusre ka 1, Teesre ka 2, ... )



Input In Array :- By using "For Loop"

*/



#include <iostream>
using namespace std;

int main() {

    // Declaration
    int laxman[5];

    // Initialization
    int arr[5] = {10, 20, 30, 40, 50};
    int brr[] = {10, 20, 30, 40, 50};


    // Accessing Array Elements
    int multipleOf2[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    cout << multipleOf2[0] << endl; // 2
    cout << multipleOf2[1] << endl; // 4
    cout << multipleOf2[2] << endl; // 6
    cout << multipleOf2[3] << endl; // 8
    cout << multipleOf2[4] << endl; // 10
    cout << multipleOf2[5] << endl; // 12
    cout << multipleOf2[6] << endl; // 14
    cout << multipleOf2[7] << endl; // 16
    cout << multipleOf2[8] << endl; // 18
    cout << multipleOf2[9] << endl; // 20

    cout << multipleOf2[33] << endl; 
    // Garbage Value (Out of Bound)


    // Traverse ( Looping ) Array Elements -> Output All Array Elements
    for (int index = 0; index <= 9; index++) {
        cout << multipleOf2[index] << " ";
    }


    return 0;
}










// Input In Array Then Output  -> Input All Array Elements From User Then Output All Array Elements

#include <iostream>
using namespace std;

int main() {

    int arr[5];

    // Input
    for (int index = 0; index <= 4; index++) {
        cout << "Enter Value For Index " << index << " : ";
        cin >> arr[index];
    }

    // Output
    for(int index = 0; index <= 4; index++) {
        cout << arr[index] << " ";
    }
    cout << endl;


    return 0;
}
