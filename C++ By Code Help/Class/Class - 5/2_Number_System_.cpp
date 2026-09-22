
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

Decimal to Binary Conversion - 
Division Method
1. Divide number by 2.
2. Store reminder. (That will be a bit in binary number)
3. Repeat above steps with the Quotient until quotient is less than 2.
4. Reverse the bits so obtained.

Eg :- N = 10 In Binary Is (1010)₂
 10/2 = 5 -> 5/2 = 2 -> 2/2 = 1
 Remainder = 0101


*/


#include <iostream>
using namespace std;

int decimalToBinaryMethod1(int n){
    // Division Method.
    while(n > 0){
        int bit = n % 2;
        cout << bit << endl;
        n = n / 2;
    }
    return 0;
}

int main(){
    int n;

    cout << "Enter your number: " ;
    cin >> n ;

    int binary = decimalToBinaryMethod1(n) ;

    return 0;
}





