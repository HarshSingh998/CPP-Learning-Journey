
/*

What is the value of 5!?

A) 20
B) 60
C) 120
D) 150


* Ans Is C ( 120 )

Factorial of 5:- 
5! = 5 x 4 x 3 x 2 x 1 = 120


*/








/*

Which formula is used to calculate nCr (Combination)?

A) n! / (r! + (n-r)!)
B) n! / (r! × (n-r)!)
C) n! / (n-r)!
D) (n-r)! / (n! × r!)


* Ans Is B [ nCr = n! / (r! × (n-r)!) ]


*/









/*

Which of the following is a pre-defined mathematical function in C?

A) factorial()
B) armstrong()
C) sqrt()
D) calculate()


* Ans Is C ( sqrt )

sqrt() is a pre-defined mathematical function available in the C language through the math.h header file.


*/









/*

Question: How many trailing zeros are present in 10!?

A) 1
B) 2
C) 3
D) 4


* Ans Is B ( 2 )

10! = 10 x 9 x 8 x 7 x 6 x 5 x 4 x 3 x 2 x 1 => 3628800

( Trailing zeros are the zeros present at the end of a number ) Here, there are 2 zeros at the end.
A trailing zero is formed by multiplying 2 x 5 = 10. 
Count factors of 5 because factors of 2 are always more in factorials.
Apply The Formula => 10 / 5 = 2
Therefore, 10! has 2 trailing zeros.


*/

#include <iostream>
using namespace std;

int main() {

    int N = 10;
    int count = 0;

    while (N >= 5) {
        N = N / 5;
        count += N;
    }

    cout << "Trailing Zeros: " << count;

    return 0;
}













/*
📌 Question: Factorial of N

Write a C++ program to calculate the factorial of a non-negative integer N using a user-defined function named factorial().

The factorial of N is defined as:
N! = N × (N-1) × (N-2) × ... × 1

! Note: 0! = 1

Example 1:
Input:
5

Output:
120


Example 2:
Input:
0

Output:
1

Example 3:
Input:
4

Output:
24

*/

#include <iostream>
using namespace std;

long long factorial(int N) {

    long long fact = 1;

    for (int i = 1; i <= N; i++) {
        fact = fact * i;
    }

    return fact;
}

int main() {

    int N;

    cout << "Enter N: ";
    cin >> N;

    cout << "Factorial: " << factorial(N);

    return 0;
}













/*
📌 Question: Calculate nCr (Combination)

Write a C++ program to calculate the value of N choose R (nCr) using a user-defined function named factorial().

The formula for nCr is:

nCr = N! / (R! * (N-R)!)

Example 1:
Input:
5 2

Output:
10


Example 2:
Input:
6 3

Output:
20

Example 3:
Input:
4 0

Output:
1

Constraints:
0 <= R <= N <= 20

! Note: 0! = 1

*/

#include <iostream>
using namespace std;

// User-defined function to calculate factorial
long long factorial(int n) {

    long long fact = 1;

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

// Function to calculate nCr
long long nCr(int n, int r) {

    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {

    int N, R;

    cout << "Enter N and R: ";
    cin >> N >> R;

    cout << "nCr: " << nCr(N, R);

    return 0;
}















/*
📌 Question: Armstrong Number

Write a C++ program to check whether a given non-negative integer N is an Armstrong number using a user-defined function named isArmstrong().

An Armstrong number is a number in which the sum of each digit raised to the power of the total number of digits is equal to the original number.

Example 1:
Input:
153

Output:
Armstrong


Example 2:
Input:
123

Output:
Not Armstrong


Example 3:
Input:
7

Output:
Armstrong

Constraints:
0 <= N <= 10^9

! Note: A single-digit number is considered an Armstrong number.

*/

#include <bits/stdc++.h>
using namespace std;

// User-defined function
bool isArmstrong(int N) {

    int original = N;
    int digits = 0;
    int sum = 0;

    // Count total digits
    int temp = N;

    do {
        digits++;
        temp = temp / 10;
    } while (temp > 0);

    // Calculate Armstrong sum
    temp = N;

    do {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp = temp / 10;
    } while (temp > 0);

    return sum == original;
}

int main() {

    int N;

    cout << "Enter a number: ";
    cin >> N;

    if (isArmstrong(N)) {
        cout << "Armstrong";
    }
    else {
        cout << "Not Armstrong";
    }

    return 0;
}



/*
I Not Use These ->

<iostream> – Input and output (cin, cout).
<cmath> – Mathematical functions (pow()).

*/