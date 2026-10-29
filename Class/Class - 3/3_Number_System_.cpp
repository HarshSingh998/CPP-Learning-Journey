
// Number System - Method to represent numeric values or quantities using different digits or symbols.

/*

Decimal Number System -
1.  The decimal number system has base 10.
2.  It uses digits from 0 to 9.
3.  Base:- it is the number of symbols (digits) a number system uses.



Binary Number System - 
1.  Number system using base 2.
2.  It uses only two digits i.e., 0 and 1.




// ==========================================
// DECIMAL & BINARY COUNTING (0 to 25)
// ==========================================


 Decimal    Binary
   0          0
   1          1
   2          10
   3          11
   4          100
   5          101
   6          110
   7          111
   8          1000
   9          1001
  10          1010
  11          1011
  12          1100
  13          1101
  14          1110
  15          1111
  16          10000
  17          10001
  18          10010
  19          10011
  20          10100
  21          10101
  22          10110
  23          10111
  24          11000
  25          11001

*/







/*

Decimal to Binary Conversion - Division Method

1. Divide number by 2.
2. Store reminder. (That will be a bit in binary number)
3. Repeat above steps with the Quotient until quotient is less than 2.
4. Reverse the bits so obtained.

Eg :- N = 10 In Binary Is (1010)₂
     10/2 = 5 -> 5/2 = 2 -> 2/2 = 1
     Remainder = 0101

*/

#include <iostream>
#include <math.h>
using namespace std;

int decimalToBinaryMethod1(int n){
    // Division Method.
    int binaryno = 0;
    int i = 0;

    while(n > 0){
        int bit = n % 2;
        binaryno = bit * pow(10, i++) + binaryno;
        n = n / 2;
    }

    return binaryno;
}

int main(){
    int n;

    cout << "Enter your number: " ;
    cin >> n;

    int binary = decimalToBinaryMethod1(n);

    cout << binary << endl;
}













/*

Decimal to Binary Conversion - Bitwise Method

1. Obtain bit with bitwise AND operation i.e., (N & 1)
2. Right Shift N by 1. (N = N >> 1)
3. Repeat above steps till N > 0.
4. Reverse the bits so obtained.

*/

#include <iostream>
#include <math.h>
using namespace std;

int decimalToBinaryMethod2(int n){
    // Bitwise Method.
    int binaryno = 0;
    int i = 0;

    while(n > 0){
        int bit = (n & 1);
        binaryno = bit * pow(10, i++) + binaryno;
        n = n >> 1;
    }

    return binaryno;
}

int main() {
    int n;

    cout << "Enter your number: " ;
    cin >> n;

    int binary = decimalToBinaryMethod2(n);

    cout << binary << endl;
}













/*

Binary Conversion to Decimal -

1. Multiple each digit with its place value.
2. Add up all place values.
3. Sum is the Decimal number

Eg - 1010
    = 0×2⁰ + 1×2¹ + 0×2² + 1×2³
    = 0 + 2 + 0 + 8
    = 10

*/

#include <iostream>
#include <math.h>
using namespace std;

int binaryToDecimal(int n){
    int decimal = 0;
    int i = 0;

    while(n > 0){
        int bit = n % 10;
        decimal = bit * pow(2, i++) + decimal;
        n = n / 10;
    }

    return decimal;
}

int main(){

    int binaryno;

    cout << "Enter your number: " ;
    cin >> binaryno;

    cout << binaryToDecimal(binaryno) << endl;

}




