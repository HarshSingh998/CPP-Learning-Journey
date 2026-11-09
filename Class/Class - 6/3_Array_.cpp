
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
