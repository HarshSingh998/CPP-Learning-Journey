
// Operator Divide into 2 parts -> Unary & Binary
// Unary jisme 1 hi operant lagta h ( -5 )
// Binary me 2 operant lagta h ( 5 - 5 ) ( 9 * 2 )


// Unary Operators ->> ( ++ ) & ( -- )

// (++a)  ->>  Pre-increment ( pehle value ko increment karta hai aur fir use karta hai )
// (a++)  ->>  Post-increment ( pehle value ko use karta hai aur fir increment karta hai )
// (--a)  ->>  Pre-decrement ( pehle value ko decrement karta hai aur fir use karta hai )
// (a--)  ->>  Post-decrement ( pehle value ko use karta hai aur fir decrement karta hai )







// Arithmetic Operators ->> ( + ) , ( - ) , ( * ) , ( / ) , ( % )

#include <iostream>
using namespace std;

int main() {

    int a = 10;
    int b = 5;

    cout << (a+b) << endl; // 15
    cout << (a-b) << endl; // 5
    cout << (a*b) << endl; // 50
    cout << (a/b) << endl; // 2
    cout << (a%b) << endl; // 0


    cout << (5/2) << endl; 
// Iska output 2 aaya balki 2.5 ana chahiye tha, kyuki 5 aur 2 dono hi integer hai aur integer division me decimal part ko ignore kar diya jata hai.
// Same agr hm float or double ko jb integer ke sath divide karenge to decimal part ko consider kiya jayega.

    cout << (5.0/2) << endl; // 2.5
    cout << (5*1.0/2) << endl; // 2.5


    return 0;
}








// Relational Operators ->> ( == ) , ( != ) , ( > ) , ( < ) , ( >= ) , ( <= )

#include <iostream>
using namespace std;

int main() {

    int a = 10;
    int b = 5;

    cout << (10 > 5) << endl;
    cout << (10 < 5) << endl;
    cout << (10 >= 5) << endl;
    cout << (10 <= 5) << endl;
    cout << (10 == 5) << endl;
    cout << (10 != 5) << endl;




    return 0;
}








// Logical Operartors ->> ( && ) , ( || ) , ( ! )  ->> logical operators are used to combine or modify multiple conditions.

// ( && ) And Operators  ->>> If All Conditions Are True = True But If Anyone Is False = False

#include <iostream>
using namespace std;

int main() {

    bool cond1 = true;
    bool cond2 = true;
    bool cond3 = false;

    if(cond1 && cond2 && cond3) {
        cout << "All Conditions Are True" << endl;
    }
    else{
        cout << "All Conditons Are Not True" << endl;
    }

    return 0;
}



//  ( || ) OR Operators  ->>> If ALL Conditions Are False = False But If any Condition Are True = True

// ( ! ) Not Operators  ->> If Condition Is True It Convert Into False And Vise-Versa. 

#include <iostream>
using namespace std;

int main() {

    bool cond1 = true;
    cout << !cond1 << endl;

    bool cond2 = false;
    cout << !cond2 << endl;
   

    return 0;
}









// Assignment Operators  ->> ( = ) , ( += ) , ( -= ) , ( *= ) , ( /= ) , ( %= )

// ( a = a + b ) We Can Write Also ( a += b )
// ( a = a - b ) We Can Write Also ( a -= b )
// ( a = a * b ) We Can Write Also ( a *= b )
// ( a = a / b ) We Can Write Also ( a /= b )
// ( a = a % b ) We Can Write Also ( a %= b )

#include <iostream>
using namespace std;

int main() {

    int arr = 5;
    cout << arr << endl;


    arr = arr + 10;
    cout << arr << endl;
    arr += 10;
    cout << arr << endl;

    arr = arr - 10;
    cout << arr << endl;
    arr -= 10;
    cout << arr << endl;

    arr = arr * 10;
    cout << arr << endl;
    arr *= 10;
    cout << arr << endl;

    arr = arr / 10;
    cout << arr << endl;
    arr /= 10;
    cout << arr << endl;

    arr = arr % 10;
    cout << arr << endl;
    arr %= 10;
    cout << arr << endl;


    return 0;
}





 





// Bitwise Operators  ->> ( & ) , ( | ) , ( ~ ) , ( << ) , ( >> ) , ( ^ )

