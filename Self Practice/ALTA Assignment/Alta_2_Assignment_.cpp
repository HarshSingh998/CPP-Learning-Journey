/*

📌 Question: Sum of Digits
Write a C++ program to read a positive integer n and calculate and print the sum of all its digits using a loop and integer arithmetic.
Example:
Input: 5832
Calculation: 5 + 8 + 3 + 2 = 18
Output: 18

*/

#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int sum = 0;

    while (n > 0) {
        sum += n % 10;  // Extract last digit
        n /= 10;        // Remove last digit
    }

    cout << sum;

    return 0;
}












/*

📌 Question: Check Prime Number
Write a C++ program to read an integer n and determine whether it is a prime number.
A prime number is a number greater than 1 that has exactly two positive divisors: 1 and itself.
Print:
- Prime if the number is prime.
- Not Prime if the number is not prime.
Use a loop to check whether n has any divisor other than 1 and itself. For an efficient solution, check divisors only up to sqrt(n).
Example:
Input: 17
Output: Prime

*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Your Number :- " ;
    cin >> n;

    bool isPrime = true;

    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << "Prime" << endl;
    else
        cout << "Not Prime" << endl;

    return 0;
}














/*

📌 Question: Reverse a Number
Write a C++ program to read a positive integer n and print its digits in reverse order.
Use a loop, modulus (%), and integer division (/) to extract the digits and construct the reversed number.
Example:
Input: 12345
Output: 54321

*/

#include <iostream>
using namespace std;

int main() {
    long long n;
    cout << "Enter Number :- ";
    cin >> n;

    long long reverse = 0;

    while (n > 0) {
        int digit = n % 10;                  // Extract last digit
        reverse = reverse * 10 + digit;
        n /= 10;                             // Remove last digit
    }

    cout << reverse << endl;

    return 0;
}













/*

📌 Question: Calculate Total, Average and Grade
Write a C++ program to read the marks of three subjects — Maths, Physics, and Chemistry — and calculate the total marks, average marks, and grade according to the given grading rules.
Average Marks	Grade
90 or above	A
75 to 89	B
60 to 74	C
40 to 59	D
Below 40	F


The average should be printed with 2 decimal places.
Example:
Input: 85 78 92
Total: 255
Average: 85.00
Grade: B

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int maths, physics, chemistry;
    cout << "Enter Your Number In Maths , Physics , Chemistry Respectively :- " ;
    cin >> maths >> physics >> chemistry;

    int total = maths + physics + chemistry;
    double average = total / 3.0;

    char grade;

    if (average >= 90)
        grade = 'A';
    else if (average >= 75)
        grade = 'B';
    else if (average >= 60)
        grade = 'C';
    else if (average >= 40)
        grade = 'D';
    else
        grade = 'F';

    cout << "Total: " << total << endl;
    cout << fixed << setprecision(2);
    cout << "Average: " << average << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}

















/*

📌 Question: Lottery Number Checker
Write a C++ program to read a lottery number and a user's guessed number. If the guessed number is exactly equal to the lottery number, print Winner; otherwise, print Try Again.
Example:
Input: 5832 5832
Output: Winner

*/

#include <iostream>
using namespace std;

int main() {
    int lotteryNumber, guess;
    cout << "Enter Your Lottery & Guess Number :- ";
    cin >> lotteryNumber >> guess;

    if (lotteryNumber == guess)
        cout << "Winner" << endl;
    else
        cout << "Try Again" << endl;

    return 0;
}












/*

📌 Question: Find Largest of Three Numbers Using Ternary Operator
Write a C++ program to read three integers a, b, and c and find the largest number using the ternary operator (?:).
You must use the ternary operator instead of if-else statements.
Example:
Input: 10 25 15
Output: 25

*/

#include <iostream>
using namespace std;

int main() {
    long long a, b, c;
    cout << "Enter Your First Number :- " ;
    cin >> a;
    cout << "Enter Your Second Number :- " ;
    cin >> b;
    cout << "Enter Your Third Number :- " ;
    cin >> c;

    long long largest = (a > b) ? ((a > c) ? a : c)
                                : ((b > c) ? b : c);

    cout << "Largest Number Is - " << largest << endl;

    return 0;
}



// What Is Concept Of This Question - 

/*
====================================================
        NESTED TERNARY OPERATOR
====================================================

📌 Concept:
Nested Ternary Operator means using one ternary
operator inside another ternary operator.

----------------------------------------------------
📌 Basic Ternary Operator:
----------------------------------------------------

Syntax:

condition ? value_if_true : value_if_false;

Example:

int largest = (a > b) ? a : b;

Meaning:
If a > b is true → largest = a
Otherwise        → largest = b

----------------------------------------------------
📌 Nested Ternary Operator:
----------------------------------------------------

Syntax:

condition1 ? (condition2 ? value1 : value2)
           : (condition3 ? value3 : value4);

----------------------------------------------------
📌 Example: Find Largest of 3 Numbers
----------------------------------------------------

long long largest = (a > b) ? ((a > c) ? a : c)
                            : ((b > c) ? b : c);

----------------------------------------------------
📌 How it works:
----------------------------------------------------

First check:

a > b

If TRUE:
    Compare a and c
    If a > c → largest = a
    Otherwise → largest = c

If FALSE:
    Compare b and c
    If b > c → largest = b
    Otherwise → largest = c

----------------------------------------------------
📌 Important:
----------------------------------------------------

?  → checks the condition
:  → separates TRUE and FALSE results

Ternary Operator:
condition ? true : false

Nested Ternary:
Ternary operator inside another ternary operator.

----------------------------------------------------
📌 Key Point:
----------------------------------------------------

Nested Ternary Operator can be used instead of
multiple if-else statements for simple conditions.

====================================================
*/





