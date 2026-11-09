

// Linear Search Algorithm in Array

#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for(int index = 0; index <= size - 1; index++) {
        if(arr[index] == target) {        // If the target is found, return the index
            return index;
        }
    }
    return -1;         // If the target is not found, return -1
}

int main() {

    int arr[] = { 4 , 2 , 7, 8, 1, 2, 5 };
    int size = 7;
    int target = 8;

    cout << linearSearch(arr, size, target) << endl;  




    int arr[] = { 4 , 2 , 7, 8, 1, 2, 5 };
    int size = 7;
    int target = 5;

    cout << linearSearch(arr, size, target) << endl;  




    int arr[] = { 4 , 2 , 7, 8, 1, 2, 5 };
    int size = 7;
    int target = 50;

    cout << linearSearch(arr, size, target) << endl;  
     

    return 0;
}












// Reverse an Array

#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {

    int arr[] = { 4 , 2 , 7, 8, 1, 2, 5 };
    int size = 7;

    reverseArray(arr, size);

    for(int index = 0; index <= size - 1; index++) {
        cout << arr[index] << " ";
    }
    cout << endl;



    return 0;
}
