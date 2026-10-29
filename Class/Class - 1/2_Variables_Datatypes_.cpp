

/*
---------------------------------------------------------------------------------------------------------------------------------------
---------------------------------------------------------- Part 1 ---------------------------------------------------------------------
---------------------------------------------------------------------------------------------------------------------------------------
*/



// Data ko store karne ke liye variables ka use kiya jata hai (variable ka matlab hai data ko store karne ke liye ek container) aur variable ko define karne ke liye hume uska datatype specify karna padta hai (datatype ka matlab hai ki variable me kis type ka data store hoga)


// jab bhi me kisi memory block ko name deta hu to wo name variable kehlata hai

int marks = 50; 
// int ka matlab hai integer wo ek data type hai (integer ka matlab hai whole number) aur marks variable me 50 store ho gaya (50 ek integer value hai)
// aapne ek memory block ke andr aapne 50 ko store kar diya aur us memory block ko aapne marks naam de diya (marks ek variable hai jisme 50 store ho gaya) aur iske liye aapne int datatype ka use kiya (int ka matlab hai integer aur ye ek datatype hai)

int age = 25;

// Variables - Named Storage Memory Locations ( Jis memory block ke andr aap data ko store krne wale hai uske naam ko aapne variable kediya hai.)

// Datatypes Variable = Value;

// Datatypes - The Datatypes specifies the size and type of information the variable will store. 





#include <iostream>
using namespace std;

int main() {

    // int age = 18;
    // cout << "My Age Is " << age << endl;


    // Declaration
    int age;
    cout << age;

    // Definition
    int age = 18;
    cout << age << endl;

// same naam ke variable ko aap ek hi programme me do baar define nhi kr skte (same naam ke variable ko aap ek hi programme me do baar define nhi kr skte)


    // Manipulation
    age = 20;
    cout << age << endl;


    return 0;
}







// Declaration ka mtb hai ki apne variable ko create kr diya but usme koi value assign nhi ki (Declaration ka matlab hai ki apne variable ko create kr diya hai but usme koi value assign nhi ki) 

// Initialization ( Definition ) ka mtb hai ki apne variable ko create kr diya aur usme value assign bhi krdi 

// Initialization ka matlab hai ki apne variable ko create kr diya aur usme value assign bhi krdi)

// Manipulation Or Updation Also called as Re-Initialization ( Manipulation ka matlab hai ki apne variable me jo value store hai usko change krna ya update krna)







/* C++ Datatypes - Primitive Datatypes or Built-in Datatypes ( Primitive Datatypes - int, float, double, char, bool , void )
                    Derived Datatypes
                    User-defined Datatypes */
                




#include <iostream>
using namespace std;

int main() {

    // int
    int count = 5;

    // float
    float share = 3.14;

    // char
    char alphabet = 'z';

    // double
    double weight = 55.68891;

    // boolean
    bool isMale = true;
    bool isBoy = 1;
    bool isFemale = false;
    bool isGirl = 0;
// In boolean 1 is True And 0 is False



    cout << count << endl;
    cout << share << endl;
    cout << alphabet << endl;
    cout << weight << endl;
    cout << isMale << endl;


    return 0;
}










// For Size Of Datatypes -

#include <iostream>
using namespace std;

int main() {

    int age = 12;
    cout << sizeof(age) << endl;

// Integer Store 4 Bytes (32 bits)
// Short int Store 2 Bytes (16 bits)
// Long int Store 4 Bytes
// Float Store 4 Bytes
// Double Store 8 Bytes
// Char Store 1 Bytes (8 bits)
// Bool Store 1 Bytes

// A single bit is equal to a binary digit that holds a value of either 0 or 1. 

    cout << "int: " << sizeof(int) << endl;
    cout << "short: " << sizeof(short) << endl;
    cout << "long: " << sizeof(long) << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) << endl;
    cout << "char: " << sizeof(char) << endl;
    cout << "bool: " << sizeof(bool) << endl;

    return 0;
}





// For Range of int we write ->>
// Signed case:- 2^(n-1) to 2^(n-1) - 1
// Unsigned case:- 0 to 2^n - 1


// Memory ke andr 1 Byte hi smallest addresable space h. that's why boolean take 1 bytes not 1 bit. 








/*
---------------------------------------------------------------------------------------------------------------------------------------
---------------------------------------------------------- Part 2 ---------------------------------------------------------------------
---------------------------------------------------------------------------------------------------------------------------------------
*/



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



#include <iostream>
using namespace std;

int main() {
    

int i = 10;
long l = 20;
short s = 30;
float f = 40.5;
double d = 50.5;
char c = 'A';
bool b = true;

cout << "Integer : " << i << endl;
cout << "Long Integer : " << l << endl;
cout << "Short Integer : " << s << endl;
cout << "Float : " << f << endl;
cout << "Double : " << d << endl;
cout << "Character : " << c << endl;
cout << "Boolean : " << b << endl;






//Garbage Value - ( Random Value ) 
//Jab aap variable ko declare krte ho or usko initialize nhi krte ho to usme garbage value store hoti h

int i;
cout << i << endl;
float f;
cout << f << endl;

    return 0;
}
