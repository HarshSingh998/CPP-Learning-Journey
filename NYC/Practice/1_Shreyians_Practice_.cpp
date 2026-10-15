
/*

Calculate the Sum of Two Numbers 
( Write a program to take two numbers as input and print their sum. )

Sample Input 1: 10 20
Expected Output 1: 30

Sample Input 2: 5 15
Expected Output 2: 20

*/

#include <iostream>
using namespace std;

int main() {

    int a , b;
    cout << "Enter Your First Number : " ;
    cin >> a;
    cout << "Enter Your Second Number : ";
    cin >> b;

    cout << "SUM : " << a + b << endl;

    return 0;
}








/*
 
Average of Three Numbers 
( Write a program to take three numbers as input and calculate their average using the formula: Average = (a + b + c) / 3. )

Sample Input 1: 3 6 9
Expected Output 1: 6

Sample Input 2: 10 20 30
Expected Output 2: 20

*/


#include <iostream>
using namespace std;

int main() {

    int a , b , c;
    cout << "Enter Your First Number : ";
    cin >> a;
    cout << "Enter Your Second Number : ";
    cin >> b;
    cout << "Enter Your Third Number : ";
    cin >> c;

    cout << "AVERAGE : " << ( a + b + c )/3 << endl;

    return 0;
}









/*

Print User Name and Age 
( Write a program to take the name and age of a user as input and print the message: Hello <name>, you are <age> years old. )

Sample Input 1: 
Harsh
24

Expected Output 1: 
Hello Harsh, you are 24 years old.


Sample Input 2: 
Raja
21

Expected Output 2: 
Hello Raja, you are 21 years old.

*/


#include <iostream>
using namespace std;

int main() {

    string name;
    int age;

    cout << "Enter Your Name : ";
    cin >> name;

    cout << "Enter Your Age : ";
    cin >> age;

    cout << "Hello " << name << ", you are " << age << " years old." << endl;


    return 0;
}









/*

Swap Two Numbers 
( Write a program to take two numbers as input and swap their values. After swapping, print the two numbers separated by a space. )

Sample Input 1: 10 20
Expected Output 1: 20 10

Sample Input 2: 5 15
Expected Output 2: 15 5

*/


#include <iostream>
using namespace std;

int main() {

    int a, b;

    cout << "Enter Your First Number : " ;
    cin >> a;

    cout << "Enter Your Second Number : " ;
    cin >> b;

    int temp = a;
    a = b;
    b = temp;

    cout << a << " " << b << endl;

    return 0;
}









/*

Calculate Area of a Rectangle 
( Write a program to take the length and breadth of a rectangle as input and calculate its area using the formula: Area = length * breadth. )

Sample Input 1: 5 10
Expected Output 1: 50

Sample Input 2: 6 4
Expected Output 2: 24

*/

#include <iostream>
using namespace std;

int main() {

    long long a , b;
    cout << "Enter Your First Number : ";
    cin >> a;

    cout << "Enter Your Second Number : ";
    cin >> b;

    cout << "Area Of Rectangle :- " << a * b << endl;

    return 0;
}



