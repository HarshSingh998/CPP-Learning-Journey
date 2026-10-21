

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

