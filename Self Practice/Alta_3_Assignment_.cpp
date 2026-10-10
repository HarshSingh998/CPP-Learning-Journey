/*
📌 Question 1: Sum of Numbers from 1 to N

Write a C++ program to read a positive integer N and calculate and print the sum of all integers from 1 to N using a loop.

Example:
Input: 5
Calculation: 1 + 2 + 3 + 4 + 5 = 15
Output: 15
*/


#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int sum = 0;

    for (int i = 1; i <= N; i++) {
        sum = sum + i;
    }

    cout << sum << endl;

    return 0;
}
















/*
📌 Question 2: Count the Number of Digits

Write a C++ program to read a positive integer N and count and print the total number of digits using a loop and integer division.

Example:
Input: 58321
Calculation: 58321 → 5832 → 583 → 58 → 5 → 0
Output: 5
*/



#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int count = 0;

    while (N > 0) {
        N = N / 10;
        count++;
    }

    cout << count << endl;

    return 0;
}















/*
📌 Question 3: Reverse a Number

Write a C++ program to read a positive integer N and reverse and print its digits using a loop, the % operator, and integer division.

Example:
Input: 12345
Calculation: 5 → 54 → 543 → 5432 → 54321
Output: 54321
*/



#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int rev = 0;

    while (N > 0) {
        int digit = N % 10;
        rev = rev * 10 + digit;
        N = N / 10;
    }

    cout << rev << endl;

    return 0;
}














/*
📌 Question: Break & Continue

Write a C++ program to read an integer N and print numbers from 1 to N using a loop with the following rules:
- If a number is divisible by 3, skip it using continue.
- If a number is greater than 20, stop the loop using break.
- Print all other numbers separated by spaces.

Example:
Input: 10
Calculation: Skip 3, 6, 9 because they are divisible by 3.
Output: 1 2 4 5 7 8 10
*/


#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        if (i > 20) {
            break;
        }

        if (i % 3 == 0) {
            continue;
        }

        cout << i << " ";
    }

    return 0;
}
















/*
📌 Question: Prime Number

Write a C++ program to read a positive integer N and determine whether it is a prime number using a loop.

A prime number is a number greater than 1 that has exactly two positive divisors: 1 and itself.

Print "Prime" if N is prime; otherwise, print "Not Prime".

Example 1:
Input: 7
Output: Prime

Example 2:
Input: 10
Output: Not Prime
*/


#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    bool isPrime = true;

    for (int i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << "Prime";
    } else {
        cout << "Not Prime";
    }

    return 0;
}
















/*
📌 Question: GCD (Greatest Common Divisor)

Write a C++ program to read two positive integers A and B and find their Greatest Common Divisor (GCD) using the Euclidean algorithm, a while loop, and the remainder operator (%).

The GCD is the largest positive integer that divides both numbers without leaving a remainder.

Example 1:
Input: 12 18
Calculation: GCD(12, 18) = 6
Output: 6

Example 2:
Input: 20 15
Calculation: GCD(20, 15) = 5
Output: 5
*/



#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    while (B != 0) {
        int remainder = A % B;
        A = B;
        B = remainder;
    }

    cout << A << endl;

    return 0;
}















/*
📌 Question: Binary to Decimal

Write a C++ program to read a binary number N containing only 0s and 1s and convert it into its equivalent decimal number using a loop and place-value calculation.

Example 1:
Input: 1011
Calculation: (1 × 1) + (1 × 2) + (0 × 4) + (1 × 8) = 11
Output: 11

Example 2:
Input: 1101
Calculation: (1 × 1) + (0 × 2) + (1 × 4) + (1 × 8) = 13
Output: 13
*/


#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    int decimal = 0;
    int place = 1;

    while (N > 0) {
        int digit = N % 10;
        decimal = decimal + digit * place;
        place = place * 2;
        N = N / 10;
    }

    cout << decimal << endl;

    return 0;
}















/*
📌 Question: Decimal to Binary

Write a C++ program to read a positive decimal integer N and convert it into its equivalent binary representation using a loop, the % operator, and integer division.

Example 1:
Input: 10
Calculation:
10 % 2 = 0
5 % 2 = 1
2 % 2 = 0
1 % 2 = 1

Read the remainders in reverse order: 1010
Output: 1010

Example 2:
Input: 7
Calculation: 7 → 111
Output: 111
*/

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long binary = 0;
    int place = 1;

    while (N > 0) {
        int remainder = N % 2;
        binary = binary + remainder * place;
        place = place * 10;
        N = N / 2;
    }

    cout << binary << endl;

    return 0;
}



