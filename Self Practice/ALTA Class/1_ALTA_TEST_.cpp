
/*

1. Prime or Not Prime

Given an integer n, print "Prime" if it is a prime number;
otherwise, print "Not Prime".

Input:
A single integer n.

Output:
Prime or Not Prime.

*/


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) {
        cout << "Not Prime";
    } else {
        bool isPrime = true;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << "Prime";
        } else {
            cout << "Not Prime";
        }
    }

    return 0;
}















/*

2. Even or Odd

Given an integer n, print "Even" if it is even;
otherwise, print "Odd".

Input:
A single integer n.

Output:
Even or Odd.

*/



#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "Even";
    } else {
        cout << "Odd";
    }

    return 0;
}















/*

3. Reverse a Number

Given an integer n, reverse its digits and print the result.

Input:
A single integer n.

Output:
The reversed number.

*/



#include <iostream>
using namespace std;

int main() {
    int n, reverse = 0;

    cout << "Enter a number: ";
    cin >> n;

    while (n != 0) {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    cout << "Reverse = " << reverse;

    return 0;
}
















/*

4. Switch Case Using Characters

Given an uppercase character from A to E, print:
A -> Apple
B -> Ball
C -> Cat
D -> Dog
E -> Elephant

For any other character, print "Invalid character".

Input:
A single character.

Output:
The corresponding word or "Invalid character".

*/



#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character (A-E): ";
    cin >> ch;

    switch (ch) {
        case 'A':
            cout << "Apple";
            break;

        case 'B':
            cout << "Ball";
            break;

        case 'C':
            cout << "Cat";
            break;

        case 'D':
            cout << "Dog";
            break;

        case 'E':
            cout << "Elephant";
            break;

        default:
            cout << "Invalid character";
    }

    return 0;
}
















/*

5. Find Maximum Element in an Array

Given an array of n integers, find and print the maximum element.

Input:
The first line contains an integer n.
The second line contains n integers.

Output:
The maximum element.

*/



#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[100];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxElement = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    cout << "Maximum element = " << maxElement;

    return 0;
}
















/*

6. Check Whether One Number or Their Sum Is 10

Given two integers a and b, print "YES" if a is 10,
b is 10, or a + b is 10. Otherwise, print "NO".

Input:
Two integers a and b.

Output:
YES or NO.

*/



#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a == 10 || b == 10 || a + b == 10) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}

