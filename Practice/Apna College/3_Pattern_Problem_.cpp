
/*
Question:
Write a C++ program to print Floyd's Triangle using nested loops.
The pattern should contain consecutive natural numbers, starting from 1,
with each row containing one more number than the previous row.

Output:
1
23
456
78910
*/

// ! METHOD 1 

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter Your Number : ";
    cin >> n;

    int num = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << num << " " ;
            num++;
        }
        cout << endl;
    }

    return 0;
}



// ! METHOD 2

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter Your Number : ";
    cin >> n;

    int num = 1;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j > 0; j--) {
            cout << num << " " ;
            num++;
        }
        cout << endl;
    }

    return 0;
}









/*
Question:
Write a C++ program to print Floyd's Triangle using consecutive
uppercase alphabets.

Output:
A
BC
DEF
GHIJ
*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter Your Number : ";
    cin >> n;

    char ch = 'A';

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << ch << " " ;
            ch++;
        }
        cout << endl;
    }

    return 0;
}












/*
Question:
Write a C++ program to print an inverted right-angled number triangle
pattern with increasing spaces at the beginning of each row.

Output:
1111
 222
  33
   4

*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter Your Number : ";
    cin >> n;

    for (int i = 0; i < n; i++) {

        // Print spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        // Print numbers
        for (int j = 0; j < n - i; j++) {
            cout << i + 1;
        }

        cout << endl;
    }

    return 0;
}











/*
Question:
Write a C++ program to print the following inverted right-angled
alphabet triangle pattern with increasing spaces at the beginning
of each row.

Output:
AAAA
 BBB
  CC
   D
   
*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter Your Number : ";
    cin >> n;

    for (int i = 0; i < n; i++) {

        // Print spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        // Print alphabets
        for (int j = 0; j < n - i; j++) {
            cout << char('A' + i);
        }

        cout << endl;
    }

    return 0;
}












/*
Question:
Write a C++ program to print a centered number pyramid pattern.
Each row should contain increasing numbers from 1 to the row number,
followed by decreasing numbers back to 1.

Output:
    1
   121
  12321
 1234321
123454321

*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter Your Number : ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // Print decreasing numbers
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}










/*
Question:
Write a C++ program to print a hollow diamond pattern using stars (*).
The diamond should have stars only on its boundaries, with spaces
inside the diamond.

Output:
    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *

*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter Your Number : ";
    cin >> n;

    // Upper Half
    for (int i = 1; i <= n; i++) {

        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print stars and inner spaces
        for (int j = 1; j <= 2 * i - 1; j++) {

            if (j == 1 || j == 2 * i - 1) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }

        cout << endl;
    }

    // Lower Half
    for (int i = n - 1; i >= 1; i--) {

        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print stars and inner spaces
        for (int j = 1; j <= 2 * i - 1; j++) {

            if (j == 1 || j == 2 * i - 1) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}










/*
Question:
Write a C++ program to print a butterfly pattern using stars (*).
The pattern should have two wings formed by stars, with spaces
between them. The upper half should expand, and the lower half
should shrink symmetrically.

Output:
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *

*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter Your Number : ";
    cin >> n;

    // Upper Half
    for (int i = 1; i <= n; i++) {

        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Middle spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }

        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower Half
    for (int i = n; i >= 1; i--) {

        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Middle spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }

        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}

