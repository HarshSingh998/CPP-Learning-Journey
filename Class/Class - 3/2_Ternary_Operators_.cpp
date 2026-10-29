
// C++ operators ( like +, -, ==, =, and << )


#include <iostream>
using namespace std;

int main() {

    int age = 100;

    if (age > 18) {
        cout << "You Can Vote" << endl;
    }
    else{
        cout << "You Can't Vote" << endl;
    }



    // Ternary Operator - 
    int age = 12;
    (age > 18) ? cout << "You Can Vote" << endl : cout << "You Can't Vote" << endl;

    return 0;
}







// Syntax of Ternary Operator ->  condition ? expression_if_true : expression_if_false;

/* 
condition - A boolean expression that evaluates to true or false.
? -  The question mark separator. If the condition is true, the code right after it executes.
: -  The colon separator. If the condition is false, the code right after it executes 
*/







#include <iostream>
using namespace std;

int main() {

    int x = 10;
    int y = 20;

    int result = (x > y) ? x : y; 
    // If x is greater than y, then result will be x, otherwise result will be y.

    cout << "The greater number is: " << result << endl;


    return 0;
}

