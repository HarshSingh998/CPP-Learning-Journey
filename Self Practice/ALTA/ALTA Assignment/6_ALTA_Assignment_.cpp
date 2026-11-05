
/*
📌 Question: Sum of All Elements in a Matrix

Write a C++ program to read a matrix of R rows and C columns and calculate the sum of all its elements using nested loops.

Example 1:
Input:
1 2 3
4 5 6

Output:
21

Example 2:
Input:
10 20
30 40

Output:
100

*/


#include <iostream>
using namespace std;

int main() {

    int r, c;
    cout << "Enter Rows : " ;
    cin >> r ;
    cout << "Enter Columns : ";
    cin >> c;

    int arr[100][100];
    int sum = 0;

    cout << "Enter Matrix Elements: " << endl;

    // Input Matrix
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }

    // Calculate Sum
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            sum += arr[i][j];
        }
    }

    cout << "Sum of All Elements: " << sum;

    return 0;
}













/*
📌 Question: Find the Largest Element in a Matrix

Write a C++ program to read a matrix of R rows and C columns and find the largest element present in the matrix.

Example 1:
Input:
1 5 3
4 9 6

Output:
9

Example 2:
Input:
-10 -5
-20 -3

Output:
-3

*/


#include <iostream>
using namespace std;

int main() {

    int r, c;
    cout << "Enter Rows : " ;
    cin >> r ;
    cout << "Enter Columns : ";
    cin >> c;

    int arr[100][100];
    int largest = -1000000000;

    cout << "Enter Matrix Elements: ";

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> arr[i][j];

            if(arr[i][j] > largest) {
                largest = arr[i][j];
            }
        }
    }

    cout << "Largest Element: " << largest;

    return 0;
}













/*
📌 Question: Check if an Array is a Palindrome

Write a C++ program to read N integers and check whether the given array is a palindrome. An array is a palindrome if it reads the same from left to right and from right to left.

Example 1:
Input:
1 2 3 2 1

Output:
true

Example 2:
Input:
1 2 3 4

Output:
false

*/


#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter Size: ";
    cin >> n;

    int arr[100000];

    cout << "Enter Array Elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool isPalindrome = true;

    for(int i = 0; i < n / 2; i++) {
        if(arr[i] != arr[n - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    cout << boolalpha << isPalindrome;

    return 0;
}













/*
📌 Question: Find the Maximum Element

Write a C++ program to read N integers and find the maximum element present in the array.

Example 1:
Input:
10 25 7 40 15

Output:
40

Example 2:
Input:
-10 -5 -20 -3

Output:
-3

*/


#include <iostream>
#include <climits>
using namespace std;

int main() {

    int n;
    cout << "Enter Size: ";
    cin >> n;

    int arr[100000];
    int largest = INT_MIN;

    cout << "Enter Array Elements: ";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];

        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "Maximum Element: " << largest;

    return 0;
}



/*

INT_MIN → Minimum value of int.
INT_MAX → Maximum value of int.

Header file: #include <climits>

Typical 32-bit int range :-
INT_MIN = -2147483648
INT_MAX = 2147483647


Example :-

#include <climits>

int largest = INT_MIN;
int smallest = INT_MAX;


Uses :-
INT_MIN → Initialize maximum-finding variables.
INT_MAX → Initialize minimum-finding variables.

* Note: These are constants, not functions.

*/
















/*
📌 Question: Count of Pairs with Sum = K

Write a C++ program to read N integers and an integer K, and count the number of pairs of elements whose sum is exactly K. Each pair must use two different positions in the array.

Example 1:
Input:
1 5 7 -1 5

Output:
3

Example 2:
Input:
2 8 3 7

Output:
2

*/



#include <iostream>
using namespace std;

int main() {

    int n, k;
    cout << "Enter Size and K: ";
    cin >> n >> k;

    int arr[100000];
    long long count = 0;

    cout << "Enter Array Elements: ";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {

            if(arr[i] + arr[j] == k) {
                count++;
            }

        }
    }

    cout << "Count of Pairs: " << count;

    return 0;
}














/*
📌 Question: Find Element with Odd Frequency

Write a C++ program to read N integers and find the element that occurs an odd number of times. It is guaranteed that exactly one element occurs an odd number of times, while every other element occurs an even number of times.

Example 1:
Input:
1 2 3 2 1

Output:
3

Example 2:
Input:
4 5 4 5 4 5 4

Output:
5

*/


#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter Size: ";
    cin >> n;

    int arr[100000];

    cout << "Enter Array Elements: ";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = 0;

    for(int i = 0; i < n; i++) {
        result = result ^ arr[i];
    }

    cout << "Odd Frequency Element: " << result;

    return 0;
}



