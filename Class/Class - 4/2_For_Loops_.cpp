
/*
---------------------------------------------------------------------------------------------------------------------------------------
---------------------------------------------------------- CODE HELP ------------------------------------------------------------------
---------------------------------------------------------------------------------------------------------------------------------------
*/



// For Loop in C++ Syntax  - 
for (initialization; condition; update) {
    // Body of the loop (code to be executed)
}




#include <iostream>
using namespace std;

int main() {

    for(int count = 1; count <= 10; count++) {
        cout << "Harsh Singh" << endl;
    }

    for(int count = 1; count <= 10; count = count + 1) {
    cout << "Harsh Singh" << endl;
    }

// Both loops are same but in second loop we have used count = count + 1 instead of count++ which is same as count = count + 1

    // Counting from 1 to 10 using for loop
    for(int i = 1; i <=10 ; i++) {
        cout << i << endl;
    }

    // Counting from 51 to 69 using for loop
    for(int i = 51; i <=69 ; i++) {
        cout << i << endl;
    }

    return 0;
}










/*
---------------------------------------------------------------------------------------------------------------------------------------
---------------------------------------------------------- NYC ------------------------------------------------------------------------
---------------------------------------------------------------------------------------------------------------------------------------
*/




// "For" Loop = ( SSS - Start , Stop , Step )



#include <iostream>
#include <string>
using namespace std;


int main(){

int n = 5;
for(int i = 1 ; i <= 5 ; i++ ){
    cout << "Hello" << endl ;  }




int n = 50;
for(int i = 1 ; i <= n ; i++ ){
    cout << "Hello" << endl ; }


    return 0;
}












// Table Of Any Numbers 

#include <iostream>
using namespace std;


int main() {

for(int i = 1 ; i <= 10 ; i++ ){
    cout << " 7 x " << i << " = " << 7*i << endl ;  }

    return 0;
}






int main() {

int n;
cout << "Which Table You Print :- " ;
cin >> n;
for(int i = 1 ; i <= 10 ; i++ ){
    cout << n << " x " << i << " = " << n*i << endl ;  }


    return 0;
}