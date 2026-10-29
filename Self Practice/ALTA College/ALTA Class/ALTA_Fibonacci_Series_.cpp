/*
============================================================
                    FIBONACCI SERIES
============================================================

TOPIC: Fibonacci Number at a Given Index

Definition:
The Fibonacci sequence is a series in which each number is
the sum of the previous two numbers.

Example Sequence:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...

Formula:
F(n) = F(n - 1) + F(n - 2)

Index:
F(0) = 0
F(1) = 1
F(2) = 1
F(3) = 2
F(4) = 3





============================================================
QUESTION 1: FIND THE FIBONACCI NUMBER AT A GIVEN INDEX
============================================================

Problem:
Take an integer n as input and print the Fibonacci number
at index n.

Example:
Input: n = 6
Task: Find the Fibonacci number at index 6.

Solution:
*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter A Index: ";
    cin >> n;

    int a = 0, b = 1, c = 0;

    if (n == 0) {
        cout << a << endl;
    }

    else if (n == 1) {
        cout << b << endl;
    }

    else if (n >= 2) {
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }

        cout << c << endl;
    }

    return 0;
}







/*
============================================================
QUESTION 2: PRINT THE FIBONACCI SERIES
============================================================

Problem:
Take n as input and print the first n Fibonacci numbers.

Example:
Input: n = 7
Task: Print the first 7 Fibonacci numbers.

Solution:
*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter The Number Of Terms: ";
    cin >> n;

    int a = 0, b = 1;

    for (int i = 0; i < n; i++) {
        cout << a << " ";

        int c = a + b;
        a = b;
        b = c;
    }

    cout << endl;

    return 0;
}







/*
============================================================
QUESTION 3: FIND THE NTH FIBONACCI NUMBER USING A FUNCTION
============================================================

Problem:
Create a function that returns the Fibonacci number
at the given index n.

Example:
Input: n = 5
Task: Calculate the Fibonacci number at index 5.

Solution:
*/

#include <iostream>
using namespace std;

int fibonacci(int n) {

    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    int a = 0, b = 1, c = 0;

    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    return c;
}

int main() {

    int n;
    cout << "Enter A Fibonacci Index: ";
    cin >> n;

    if (n >= 0) {
        cout << fibonacci(n) << endl;
    }

    return 0;
}








/*
============================================================
QUESTION 4: FIND THE SUM OF THE FIRST N FIBONACCI NUMBERS
============================================================

Problem:
Take n as input and calculate the sum of the first n
Fibonacci numbers, starting from index 0.

Example:
Input: n = 5
Task: Find the sum of the first 5 Fibonacci numbers.

Solution:
*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter The Number Of Terms: ";
    cin >> n;

    int a = 0, b = 1;
    int sum = 0;

    for (int i = 0; i < n; i++) {

        sum = sum + a;

        int c = a + b;
        a = b;
        b = c;
    }

    cout << sum << endl;

    return 0;
}







/*
============================================================
QUICK REVISION
============================================================

1. a = Previous Fibonacci number
2. b = Current Fibonacci number
3. c = Next Fibonacci number
4. c = a + b
5. a = b
6. b = c

WHY DOES THE LOOP START AT i = 2?

Because:
Index 0 = 0
Index 1 = 1

The first two Fibonacci numbers are already stored in a
and b. Therefore, the loop calculates Fibonacci numbers
starting from index 2.

WHY IS THE CONDITION i <= n USED?

Because we want to calculate the Fibonacci number at index n,
including that index.

IMPORTANT:
Each question is a separate C++ program.
Run only one program at a time in VS Code.
============================================================
*/