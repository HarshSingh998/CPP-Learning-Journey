#include <iostream>
using namespace std;

int main() {
    



//Datatype VariableName = Value
// int FirstNumber ;//Variable Declaration
// FirstNumber = 10; //Variable Initialization
// FirstNumber = 20; //Variable Re-Initialization



// int SecondNumber = 30; //Variable Declaration + Initialization ( Combination of both )


//endl or "\n" is used to print the output in new line

// cout << "First Number = FirstNumber" << endl;
// cout << "First Number is : " << FirstNumber << endl;

// int sum = FirstNumber + SecondNumber;
// cout << "Sum of First Number and Second Number is : " << sum << endl;





// int num = 20;

// //Literal is a value that is directly written in the code. 
// //For example, 20 is a literal value of type int.
// //Identifiers are the names given to variables, functions, classes, etc. 
// //For example, num is an identifier for the variable that holds the value 20.

// cout << "Number : " << num << endl;





//I Can't Start With Number
//int 1num = 20; //Invalid
//But I Can Start With Underscore , Dollar Sign And Alphabets And Can Use Numbers After That
// int 1num = 10; //Invalid
// int _num = 20; //Valid
// int $num = 30; //Valid
// int num1 = 40; //Valid




//Variable Me Space Nhi Hota
// int first number = 20; //Invalid
// int firstnumber = 20; //Valid


// Or You Can Use Camel Case Or Snake Case For Variable Names
// int firstNumber = 20; //Camel Case
// int first_number = 30; //Snake Case




// //Kabhi bhi keywords ko variable name ke liye use nhi kr skte
// int int = 20; //Invalid
// int main = 30; //Invalid
// int return = 40; //Invalid
// int cout = 50; //Invalid
// int endl = 60; //Invalid
// int if = 70; //Invalid
// int else = 80; //Invalid
// int for = 90; //Invalid
// int while = 100; //Invalid
// int do = 110; //Invalid
// int switch = 120; //Invalid
// int case = 130; //Invalid
// int break = 140; //Invalid
// int continue = 150; //Invalid
// int default = 160; //Invalid




/*Variable ka naam aap kitne bhi lamba rakh skte ho make sure 
ki aapko yaad rhe ki aapne kya naam diya h*/





// int num =10;
// num = 20;
// cout << "Number : " << num ;



/*If Value change nhi krni h to aap const ka use kr skte ho taki wo value change na ho
const int num = 10;
// num = 20; //Invalid
cout << "Number : " << num ;*/



/*agr aap const ka use krte ho to aapko uska value initialize krna pdta h usi time pe .
Constant me variable ka value change nhi hota h or usko caps me likhna chahiye taki 
easily identify ho jaye ki ye constant h
const int NUM = 10;
cout << "Number : " << NUM ; */



/*    DataType In CPP - 3 Types
1 - Primitive DataType (int, float, double, char, bool , void)
2 - Derived DataType (Array, Pointer, Function , reference)
3 - User Defined DataType (Class, Structure, Union, Enum, Typedef).     */



// 1 Bits - 0 , 1
// 1 Byte - 8 Bits
// 1 Kilobyte - 1024 bytes
// 1 MB - 1024 KB




//Decimal number ko floating point number kehte h or ye floating point number 2 types ke hote h
//1 - Float (4 Bytes) - 6 to 7 Digits Precision
//2 - Double (8 Bytes) - 15 to 16 Digits Precision



//Numbers ke 3 Types Hote H ( Without Decimal Point )
//1 - Integer (int) - 4 Bytes
//2 - Long Integer (long int) - 8 Bytes
//3 - Short Integer (short int) - 2 Bytes


//char me 1 Character Store hota h or ye 1 Byte ka hota h 
//( a , 1 , @ , # , $ , % , ^ , & , * , ( , ) , _ , + , - , = )


//bool me 2 Value Store hoti h ( true , false ) or ye 1 Byte ka hota h







// int i = 10;
// long l = 20;
// short s = 30;
// float f = 40.5;
// double d = 50.5;
// char c = 'A';
// bool b = true;

// cout << "Integer : " << i << endl;
// cout << "Long Integer : " << l << endl;
// cout << "Short Integer : " << s << endl;
// cout << "Float : " << f << endl;
// cout << "Double : " << d << endl;
// cout << "Character : " << c << endl;
// cout << "Boolean : " << b << endl;



// Sizeof Operator - Ye operator variable ke size ko bytes me return krta h

// cout << sizeof(i) << endl;
// cout << sizeof(l) << endl;
// cout << sizeof(s) << endl;
// cout << sizeof(f) << endl;
// cout << sizeof(d) << endl;
// cout << sizeof(c) << endl;
// cout << sizeof(b) << endl;






//Garbage Value - ( Random Value ) 
//Jab aap variable ko declare krte ho or usko initialize nhi krte ho to usme garbage value store hoti h

// int i;
// cout << i << endl;
// float f;
// cout << f << endl;






    return 0;
}
