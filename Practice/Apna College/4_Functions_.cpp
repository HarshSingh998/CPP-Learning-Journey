
// Minimum Of Two Numbers

#include <iostream>
using namespace std;

int minOfTwo(int a , int b){
    if ( a < b ){
        return a;
    } else {
        return b;
    }
}

int main() {

    cout << "Min = " << minOfTwo(5, 3) << endl;

    return 0;
}










// Calculate The Sum Of Numbers From 1 To N 


#include <iostream>
using namespace std;

int sumN(int n) {
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    return sum;
}

int main() {
    cout << sumN(5) << endl;
    cout << sumN(10) << endl;

    return 0;
}










// Calculate N Factorial

#include <iostream>
using namespace std;

int factorialN(int n) {
    int fact = 1;

    for (int i = 1; i <= n; i++) {
        fact *= i ;
    }

    return fact;
}

int main() {
    cout << factorialN(5) << endl;
    cout << factorialN(4) << endl;

    return 0;
}












// Calculate Sum Of Digit Of A Number

#include <iostream>
using namespace std;

int sumOfDigits( int num ){
    int digitSum = 0;

    while(num >0) {
        int lastDigit = num % 10 ;
        num = num / 10 ;

        digitSum += lastDigit ;
    }
    return digitSum ;
}

int main() {
    
    cout << "Sum = " << sumOfDigits ( 2345 ) << endl;

    return 0;
}











// Calculate Binomial Coefficient ( nCr ) for n & r

#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;

    for (int i = 1; i <= n; i++) {
        fact *= i ;
    }

    return fact;
}

int nCr(int n , int r) {
    int fact_n = factorial ( n );
    int fact_r = factorial ( r );
    int fact_nmr = factorial ( n - r );  
    
    return fact_n / ( fact_r * fact_nmr );
}

int main() {

    int n = 8 , r = 2 ;
    cout << nCr ( n , r ) << endl;

    return 0;
}










// Check If A Number Is Prime Or Not


#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPrime(n)) {
        cout << "Prime Number";
    }
    else {
        cout << "Not a Prime Number";
    }

    return 0;
}










// Print All Prime Numbers From 2 To N



#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

void printPrimes(int n) {
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
}

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    printPrimes(n);

    return 0;
}











// Print Nth Fibonacci Number


#include <iostream>
using namespace std;

int fibonacci(int n) {
    int a = 0, b = 1, c;

    if (n == 1) {
        return a;
    }

    if (n == 2) {
        return b;
    }

    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    cout << fibonacci(n);

    return 0;
}

























