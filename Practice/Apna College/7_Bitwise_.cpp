/*
---------------------------------------------------------------------------------------------------------------------
-------------------------------------- Check Power of 2 Without Loop ------------------------------------------------
---------------------------------------------------------------------------------------------------------------------

Write a program to check whether a given integer n is a power of 2 or not without using any loop.

Input: n = 16
Output: Power of 2

Input: n = 10
Output: Not a Power of 2

*/


#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n > 0 && (n & (n - 1)) == 0) {
        cout << "Power of 2";
    }
    else {
        cout << "Not a Power of 2";
    }

    return 0;
}











/*
----------------------------------------------------------------------------------------------------------------------
-------------------------------------------- Reverse an Integer ------------------------------------------------------
----------------------------------------------------------------------------------------------------------------------

Write a Function (WAF) to reverse a given integer n and return the reversed number.

Input: n = 1234
Output: 4321

Input: n = 567
Output: 765

*/

// ! With Function

#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int reverse = 0;

    while (n != 0) {
        int digit = n % 10;

        reverse = reverse * 10 + digit;

        n = n / 10;
    }

    return reverse;
}

int main() {
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    cout << "Reversed Number: " << reverseNumber(n);

    return 0;
}





// ! Without Function

#include <iostream>
using namespace std;

int main() {
    int n, reverse = 0;

    cout << "Enter an integer: ";
    cin >> n;

    while (n != 0) {
        int digit = n % 10;

        reverse = reverse * 10 + digit;

        n = n / 10;
    }

    cout << "Reversed Number: " << reverse;

    return 0;
}


