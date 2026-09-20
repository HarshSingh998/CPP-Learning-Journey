
// Code Help Question From 194 To 200. 


// Write a C++ program to print exactly: @@Namaste Codehelp@@

#include <iostream>
using namespace std;

int main() {
    cout << "@@Namaste Codehelp@@";

    return 0;
}








// Write a C++ program to read an integer from the user and print the same integer as output.

#include <iostream>
using namespace std;

int main() {
    int num;

    // Read an integer
    cin >> num;

    // Print the same integer
    cout << num;

    return 0;
}





// Print Half of an Integer 

#include <iostream>
using namespace std;

int main() {
    float num;

    cout << "Enter Your Number " << endl;
    cin >> num;

    cout << num / 2 << endl;

    return 0;
}






// Sum of Two Integers

#include <iostream>
using namespace std;

int main() {
   
    int a;
    int b;

    cout << "Enter Your First Number " << endl;
    cin >> a;

    cout << "Enter Your Second Number " << endl;
    cin >> b;

    cout << "Sum = " << a + b << endl;

    return 0;
}









// Average of Three Integers

#include <iostream>
using namespace std;

int main() {
   
    int a;
    int b;
    int c;

    cout << "Enter Your First Number " << endl;
    cin >> a;

    cout << "Enter Your Second Number " << endl;
    cin >> b;

    cout << "Enter Your Third Number " << endl;
    cin >> c;

    cout << "Average = " << ( a + b + c ) / 3 << endl;


    return 0;
}









// Calculate the Area of a Rectangle

#include <iostream>
using namespace std;

int main() {
   
    // int length;
    // int breadth;

    // cout << "Enter Length Of Rectangle " << endl;
    // cin >> length;

    // cout << "Enter Breadth Of Rectnagle " << endl;
    // cin >> breadth;

    // cout << "Area Of Rectangle = " << length * breadth << endl;

// But when you print Area 100000 * 100000 And after this it give wrong answer. 
// because The Limit of int: In C++, a standard int can only hold positive numbers up to 2,147,483,647. and negative upto -2,147,483,647. 

// To fix this, you must change your variables from int to long long, which can store numbers up to roughly 9 quintillion.


    long long length;
    long long breadth;

    cout << "Enter Length Of Rectangle " << endl;
    cin >> length;

    cout << "Enter Breadth Of Rectangle " << endl;
    cin >> breadth;

    cout << "Area Of Rectangle = " << length * breadth << endl;


    return 0;
}







// Calculate the Percentage

#include <iostream>
using namespace std;

int main() {

    float totalMarks;
    float obtainedMarks;

    cout << "Enter Your Total Marks " << endl;
    cin >> totalMarks;

    cout << "Enter Your Marks " << endl;
    cin >> obtainedMarks;

    cout << "Percentage = " << ( obtainedMarks * 100 ) / totalMarks << "%"<< endl;



    return 0;
}





