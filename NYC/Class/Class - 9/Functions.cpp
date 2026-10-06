/*

Syntax Of Function ->>  

returnType functionName( Parameters ) {
    Code ( Body )
}



STEPS -
1. Function Declaration
2. Function Definition
3. Function Call

*/


// Jha pr koi bhi return value nhi hoti h where i use Void. 




#include <iostream>
using namespace std;

// Function Declaration
void printHello();

int main() {

    // Functions Call
    printHello();


    return 0;
}

// Function Definition 
void printHello(){
    cout << "Hello Harsh" << endl;
}











#include <iostream>
using namespace std;

void printHello(){
    cout << "Hello Harsh" << endl;
}

int main() {

    // Functions Call
    printHello();
    cout << "Kaise Ho" << endl;

    printHello();
    printHello();
    printHello();
    printHello();

    return 0;
}










#include <iostream>
using namespace std;

int sum( int a , int b){
    return  a + b ;
}

int main() {


    int ans = sum( 5 , 10 );  // Arguments
    cout << ans << endl;


    cout << sum( 5 , 10 ) << endl;

    return 0;
}





// We Also Use A Default Value ->>

#include <iostream>
using namespace std;

int sum( int a  , int b = 9 ){
    return  a + b ;
}

int main() {

    int ans = sum( 5 );  
    cout << ans << endl;

    return 0;
}











// To Swap A Value - Simple Without Functions

#include <iostream>
using namespace std;

int main() {

    int a = 10;
    int b = 20;

    int temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}




// In Functions -

#include <iostream>
using namespace std;

void swap( int a , int b );

int main() {

    int a = 10 , b = 20 ;

    cout << "Before : " << endl << "a = " << a << endl;
    cout << "b = " << b << endl;

    swap ( a , b );
    cout << "After : " << endl << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}

// Function Definition

void swap( int a , int b ){
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside : " << endl << "a = " << a << endl;
    cout << "b = " << b << endl;

}