/*

Bitwise operators in C++ are tools that let you manipulate data at the smallest possible level—individual bits (0s and 1s).
Instead of looking at a number as a whole (like 5 or 12), the computer converts the number into its binary format (like 0101 or 1100) and applies the operation bit by bit, lining them up vertically.

The 6 Bitwise Operators - 
And ( & ) ->> Gives a 1 only if both bits are 1.
Or ( | ) ->> Gives a 1 if at least one bit is 1.
XOR (Exclusive OR) ( ^ ) ->> Gives a 1 if the bits are different.
NOT ( ~ ) ->> Flips the bits (turns 0 to 1 and 1 to 0).
Left Shift ( << ) ->> Pushes bits to the left (adds 0s at the end). { Multiplies by 2 }
Right Shift ( >> ) ->> Pushes bits to the right (drops bits off the end). { Divides by 2 }

*/


#include <iostream>
using namespace std;

int main() {

    cout << ( 5 & 4 ) << endl;
    cout << ( 5 | 4 ) << endl;
    cout << ( ~1 ) << endl;
    cout << ( 5 << 1 ) << endl;
    cout << ( 5 << 2 ) << endl;
    cout << ( 5 << 3 ) << endl;
    cout << ( 50 >> 1 ) << endl;
    cout << ( 50 >> 2 ) << endl;
    cout << ( 50 >> 3 ) << endl;
    cout << ( 5^5 ) << endl;
    cout << ( 5^4 ) << endl;


    return 0;
}












/*
------------------------------------------------------------
                    OPERATOR PRECEDENCE
------------------------------------------------------------

Definition:
Operator precedence determines which operator is evaluated
first in an expression.

Example:
int ans = 5 - 2 * 6;

Calculation:
5 - 2 * 6
5 - 12
-7

------------------------------------------------------------
IMPORTANT OPERATOR PRECEDENCE
------------------------------------------------------------

1.  ()                         -> Parentheses
2.  !, ~, +, -, ++, --         -> Unary Operators              R -> L
3.  *, /, %                    -> Multiplicative               L -> R
4.  +, -                        -> Additive                    L -> R
5.  <<, >>                      -> Bitwise Shift               L -> R
6.  <, <=, >, >=                -> Relational                  L -> R
7.  ==, !=                      -> Equality                    L -> R
8.  &                            -> Bitwise AND                L -> R
9.  ^                            -> Bitwise XOR                L -> R
10. |                            -> Bitwise OR                 L -> R
11. &&                           -> Logical AND                L -> R
12. ||                           -> Logical OR                 L -> R
13. ?:                           -> Ternary                    R -> L
14. =, +=, -=, *=, /=, %=        -> Assignment                 R -> L

------------------------------------------------------------
IMPORTANT POINTS
------------------------------------------------------------

1. Higher precedence operators are evaluated first.

2. Operators with equal precedence follow associativity.

3. Most arithmetic operators follow Left to Right.

4. Assignment operators follow Right to Left.

5. *, /, % have equal precedence.

6. +, - have equal precedence.

7. && has higher precedence than ||.

8. Parentheses () can change the order of evaluation.

------------------------------------------------------------
ASSOCIATIVITY
------------------------------------------------------------

Left to Right:
10 / 2 * 5
5 * 5
25

Right to Left:
a = b = c = 10;

------------------------------------------------------------
REMEMBER
------------------------------------------------------------

Precedence  -> Priority
Associativity -> Direction

------------------------------------------------------------
*/












/*
------------------------------------------------------------
                  VARIABLE SCOPE
------------------------------------------------------------

Definition:
Scope determines where a variable can be accessed
or used in a program.

------------------------------------------------------------
TYPES OF VARIABLE SCOPE
------------------------------------------------------------

1. Local Scope
   -> Variable declared inside a function or block or if else. 
   -> Accessible only within that function or block.
   -> Example: Variable declared inside main().

2. Global Scope
   -> Variable declared outside all functions.
   -> Accessible throughout the file after its declaration.
   -> Example: Variable declared before main().

------------------------------------------------------------
EXAMPLE
------------------------------------------------------------

int x = 10;    // Global Variable

int main() {

    int y = 20;    // Local Variable

    cout << x;    // Accessible
    cout << y;    // Accessible

    return 0;
}

------------------------------------------------------------
IMPORTANT POINTS
------------------------------------------------------------

1. Local variables are declared inside a block or function or if else.  

2. Global variables are declared outside all functions.

3. Local variables have block scope.

4. Global variables have global scope.

5. Local variables cannot be directly accessed outside
   their scope.

6. Global variables can be accessed by functions after
   their declaration, subject to visibility.

------------------------------------------------------------

! Remember:
- Local Scope → Inside a block { }
- Global Scope → Outside all functions

*/