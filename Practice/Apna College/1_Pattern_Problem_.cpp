
/*
Question:
Write a C++ program to print a square pattern using numbers.

Example Output:
1 2 3
1 2 3
1 2 3
*/

#include <iostream>
using namespace std;

int main() {

    int n ;
    cout << "Enter Your Number : ";
    cin >> n;

    for( int i = 1 ; i <= n ; i++ ){
        for( int j = 1 ; j <= n ; j++){
            cout << j ;
        }
        cout << endl;
    }

    return 0;
}










/*
Question:
Write a C++ program to print a square pattern using stars (*).

Example Output:
* * *
* * *
* * *
*/

#include <iostream>
using namespace std;

int main() {

    int n ;
    cout << "Enter Your Number : ";
    cin >> n;

    for( int i = 1 ; i <= n ; i++ ){
        for( int j = 1 ; j <= n ; j++){
            cout << "* " ;
        }
        cout << endl;
    }

    return 0;
}










/*
Question:
Write a C++ program to print a square pattern using characters.

Example Output:
A B C
A B C
A B C
*/

#include <iostream>
using namespace std;

int main() {

    int n ;
    cout << "Enter Your Number : ";
    cin >> n;

    for( int i = 1 ; i <= n ; i++ ){
        char ch = 'A';
        for( int j = 1 ; j <= n ; j++){
            cout << ch ;
            ch++ ;
        }
        cout << endl;
    }

    return 0;
}










/*
Question:
Write a C++ program to print the following number pattern using nested loops.

Output:
123
456
789
*/

#include <iostream>
using namespace std;

int main() {

    int n ;
    cout << "Enter Your Number : ";
    cin >> n;

    int num = 1;

    for( int i = 1 ; i <= n ; i++ ){
        for( int j = 1 ; j <= n ; j++){
        cout << num << " " ;
        num++;
        }
        cout << endl;
    }

    return 0;
}










/*
Question:
Write a C++ program to print the following square pattern using consecutive uppercase alphabets.

Output:
ABC
DEF
GHI
*/

#include <iostream>
using namespace std;

int main() {

    int n ;
    cout << "Enter Your Number : ";
    cin >> n;

    char ch = 'A';

    for( int i = 1 ; i <= n ; i++ ){

        for( int j = 1 ; j <= n ; j++){
        cout << ch << " " ;
        ch++;
        }
        cout << endl;
    }

    return 0;
}