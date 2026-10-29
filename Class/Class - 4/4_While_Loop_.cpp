
/*
---------------------------------------------------------------------------------------------------------------------------------------
---------------------------------------------------------- CODE HELP ------------------------------------------------------------------
---------------------------------------------------------------------------------------------------------------------------------------
*/


#include <iostream>
using namespace std;

int main() {

    // Initialization
    int i = 1;
    // While ( Condition )
    while (i <= 10) {
        cout << i << endl;
    // Updation
        i++;
    }

    return 0;
}











/*
---------------------------------------------------------------------------------------------------------------------------------------
---------------------------------------------------------- NYC ------------------------------------------------------------------------
---------------------------------------------------------------------------------------------------------------------------------------
*/


// "While" (Jab Tak) Loop = ( SSS - Start , Stop , Step )


#include <iostream>
using namespace std;


int main(){



int n = 5;
int i = 1;
while (i<=n){
    cout << "Hello" << endl;
    i++;
}






int n = 125;
while (n > 0){
    int lastDigit = n%10;
    cout << lastDigit << endl;
    n /= 10;
}





int n = 125;
int sum = 0;
while (n > 0){
    int lastDigit = n%10;
    sum += lastDigit;
    n /= 10;
}
cout << "Sum = " << sum << endl;







int n = 125;
int rev = 0;
while (n > 0){
    int lastDigit = n%10;
    rev = rev*10 + lastDigit ;
    n /= 10;
}
cout << "Reverse = " << rev << endl;







int n = 121;
int rev = 0;
while (n > 0){
    int lastDigit = n%10;
    rev = rev*10 + lastDigit ;
    n /= 10;
}
cout << ((rev == n) ? "Palindrome Number" : "Not A Palindrome Number  \n");





int n = 125;
int rev = 0;
while (n > 0){
    int lastDigit = n%10;
    rev = rev*10 + lastDigit ;
    n /= 10;
}
cout << ((rev == n) ? "Palindrome Number" : "Not A Palindrome Number  \n");




int n = 121;
int copy = n;
int rev = 0;
while (n > 0){
    int lastDigit = n%10;
    rev = rev*10 + lastDigit ;
    n /= 10;
}
cout << ((rev == copy) ? "Palindrome Number" : "Not A Palindrome Number  \n");





int n = 125;
int copy = n;
int rev = 0;
while (n > 0){
    int lastDigit = n%10;
    rev = rev*10 + lastDigit ;
    n /= 10;
}
cout << ((rev == copy) ? "Palindrome Number" : "Not A Palindrome Number \n");








#include <iostream>
#include <cmath>
using namespace std;

int main(){


int n = 153;
int c = 0 , copy = n , sum = 0;
while (n > 0){
    c++;
    n /= 10 ;
}
n = copy;
while (n > 0){
    int lastD = n%10;
    sum += pow(lastD, c);
    n /= 10;

}
    n = copy;
cout << ((sum==n) ? "Armstrong Number" : "Not A Armstrong Number \n" ) ;








int n = 154;
int c = 0 , copy = n , sum = 0;
while (n > 0){
    c++;
    n /= 10 ;
}
n = copy;
while (n > 0){
    int lastD = n%10;
    sum += pow(lastD, c);
    n /= 10;

}
    n = copy;
cout << ((sum==n) ? "Armstrong Number" : "Not A Armstrong Number \n" ) ;




    return 0;
}





















// Counting A Number

#include <iostream>
using namespace std;

int main() {


    int n;
    cout << "Enter A Number :-  ";
    cin >> n;
    int i = 1;
    while (i<=n){
        cout << "1" << endl;
        i++;
    }





    int n ;
    cout << "Enter A Number :-  ";
    cin >> n;
    int i = 1;
    while (i<=n){
        cout << i << endl;
        i++;
    }



    return 0;
}









/*

-----------------------------------------------------------------------------------------------
---------------------------- Difference Between for and while in C++ --------------------------
-----------------------------------------------------------------------------------------------

For Loop :
- Used when the number of iterations is known.
- Best for a fixed range.
- Initialization, condition, and update are written in one line.


Example of for :- ( Prints numbers from 1 to 5 )

for (int i = 1; i <= 5; i++) {
    cout << i << " ";
}








While Loop :
- Used when the number of iterations is unknown.
- Best for condition-based repetition.
- Initialization and update are usually written separately.


Example of while :- ( Prints numbers until n becomes 0 )

int n = 10;
while (n > 0) {
    cout << n << " ";
    n-- ;
}







-----------------------------------------------------------------------------------------------
------------------------------------ Easy trick to remember: ----------------------------------
-----------------------------------------------------------------------------------------------

- for = How many times?
- while = Until when?

*/