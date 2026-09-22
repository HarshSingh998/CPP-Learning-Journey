#include <iostream>
using namespace std;

/*
===========================================================
        C++ TYPE CASTING + CHARACTER ARITHMETIC
===========================================================

Type Casting:
Type casting means converting one data type into another.

There are mainly two types:

1. Implicit Type Casting
   -> Compiler automatically converts the type.

2. Explicit Type Casting
   -> Programmer manually converts the type.
*/


// =========================================================
// 1. IMPLICIT TYPE CASTING
// =========================================================

/*
Implicit Type Casting:
The compiler automatically converts one type into another.

Example:

int -> double

This is generally called widening conversion because
the destination type can represent fractional values.
*/

int main()
{
    int a = 10;

    double d = a;   // int -> double automatically

    cout << d << endl;

    /*
    Output:
    10

    Actually the value is stored as 10.0,
    but cout normally displays it as 10.
    */


    // =====================================================
    // 2. NARROWING CONVERSION
    // =====================================================

    /*
    double -> int

    Here data can be lost because int cannot store
    the decimal/fractional part.
    */

    double x = 10.90;

    int y = x;      // double -> int

    cout << y << endl;

    /*
    Output:
    10

    10.90
       ↓
      10

    .90 is lost.

    IMPORTANT:
    It does NOT round the number.

    10.99 -> 10
    15.75 -> 15
    99.99 -> 99
    */


    // =====================================================
    // 3. INTEGER DIVISION
    // =====================================================

    /*
    When both operands are int:

        int / int = int

    So the decimal part is removed.
    */

    int p = 100;
    int q = 2;

    int ans = p / q;

    cout << ans << endl;

    /*
    Output:
    50
    */


    // =====================================================
    // 4. INTEGER DIVISION WITH DECIMAL RESULT
    // =====================================================

    int m = 15;
    int n = 2;

    int result = m / n;

    cout << result << endl;

    /*
    Mathematical answer:

        15 / 2 = 7.5

    But C++ sees:

        int / int

    Therefore:

        15 / 2 = 7

    Output:
    7
    */


    // =====================================================
    // 5. EXPLICIT TYPE CASTING
    // =====================================================

    /*
    Explicit Type Casting:
    The programmer manually tells C++ to convert
    one data type into another.

    Syntax:

        (newType)value
    */

    int num1 = 15;
    int num2 = 2;

    double answer = (double)num1 / num2;

    cout << answer << endl;

    /*
    Output:
    7.5

    Why?

    (double)num1
          ↓
        15.0

    Now expression becomes:

        double / int

    C++ performs floating-point division.

        15.0 / 2 = 7.5
    */


    // =====================================================
    // 6. OTHER WAYS TO GET DECIMAL DIVISION
    // =====================================================

    cout << 15.0 / 2 << endl;

    cout << 15 / 2.0 << endl;

    cout << (double)15 / 2 << endl;

    /*
    All give:

        7.5

    Because at least one operand is double.
    */


    // =====================================================
    // 7. CHARACTER DATA TYPE
    // =====================================================

    /*
    char is used to store a single character.

    Character is written inside single quotes:

        'a'
        'A'
        '1'
        '@'
    */

    char ch = 'a';

    cout << ch << endl;

    /*
    Output:
    a
    */


    // =====================================================
    // 8. CHARACTERS HAVE NUMERIC VALUES
    // =====================================================

    /*
    Characters have numeric character codes.

    Common ASCII values:

        'A' = 65
        'B' = 66
        ...
        'a' = 97
        'b' = 98
        ...
        '0' = 48
        '1' = 49
    */


    // Convert char into int

    char letter = 'a';

    cout << (int)letter << endl;

    /*
    Output:
    97

    Because:

        'a' -> 97
    */


    char capital = 'A';

    cout << (int)capital << endl;

    /*
    Output:
    65
    */


    // =====================================================
    // 9. char STORED IN int
    // =====================================================

    int code = 'a';

    cout << code << endl;

    /*
    Output:
    97

    Because 'a' has the numeric value 97.

    Therefore:

        int code = 'a';

    is effectively storing:

        int code = 97;
    */


    // =====================================================
    // 10. CHAR + CHAR
    // =====================================================

    /*
    IMPORTANT:

    char + char does NOT join the characters.

    Example:

        'a' + 'a'

    means:

        97 + 97

    = 194
    */

    char c = 'a';

    cout << c + c << endl;

    /*
    Output:
    194
    */


    // =====================================================
    // 11. CHAR + INTEGER
    // =====================================================

    char letter2 = 'a';

    cout << letter2 + 1 << endl;

    /*
    'a' = 97

    Therefore:

        'a' + 1
        97 + 1
        = 98

    Output:
    98

    98 is the character code of 'b'.
    */


    // =====================================================
    // 12. GET THE NEXT CHARACTER
    // =====================================================

    /*
    If we want 'b' instead of 98,
    convert the result back to char.
    */

    char letter3 = 'a';

    cout << (char)(letter3 + 1) << endl;

    /*
    Output:
    b

    Working:

        'a'
         ↓
        97
         ↓
        97 + 1
         ↓
        98
         ↓
        'b'
    */


    // =====================================================
    // 13. 1 VS '1'
    // =====================================================

    /*
    VERY IMPORTANT:

        1   -> integer
        '1' -> character

    They are NOT the same.

        1 = numeric value 1

        '1' = character whose ASCII value is 49
    */

    cout << 1 + 1 << endl;

    /*
    Output:
    2
    */

    cout << '1' + '1' << endl;

    /*
    '1' = 49

    Therefore:

        49 + 49
        = 98

    Output:
    98
    */


    // =====================================================
    // 14. 'a' + '1'
    // =====================================================

    char letter4 = 'a';

    cout << letter4 + '1' << endl;

    /*
    'a' = 97
    '1' = 49

    Therefore:

        97 + 49
        = 146

    Output:
    146

    IMPORTANT:

        letter4 + 1
        !=
        letter4 + '1'

    Because:

        1  = number 1
        '1' = character 49
    */


    // =====================================================
    // 15. CHAR + CHAR VS CHAR + CHAR PRINTING
    // =====================================================

    char first = 'a';
    char second = 'b';

    // Printing characters one after another
    cout << first << second << endl;

    /*
    Output:
    ab
    */

    // Adding their numeric values
    cout << first + second << endl;

    /*
    'a' = 97
    'b' = 98

    97 + 98 = 195

    Output:
    195
    */


    // =====================================================
    // 16. QUICK REVISION
    // =====================================================

    /*
    TYPE CASTING
    ---------------------------------------------------------

    Implicit:
        Compiler automatically converts.

        int a = 10;
        double b = a;


    Explicit:
        Programmer manually converts.

        double a = 10.90;
        int b = (int)a;


    INTEGER DIVISION
    ---------------------------------------------------------

        int / int = int

        15 / 2 = 7


    DECIMAL DIVISION
    ---------------------------------------------------------

        15.0 / 2 = 7.5
        15 / 2.0 = 7.5
        (double)15 / 2 = 7.5


    CHARACTER VALUES
    ---------------------------------------------------------

        'A' = 65
        'a' = 97
        '0' = 48
        '1' = 49


    CHARACTER ARITHMETIC
    ---------------------------------------------------------

        'a' + 1

        97 + 1
        = 98


    IMPORTANT DIFFERENCE
    ---------------------------------------------------------

        1   -> number
        '1' -> character


    CHAR + CHAR
    ---------------------------------------------------------

        'a' + 'a'

        97 + 97
        = 194
    */


    return 0;
}