
/*

? Pass By Reference
Pass By Reference ka matlab hai function ko original variable ka reference dena, taaki function ke andar changes karne par original variable bhi change ho.

*/


#include <iostream>
using namespace std;

void changeArr(int arr[], int size) {
    cout << "Inside function before modification: ";

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < size; i++) {
        arr[i] += 10;  // Adding 10 to each element
    }
}

int main() {

    int arr[] = {1, 2, 3, 4, 5};

    changeArr(arr, 5);  // Passing array to function

    cout << "Modified array: ";

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
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
    int size = 5; 
    // Array ka size 5 hai, lekin last index 4 hai, isliye size = 5

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


    // int arr[5] = {-1};
    // int size = 5;
    // printArray(arr, size);

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

