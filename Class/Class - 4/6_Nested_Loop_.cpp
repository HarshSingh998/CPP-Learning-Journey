

/*
---------------------------------------------------------------------------------------------------------------------------------------
---------------------------------------------------------- CODE HELP ------------------------------------------------------------------
---------------------------------------------------------------------------------------------------------------------------------------
*/


#include <iostream>
using namespace std;

int main() {

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << i << j << " ";
        }
        cout << endl;
    }



    for (int i = 1; i <= 3; i = i + 1) {
    for (int j = 1; j <= 3; j = j + 1) {
        cout << "i: " << i << ", j: " << j << endl;
    }
    }



    for (int i = 1; i <= 2; i++) {
    for (int j = 1; j <= 2; j++) {
        cout << i*j << " ";
    }
    cout << endl;
    }

    return 0;
}













/*
---------------------------------------------------------------------------------------------------------------------------------------
---------------------------------------------------------- NYC ------------------------------------------------------------------------
---------------------------------------------------------------------------------------------------------------------------------------
*/



// Nested if ka mtb tha ki ek if ke andr ek or if ese hi 
// Nested loop ka mtb hai ki ek loop ke ander dusra loop. 


#include <iostream>
using namespace std;

int main (){

    int n = 5;

    for (int i=1; i<=n; i++){
        cout << "*" << endl;
    }
   




    int n = 5;

    for (int i=1; i<=n; i++){
        cout << "*" ;
    }
    cout << endl;






      int n = 5;

    for (int i=1; i<=n; i++){
        cout << "* " ;
    }
    cout << endl;



 

    int n = 5;

    for (int i=1; i<=n; i++){
         for (int j=1; j<=n; j++){
        cout << "* " ;
    }
    cout << endl;
    }



    // Outer loop ( i ) is responsible for number of rows. 
    // Inner loop ( j ) is responsible for number of columns.




    return 0;
}


