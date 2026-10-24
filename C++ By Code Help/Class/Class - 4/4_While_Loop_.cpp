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