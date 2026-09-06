#include <iostream>
using namespace std;

int main() {
    

/*Programming Language 2 Type ki hoti h
1 - C++ , JAVA , C - Inme DataType Pehle Se btana pdta h
2 - Python , JavaScript - Inme DataType Pehle Se btana nhi pdta h wo run time pe khud decide kr leta 
Isliye Second Wali Comparatively Slow hoti h
Or First Wali Fast hoti h
1 - Statically Typed Language (DataType is declared at compile time) (CPP, JAVA, C)
2 - Dynamically Typed Language (DataType is declared at runtime) (Python, JavaScript)*/




// //Datatype VariableName = Value
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




// int a = 10;
// double d = a; //Bada ghar = chhota ghar (Implicit Type Casting) automatically convert ho jata h
// cout << d <<endl;



// double a = 10.90;
// int d = a;  //Data lose
// cout << d <<endl;





// int a = 100 , b = 2;
// int ans = a/b;
// cout << ans << endl;



// int a = 15 , b = 2;
// int ans = a/b;   // int/int = int
// cout << ans << endl;



//Explicit type casting ( chhota ghar = bada ghar )
// int a = 15 , b = 2;
// double ans = (double)a/b;    // double/int = double ( Type Promotion)
// cout << ans << endl;



//implicit means something happens automatically by the compiler,  ( Widening)
//while explicit means it is done manually by the programmer.  ( Narowing)





// char ch = 'a';
// cout << ch <<endl;




// char ch = 'a';
// cout << (int)ch <<endl;


// char ch = 'A';
// cout << (int)ch <<endl;


// int ch = 'a';
// cout << (int)ch <<endl;



// char ch = 'a';   // 97+97
// cout << ch+ch <<endl;



// char ch = 'a'; 
// cout << ch + 1 <<endl;



// char ch = 'a'; 
// cout << ch + '1' <<endl;





//Operator Divide into 2 parts - Unary & Binary
// unary jisme 1 hi operant lagta h ( -5 )
// binary me 2 operant lagta h ( 5 - 5 ) ( 9 * 2 )



// arithmetic operators 
// int a = 100 , b = 2;
// cout << a + b << endl;
// cout << a - b << endl;
// cout << a * b << endl;
// cout << a / b << endl;
// cout << a % b << endl;   //( Modulus Or Mod ) - Remainder



//Increment = ++ ( Only one value increse hoga)
//Decrement = -- ( Only one value decrease hoga)
// Both Have Two Types Pre And Post ( Increment & Decrement)

// Pre Increment = ++a. ( Pehele change hoga or fir baad me use hoga )
// Post Increment = a++. ( Pehle use hoga or fir baad me change hoga)

// Pre Decrement = --a.  ( Pehele change hoga or fir baad me use hoga )
// Post Decrement = a--  ( Pehle use hoga or fir baad me change hoga)




// int a = 1;
// cout << a++ <<endl;
// cout << a <<endl;


// int a = 1;
// cout << ++a <<endl;
// cout << a << endl;


// int a = 1;
// cout << a-- <<endl;
// cout << a <<endl;



// int a = 1;
// cout << --a <<endl;
// cout << a <<endl;



// int a = 1;
// a++;
// cout << a << endl;



// Relational Operators

// int a = 1 , b = 2;
// cout << (a > b) << endl;
// 0 = False , 1 = True


// int a = 1 , b = 2;
// cout << (a < b) << endl;



// int a = 10 , b = 10 ;
// cout << ( a >= b) << endl;



// Assignment Operator ( assine jisko krna h )   =
// equal operator is    ==
// not equal operator is   !=

// int a = 10 , b = 10 ;
// cout << ( a == b ) << endl;

// int a = 10 , b = 10 ;
// cout << ( a != b ) << endl;





// Assignment Operator 

// int a = 90;
// a += 10 ;
// cout << a << endl;



// int a = 90;
// a = a + 10;
// cout << a << endl;





// Logical Operator  ( OR Operator =  || )    ( AND Operator =  && )  
// Logical Not Operator =  !

// cout << ((100>2) && (200>2)) << endl;
// cout << ((100<2) && (200>2)) << endl;
// cout << ((100>2) && (200<2)) << endl;
// cout << ((100>2) && (200<2)) << endl;


// cout << ((100>2) || (200>2)) << endl;
// cout << ((100<2) || (200>2)) << endl;
// cout << ((100<2) || (200<2)) << endl;
// cout << ((100>2) || (200<2)) << endl;


// cout << (!(100>2)) << endl; 
// ! Jaha lg jayega wha uska opposite ho jayega



// In Number System - Binary , Octal , Decimal , Hexadecimal
// cout << 012 << endl;
// cout << 1010 << endl;  //( If i treat it like binary then use 0b )
// cout << 0b1010 << endl;
// cout << 0XA << endl;

// If a number start with 0 then it is octal number
// if number start with 0b , 0B then it is binary number
// if number start with 0x , 0X then it is hexadecimal number







// Input Or Output

// int val;
// cin >> val;
// cout << "Value = " << val << endl;



// int val ;
// cout << "Enter a Number : " ;
// cin >> val;
// cout << "Value = " << val << endl;



// int a , b ;
// cout << "Enter Two Number : " ;
// cin >> a >> b;
// cout << "Sum = " << (a + b) << endl;




    return 0;
}
