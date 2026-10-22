


/*
📌 Question: Print Numbers Not Divisible by 3

Write a C++ program to read a positive integer N and print all numbers from 1 to N that are not divisible by 3 using a while loop and a conditional statement.

Example 1:
Input: 10
Calculation: Skip 3, 6, and 9 because they are divisible by 3.
Output: 1 2 4 5 7 8 10

Example 2:
Input: 6
Output: 1 2 4 5
*/

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int i = 1;

    while (i <= N) {
        if (i % 3 != 0) {
            cout << i << " ";
        }

        i++;
    }

    return 0;
}














/*
📌 Question: Sum of Digits of a Given Number Using a Loop

Write a C++ program to read a positive integer N and calculate and print the sum of all its digits using a while loop, the % operator, and integer division.

Example 1:
Input: 58321
Calculation: 5 + 8 + 3 + 2 + 1 = 19
Output: 19

Example 2:
Input: 1234
Calculation: 1 + 2 + 3 + 4 = 10
Output: 10
*/

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int sum = 0;

    while (N > 0) {
        int digit = N % 10;
        sum = sum + digit;
        N = N / 10;
    }

    cout << sum << endl;

    return 0;
}


















/*
📌 Question: Reverse a Number Using a While Loop

Write a C++ program to read a positive integer N and reverse its digits using a while loop, the % operator, and integer division.

Example 1:
Input: 12345
Calculation: 5 → 54 → 543 → 5432 → 54321
Output: 54321

Example 2:
Input: 120
Calculation: 0 → 2 → 21
Output: 21
*/


#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int reverse = 0;

    while (N > 0) {
        int digit = N % 10;
        reverse = reverse * 10 + digit;
        N = N / 10;
    }

    cout << reverse << endl;

    return 0;
}




















/*
📌 Question: Solid Square Pattern

Write a C++ program to read an integer N and print a solid square pattern containing N rows and N columns of stars (*) using nested loops.

Example 1:
Input: 4

Output:
* * * *
* * * *
* * * *
* * * *

Example 2:
Input: 3

Output:
* * *
* * *
* * *
*/


#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (j > 1) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
















/*

📌 Question: Right-Angled Star Triangle

Write a C++ program to read an integer N and print a right-angled triangle pattern using stars (*) and nested loops.

The first row should contain 1 star, the second row 2 stars, and so on until the N-th row contains N stars. Print a single space between each star.

Example 1:
Input: 4

Output:
*
* *
* * *
* * * *

Example 2:
Input: 3

Output:
*
* *
* * *

*/


#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            if (j > 1) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
















/*
📌 Question: Inverted Star Triangle

Write a C++ program to read an integer N and print an inverted right-angled triangle pattern using stars (*) and nested loops.

The first row should contain N stars. Each subsequent row should contain one fewer star than the previous row. Print a single space between each star.

Example 1:
Input: 4

Output:
* * * *
* * *
* *
*

Example 2:
Input: 3

Output:
* * *
* *
*

*/


#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = N; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            if (j > 1) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}


















/*
==================================================
QUESTION 04: SOLID SQUARE STAR PATTERN
==================================================

CONCEPTS USED:
1. Nested Loops
2. Outer Loop (Rows)
3. Inner Loop (Columns)
4. Increment Operator (++)
5. Pattern Printing

LOGIC:
1. Take N as input.
2. Run the outer loop N times to create N rows.
3. For every row, run the inner loop N times.
4. Print one star (*) in each inner-loop iteration.
5. After printing N stars, move to the next line.

DEEP EXPLANATION:
- The outer loop controls the number of rows.
- The inner loop controls the number of stars in each row.
- Both loops run N times.
- Every row contains the same number of stars.
- The inner loop completes before the outer loop moves
  to the next row.

EXAMPLE (N = 3):

* * *
* * *
* * *

TOTAL STARS:
N * N

For N = 3:
3 * 3 = 9 stars


==================================================
QUESTION 05: RIGHT-ANGLED STAR TRIANGLE
==================================================

CONCEPTS USED:
1. Nested Loops
2. Outer Loop (Rows)
3. Inner Loop (Columns)
4. Loop Dependency
5. Increment Operator (++)
6. Pattern Printing

LOGIC:
1. Take N as input.
2. Start the outer loop from 1 and run it up to N.
3. For every row i, run the inner loop from 1 to i.
4. Print one star (*) in each inner-loop iteration.
5. Move to the next line after completing each row.

DEEP EXPLANATION:
- The outer loop variable i represents the current row.
- The inner loop depends on the value of i.
- In row 1, print 1 star.
- In row 2, print 2 stars.
- In row 3, print 3 stars.
- The number of stars increases by one in each row.
- This happens because the inner loop runs from 1 to i.

EXAMPLE (N = 4):

*
* *
* * *
* * * *

TOTAL STARS:
N * (N + 1) / 2

For N = 4:
4 * 5 / 2 = 10 stars


==================================================
QUESTION 06: INVERTED STAR TRIANGLE
==================================================

CONCEPTS USED:
1. Nested Loops
2. Outer Loop (Rows)
3. Inner Loop (Columns)
4. Decrement Operator (--)
5. Decreasing Loop
6. Pattern Printing

LOGIC:
1. Take N as input.
2. Start the outer loop from N and decrease it to 1.
3. For every value of i, run the inner loop from 1 to i.
4. Print one star (*) in each inner-loop iteration.
5. Move to the next line after completing each row.

DEEP EXPLANATION:
- The outer loop starts from N instead of 1.
- The decrement operator (--) decreases i after each row.
- The inner loop prints i stars in the current row.
- For N = 4, the first row contains 4 stars.
- The next rows contain 3, 2, and 1 stars.
- Therefore, the number of stars decreases by one per row.

EXAMPLE (N = 4):

* * * *
* * *
* *
*

TOTAL STARS:
N * (N + 1) / 2

For N = 4:
4 * 5 / 2 = 10 stars


==================================================
IMPORTANT NOTES: NESTED LOOPS
==================================================

1. OUTER LOOP:
   Controls how many rows are printed.

2. INNER LOOP:
   Controls how many stars are printed in each row.

3. INCREMENT (++):
   Increases a variable by 1.

4. DECREMENT (--):
   Decreases a variable by 1.

5. NEW LINE:
   Moves the cursor to the next row after the inner
   loop finishes.

6. NESTED LOOP:
   A loop written inside another loop.

REMEMBER:
The outer loop controls ROWS.
The inner loop controls COLUMNS or STARS.
*/



