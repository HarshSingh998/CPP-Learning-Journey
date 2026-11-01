
/*
Question:
Write a C++ program to print a right-angled triangle pattern using stars (*).

Output:
*
* *
* * *
* * * *
* * * * *

*/

// ! METHOD - 1 

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter Your Number : ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}



// ! METHOD - 2

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter Your Number : ";
    cin >> n;

    for( int i = 0 ; i < n ; i++ ){
        for ( int j = 0 ; j < i + 1 ; j++ ){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}









/*
Question:
Write a C++ program to print the following right-angled number triangle pattern.
Each row should contain the same number repeated according to its row number.

Output:
1
22
333
4444
*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter Your Number : ";
    cin >> n;

    for( int i = 0 ; i < n ; i++ ){
        for ( int j = 0 ; j < i + 1 ; j++ ){
            cout << ( i + 1 );
        }
        cout << endl;
    }

    return 0;
}










/*
Question:
Write a C++ program to print the following right-angled alphabet triangle pattern.
Each row should contain the same uppercase alphabet repeated according to its row number.

Output:
A
BB
CCC
DDDD
EEEEE
*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter Your Number : ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << char('A' + i);
        }
        cout << endl;
    }

    return 0;
}









/*
Question:
Write a C++ program to print the following right-angled number triangle pattern.
Each row should print consecutive numbers starting from 1 up to the current row number.

Output:
1
12
123
1234
*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter Your Number : ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= i + 1; j++) {
            cout << j ;
        }
        cout << endl;
    }

    return 0;
}









/*
Question:
Write a C++ program to print the following right-angled reverse number triangle pattern.
Each row should print numbers in descending order, starting from the current row number down to 1.

Output:
1
21
321
4321
*/


#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter Your Number : ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j > 0; j--) {
            cout << j ;
        }
        cout << endl;
    }

    return 0;
}









/*
Question:
Write a C++ program to print the following reverse right-angled
alphabet triangle pattern using uppercase alphabets.

Each row should print alphabets in reverse order, starting from
the current row's alphabet down to A.

Output:
A
BA
CBA
DCBA
*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter Your Number : ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = i; j >= 0; j--) {
            cout << char('A' + j);
        }
        cout << endl;
    }

    return 0;
}

