/*

📌 Function Definition - 
A Function is a group of multiple lines of code that performs a specific task. It can take some input, process the input, and give an output/result.

🧠 Easy to Remember ->>  Input → Process → Output




Why do we need Functions?

1. To avoid repetition of code.
2. To make the code more readable.
3. To make the code more maintainable.
4. To make the code more reusable.
5. To Help in debugging and testing.


If I Can't Use Functions, Then What Will Happen?

1. Code will be very long and complex.
2. Code will be very difficult to read and understand.
3. Code will be very difficult to maintain.
4. Code will be very difficult to debug and test.
5. Code will be very difficult to reuse.

*/






/*

A Function Can Be Void or Non-Void.
In Void Function, we don't return any value from the function. 
In Non-Void Function, we return some value from the function. ( int, float, char, string, etc. )




Function Anatomy ->

return_type function_name(input_parameter_list) {
    // Function Body
    // Code to be executed
    return value; // Optional
}



Declaration of Function -
return_type function_name(input_parameter_list);

// Function Declaration -
int getSum(int a, int b); 




Definition of Function -
return_type function_name(input_parameter_list) {
    // Function Body
    // Code to be executed
    return value; // Optional
}

// Function Definition - 
int getSum(int a, int b) { 
    int totalSum = a + b;
    return totalSum;
}


*/




#include <iostream>
using namespace std;

int sum(int a, int b) {
    int totalSum = a + b;
    return totalSum;
}


void printMyName() {
    cout << "My Name Is Harsh " << endl;
}

int main() {


    int ans = sum(5, 10); // Function Call
    cout << ans << endl;


    // Function Call
    printMyName();


    return 0;
}




/* 

Aap khi par bhi kisi functions ko call krte hai to agr us function ke upar us function ka at least
declaration exist nhi krti hai to aapka function nhi chalega.

Isliye hamesha function ko call krne se pehle uska declaration hona chahiye.

*/



// Writing our First Function -



#include <iostream>
using namespace std;

int getMultiplicaation (int x, int y , int z) {
    int result = x * y * z;
    return result;
}


void printNameTenTimes() {
    for (int i = 0; i < 10; i++) {
        cout << "Harsh Singh" << endl;
    }
}


void printMultiples(int n) {
    for (int i = 1; i <= 10; i++) {
        cout << n * i << endl;
    }
}


int convertIntoCelsius(int fahrenheit) {
    int celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}


char convertIntoUppercase(char ch) {
    char answer = ch - 'a' + 'A';
    return answer;
}




int main() {

    int ans = getMultiplicaation(2, 3, 4); // Function Call
    cout << ans << endl;


    printNameTenTimes();


    printMultiples(5);


    int fahrenheit = 100;
    int celsius = convertIntoCelsius(fahrenheit);
    cout << fahrenheit << " Fahrenheit is equal to " << celsius << " Celsius." << endl;


    char ch = 'a';
    char upperCase = convertIntoUppercase(ch);
    cout << ch << " in uppercase is " << upperCase << endl;


    return 0;
}








