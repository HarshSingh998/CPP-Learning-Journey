
// Class - 7 



// Question : Write a C++ program to find the sum of all array elements.

#include <iostream>
using namespace std;

int main() {

    int arr[] = {10, 20, 30, 40, 50};
    int sum = 0;
    for(int index = 0; index <= 4; index++) {
        sum = sum + arr[index];
    }
    cout << "Sum of Array Elements : " << sum << endl;
    

    return 0;
}


