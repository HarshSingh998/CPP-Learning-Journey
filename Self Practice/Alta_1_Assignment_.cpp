
/*

Question:1 ->> Floyd's Triangle

Objective:
Given an integer N, print Floyd's Triangle with N rows.
Floyd's Triangle is a right-angled triangular arrangement of consecutive natural numbers.
The first row contains 1, the second row contains 2 numbers, the third row contains 3 numbers, and so on.

Example: If N = 5, the output should be:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

Task: Use nested loops to print consecutive numbers in a triangular pattern.

*/


#include <iostream>
using namespace std;

int main() {
    int N;
    
    // Take input for the number of rows
    cout << "Enter number of rows: " << endl;
    cin >> N;
    
    int currentNumber = 1; // Start counting from 1

    // Outer loop for the number of rows
    for (int i = 1; i <= N; i++) {
        
        // Inner loop for the elements in each row
        for (int j = 1; j <= i; j++) {
            cout << currentNumber << " ";
            currentNumber++; // Increment the number
        }
        
        cout << endl; // Move to the next line after each row
    }

    return 0;
}













/*

Question:2 ->> Centered Pyramid Pattern

Objective:
Given an integer N, print a centered pyramid pattern of stars with N rows.
Each row should contain spaces followed by stars. The number of stars increases by two for every new row.

Example: If N = 5, the output should be:-  *

Task:- Use nested loops to print the required spaces and stars to create a centered pyramid.

(Note: The original problem also specifies the constraint 1 <= N <= 100.)

*/


#include <iostream>
using namespace std;

int main() {
    int N;
    
    // Read the input integer N
    cin >> N;
    
    // Outer loop for each row from 1 to N
    for (int i = 1; i <= N; i++) {
        
        // Inner loop 1: Print the required spaces
        for (int j = 1; j <= N - i; j++) {
            cout << " ";
        }
        
        // Inner loop 2: Print the stars, increasing by two for every new row
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        
        // Move to the next line after completing the row
        cout << endl;
    }

    return 0;
}












/*

Question:3 ->> Grade Calculator

Objective:
Write a program that reads a student's marks and determines their grade according to the following rules:
90-100: A
80-89: B
70-79: C
60-69: D
Below 60: F

*/


#include <iostream>
using namespace std;

int main() {
    
    int num;

    cout << "Enter Your Number " << endl;
    cin >> num;

    if(num >= 90 && num <= 100){
        cout << "A" << endl;
    }
    else if(num >= 80 && num <= 89){
        cout << "B" << endl;
    }
    else if(num >= 70 && num <= 79){
        cout << "C" << endl;
    }
    else if(num >= 60 && num <= 69){
        cout << "D" << endl;
    }
    else{
        cout << "F" << endl;
    }
    
    return 0;
}














/*

Question:4 ->> Largest of Three Numbers

Objective:
Write a program that reads three integers a, b, and c and prints the largest value among them. If two or three numbers are equal, print the maximum value only once. Use conditional statements and logical operators to determine the largest of three numbers.

Constraints: -10^9 <= a, b, c <= 10^9

*/


#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter Your First Number " << endl;
    cin >> a;

    cout << "Enter Your Second Number " << endl;
    cin >> b;
    
    cout << "Enter Your Third Number " << endl;
    cin >> c;


    if (a >= b && a >= c) {
        cout << a << endl;
    } 
    else if (b >= a && b >= c) {
        cout << b << endl;
    } 
    else {
        cout << c << endl;
    }

    return 0;
}














/*

Question:5 ->> Leap Year

Objective:
Write a program that reads a year and determines whether it is a leap year.
A year is a leap year if:

It is divisible by 400, OR
It is divisible by 4 but not divisible by 100.
Print Leap Year if the year is a leap year; otherwise print Not a Leap Year.
 Use nested/logical conditional expressions to implement multiple conditions.

Constraints: 1 <= year <= 10^9

*/


#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter Your Year " << endl;
    cin >> year;

    // Check leap year conditions using logical operators (&& for AND, || for OR)

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        cout << "Leap Year" << endl;
    } else {
        cout << "Not a Leap Year" << endl;
    }

    return 0;
}



