

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



