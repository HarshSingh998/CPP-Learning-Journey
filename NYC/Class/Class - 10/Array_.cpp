
/*

What Is Arrays ?
Arrays Are used to store multiple values in a single variable, instead of declaring separate variables for each value.



Syntax of Array:
data_type array_name[array_size];



Why Use Arrays ?
1. Arrays are used to store multiple values in a single variable.
2. Arrays are used to store similar types of values in a single variable.
3. Arrays Use Continuous Space in Memory.



How To Create Array ?
1. Declaration of Array
2. Initialization of Array



How To Access Array Elements ?
By using Index Number ( Pehle Element ka Index 0 hota hai, Dusre ka 1, Teesre ka 2, ... )



Input In Array :- By using For Loop

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


    // Traverse
    for (int index = 0; index <= 9; index++) {
        cout << multipleOf2[index] << " ";
    }


    return 0;
}









// Input In Array

#include <iostream>
using namespace std;

int main() {

   
    int arr[5];
    for (int index = 0; index <= 4; index++) {
        cout << "Enter Value For Index " << index << " : ";
        cin >> arr[index];
    }


    for(int index = 0; index <= 4; index++) {
        cout << arr[index] << " ";
    }
    cout << endl;


    return 0;
}







/*

Can We Pass Array In Function ? -> YES

Jab Kabhi Array ko function me pass karte hai, toh hame array ka size bhi pass karna padta hai, 
kyuki function ko ye nahi pata hota ki array me kitne elements hai.

*/

#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    // For Printing Array Elements
    for(int index = 0; index <= size - 1; index++) {
        cout << arr[index] << " ";
    }
    cout << endl;
}

int main() {

    int arr[] = {10, 20, 30, 40, 50};
    int size = 4; 
    // Array ka size 5 hai, lekin last index 4 hai, isliye size = 4

    printArray(arr, size);

    return 0;
}









// Intialization of Array with Zeros

#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for(int index = 0; index <= size - 1; index++) {
        cout << arr[index] << " ";
    }
    cout << endl;
}

int main() {

    int arr[5] = {0};
    int size = 5;
    printArray(arr, size);


    int arr[5] = {-1};
    int size = 5;
    printArray(arr, size);

    return 0;
}








#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for(int index = 0; index <= size - 1; index++) {
        cout << arr[index] << " ";
    }
    cout << endl;
}

int main() {

    // Garbage Value (Random Value) Initialization
    int arr[5];
    int size = 5;
    printArray(arr, size);


    return 0;
}































// 2D Array = Combination of Rows and Columns

#include <iostream>
using namespace std;

int main() {

    // Declaration
    // int arr[3][4];
    
    // Intialization
    int arr[3][4] = {
        {10, 20, 30, 40},
        {50, 60, 70, 80},
        {90, 100, 110, 120}
    };

    // Accessing Array Elements
    cout << arr[0][0] << endl; // 10
    cout << arr[0][1] << endl; // 20
    cout << arr[0][2] << endl; // 30
    cout << arr[0][3] << endl; // 40
    cout << arr[1][0] << endl; // 50
    cout << arr[1][1] << endl; // 60
    cout << arr[1][2] << endl; // 70
    cout << arr[1][3] << endl; // 80
    cout << arr[2][0] << endl; // 90
    cout << arr[2][1] << endl; // 100
    cout << arr[2][2] << endl; // 110
    cout << arr[2][3] << endl; // 120

    return 0;
}













#include <iostream>
using namespace std;

int main() {

    int arr[3][4] = {
        {10, 20, 30, 40},
        {50, 60, 70, 80},
        {90, 100, 110, 120}
    };

    int rows = 3;
    int cols = 4;

    // Printing
    for(int row = 0; row <= rows - 1; row++) {
        for(int col = 0; col <= cols - 1; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    int arr[3][4];

    int rows = 3;
    int cols = 4;

    for(int row = 0; row <= rows - 1; row++) {
        for(int col = 0; col <= cols - 1; col++) {
            cout << "Enter Value for Row " << row << " and Column " << col << ": ";
            cin >> arr[row][col];
        }
        cout << endl;
    }

    for(int row = 0; row < rows; row++) {
        for(int col = 0; col < cols; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }  

    return 0;
}











// Passing 2D Array In Function

#include <iostream>
using namespace std;

void print2DArray(int arr[][4], int rowSize, int colSize) {
    cout << "Printing 2D Array Elements: " << endl;
    for(int row = 0; row < rowSize; row++) {
        for(int col = 0; col < colSize; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}
// Minimum Size of Column is Required in Function Parameter, Otherwise Compiler will Throw Error.

int main() {

    int arr[3][4];

    int rows = 3;
    int cols = 4;

    for(int row = 0; row <= rows - 1; row++) {
        for(int col = 0; col <= cols - 1; col++) {
            cout << "Enter Value for Row " << row << " and Column " << col << ": ";
            cin >> arr[row][col];
        }
        cout << endl;
    }

    print2DArray(arr, rows, cols);

    return 0;
}

