/*
===========================================================
                    TYPE CASTING
===========================================================

Type Casting:
Converting one data type into another data type.

Types:

1. Implicit Type Casting
   -> Compiler automatically converts the data type.

2. Explicit Type Casting
   -> Programmer manually converts the data type.

Common conversions:

char -> int
int -> char
int -> float
float -> int
int -> double
double -> int
float -> double
double -> float


IMPORTANT:

- float/double -> int
  Decimal part is removed.

- int / int
  Gives integer result.

- If float/double is involved in division,
  the result can be a decimal value.

- char used in arithmetic is converted/promoted
  to an integer type.

- Explicit casting syntax:

  (data_type)value;

- Modern C++:

  static_cast<data_type>(value);


===========================================================
              1. IMPLICIT CASTING - INT TO FLOAT
===========================================================
*/

#include <iostream>
using namespace std;

int main()
{
    int num1 = 10;
    float num2 = 5.5;

    float result = num1 + num2;

    cout << result << endl;

    return 0;
}


/*
Here:

num1 -> int
num2 -> float

num1 is automatically converted to float
during the calculation.

Output:
15.5
*/


/*
===========================================================
              2. IMPLICIT CASTING - CHAR TO INT
===========================================================
*/


#include <iostream>
using namespace std;

int main()
{
    char ch = 'A';

    int a = ch + 1;

    cout << a << endl;

    return 0;
}


/*
Here:

'A' = 65

char is automatically converted to int
during arithmetic.

65 + 1 = 66

Output:
66
*/


/*
===========================================================
              3. IMPLICIT CASTING - INT TO CHAR
===========================================================
*/


#include <iostream>
using namespace std;

int main()
{
    int a = 97;

    char ch = a;

    cout << ch << endl;

    return 0;
}


/*
Here:

97 is converted to char.

Output:
a
*/


/*
===========================================================
              4. EXPLICIT CASTING - DOUBLE TO INT
===========================================================
*/


#include <iostream>
using namespace std;

int main()
{
    double pi = 3.14159265;

    int intPi = (int)pi;

    cout << intPi << endl;

    return 0;
}


/*
Here:

double -> int

Decimal part is removed.

3.14159265 -> 3

Output:
3
*/


/*
===========================================================
              5. EXPLICIT CASTING - FLOAT TO CHAR
===========================================================
*/


#include <iostream>
using namespace std;

int main()
{
    float floatingNumber = 65.5;

    char charValue = (char)floatingNumber;

    cout << charValue << endl;

    return 0;
}


/*
Here:

65.5 -> 65
65 -> 'A'

Output:
A
*/


/*
===========================================================
              6. EXPLICIT CASTING - INT TO FLOAT
===========================================================
*/


#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 3;

    float c = a / (float)b;

    cout << c << endl;

    return 0;
}


/*
Here:

b is converted from int to float BEFORE division.

10 / 3.0

Output:
3.33333...
*/







/*
===========================================================
                    QUICK REVISION
===========================================================

Implicit:
Compiler automatically converts.

Explicit:
Programmer manually converts.

C-style explicit casting:

(type)value;

Example:

(int)pi
(float)a
(char)value


Important:

float -> int
15.8 -> 15

double -> int
25.75 -> 25

int / int
-> integer division

(float)10 / 3
-> decimal division

char + number
-> char is converted/promoted to integer
===========================================================
*/









/*
===========================================================
                     BONUS
===========================================================

int / int = int
int / float = float
float / int = float 

*/

