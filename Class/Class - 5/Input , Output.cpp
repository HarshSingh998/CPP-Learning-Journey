
// Input Or Output

int val;
cin >> val;
cout << "Value = " << val << endl;



int val ;
cout << "Enter a Number : " ;
cin >> val;
cout << "Value = " << val << endl;



int a , b ;
cout << "Enter Two Number : " ;
cin >> a >> b;
cout << "Sum = " << (a + b) << endl;








// For Name And Age
#include <iostream>
#include <string>               // For Name ( String ) You write this 
using namespace std;

int main() {

string name;
int age;

cout << " Enter Your Name = " ;
cin >> name;   

/* cin kehta hai agr space ya next line character dikhta h to input lena bnd kr dega isliye hm 
string me getline ka use krte h */


cout << " Enter Your Age = " ;
cin >> age;

cout << " Hello " << name << ", You Are " << age << " Years Old." << endl;








string name;
int age;

cout << " Enter Your Name = " ;
getline(cin, name);

cout << " Enter Your Age = " ;
cin >> age;

cout << " Hello " << name << ", You Are " << age << " Years Old." << endl;









string name;
int age;

cout << " Enter Your Age = " ;
cin >> age;

cout << " Enter Your Name = " ;
getline(cin, name);
// getline kehta h ki space ko ignore krega but /n ( Next line Character )ko nhi 

cout << " Hello " << name << ", You Are " << age << " Years Old." << endl;








string name;
string name1;
int age;

cout << " Enter Your Age = " ;
cin >> age;

cout << " Enter Your Name = " ;
getline(cin, name1);
getline(cin, name);

cout << " Hello " << name << ", You Are " << age << " Years Old." << endl;







string name;
int age;

cout << " Enter Your Age = " ;
cin >> age;

cout << " Enter Your Name = " ;
cin.ignore();
getline(cin, name);

cout << " Hello " << name << ", You Are " << age << " Years Old." << endl;







int a = 10 , b = 20;
cout << a << b << "\n";
cout << a << " " << b << "\n";
cout << a << "\n" << b << "\n";
cout << a << endl << b << "\n";


// ( endl ) - Slow because ye kisi bhi kaam ko 2 process me krta hai pehle data leta ha or fir uska khali krta h 
// ( \n ) - Fast 









// Escape Sequence 

string name = "Harsh";
cout << "Hello, " " << name << """ << "\n";



string name = "Harsh";
cout << "Hello, \"" << name << "\"" << "\n";



string name = "Harsh";
cout << "Hello, \'" << name << "\'" << "\n";



string name = "Harsh";
cout << "Hello, \t" << name << "\n";



    return 0;
}