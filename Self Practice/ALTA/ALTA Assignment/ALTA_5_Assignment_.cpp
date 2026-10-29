
/*
📌 Question: Find the Maximum Element

Write a C++ program to read an integer N and N integers into an array, then find and print the maximum element in the array.

Example 1:
Input: 5
10 25 7 40 15

Calculation: The maximum element is 40.
Output: 40

Example 2:
Input: 4
-10 -5 -20 -2

Calculation: The maximum element is -2.
Output: -2

*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maximum = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maximum) {
            maximum = arr[i];
        }
    }

    cout << "Maximum Element = " << maximum;

    return 0;
}














/*
📌 Question: Count Even and Odd Elements

Write a C++ program to read an integer N and N integers into an array, then count how many elements are even and how many are odd.

An element is even if it is divisible by 2; otherwise, it is odd.

Example 1:
Input: 5
10 15 20 7 8

Calculation:
Even elements: 10, 20, 8
Odd elements: 15, 7

Output: 3 2

Example 2:
Input: 4
1 2 3 4

Output: 2 2

*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int even = 0;
    int odd = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    cout << even << " " << odd;

    return 0;
}














/*
📌 Question: Reverse an Array

Write a C++ program to read an integer N and N integers into an array, then print the elements of the array in reverse order.

Example 1:
Input: 5
10 20 30 40 50

Calculation: Print the array elements from last to first.

Output: 50 40 30 20 10

Example 2:
Input: 4
1 2 3 4

Output: 4 3 2 1

*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}


