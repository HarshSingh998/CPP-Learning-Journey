
/*

Calculate Perimeter of a Rectangle
(Write a program to take the length and breadth of a rectangle as input and calculate its perimeter using the formula: 
Perimeter = 2 * (length + breadth). Return the calculated perimeter.)

Sample Input 1: 5 10
Expected Output 1: 30

*/



#include <iostream>
using namespace std;

int main() {

    long long length, breadth;

    cout << "Enter Length and Breadth: ";
    cin >> length >> breadth;

    cout << "Perimeter of Rectangle: " << 2 * (length + breadth) << endl;

    return 0;
}











/*

Calculate Area of a Circle
(Write a program to take the radius of a circle as input and calculate its area using the formula: 
Area = π * radius * radius. Use π = 3.14.)

Sample Input 1: 1
Expected Output 1: 3.14

Sample Input 2: 3
Expected Output 2: 28.26

*/


#include <iostream>
using namespace std;

int main() {

    double r;
    cout << "Enter Radius: ";
    cin >> r;

    cout << "Area Of Circle: " << 3.14 * r * r << endl;

    return 0;
}


/*

Why use double instead of long long?
- long long stores whole numbers, such as 3 or 10.
- double can store decimal numbers, such as 3.5 or 2.75.
Since a circle's radius can be a decimal, double is a better choice.

*/













/*

Convert Celsius to Fahrenheit
(Write a program to take the temperature in Celsius as input and convert it to Fahrenheit using the formula: 
Fahrenheit = (Celsius * 9.0 / 5.0) + 32. Print the temperature in Fahrenheit.)

Sample Input 1: 0
Expected Output 1: 32

Sample Input 2: 25
Expected Output 2: 77

*/


#include <iostream>
using namespace std;

int main() {

    double celsius;
    cout << "Enter Temperature in Celsius: ";
    cin >> celsius;

    double fahrenheit = (celsius * 9.0 / 5.0) + 32;

    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}

// Use double instead of float for better decimal precision. 












/*

Increase Salary Using Assignment Operator
(Write a program to take an employee's salary as input and increase it by ₹5000 using the assignment operator (+=). Print the updated salary.)

Sample Input 1: 20000
Expected Output 1: 25000

Sample Input 2: 15000
Expected Output 2: 20000

*/


#include <iostream>
using namespace std;

int main() {

    long long salary;

    cout << "Enter Your Salary: ";
    cin >> salary;

    salary += 5000;

    cout << "Updated Salary: " << salary << endl;

    return 0;
}













/*

Print ASCII Value of a Character
(Write a program to take a character as input and print its ASCII value.)

Sample Input 1: A
Expected Output 1: 65

Sample Input 2: a
Expected Output 2: 97

*/


#include <iostream>
using namespace std;

int main() {

    char ch;
    cout << "Enter a Character: ";
    cin >> ch;

    cout << "ASCII Value: " << (int)ch << endl;

    return 0;
}





