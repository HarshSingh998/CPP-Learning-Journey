
// Char Arrays & Strings In C++ 

/*

Char Arrays ( Character Arrays ) are used to store a sequence of characters.
In C++, a char array is a collection of characters that can be manipulated as a single entity.
terminated by a null character ( \0 ) to indicate the end of the string.

ASCII Value Of Null Character ( \0 ) is 0. 

*/



// #include <iostream>
// using namespace std;

// int main() {
//     // Declaring a char array of size 20
//     char arr[20];

//     // Taking input from user
//     cout << "Enter a string: ";
//     cin.getline(arr, 20); // Using getline to read a line of text

//     // Displaying the entered string
//     cout << "You entered: " << arr << endl;

//     return 0;
// }











// #include <iostream>
// using namespace std;

// int main() {

    // Declare
    // char arr[10];



    // char arr[10] = "Harsh";
    // cout << arr[0] << endl;
    // cout << arr[1] << endl;
    // cout << arr[2] << endl;
    // cout << arr[3] << endl;
    // cout << arr[4] << endl;
    

    // cout << "Printing 5th Index : " << arr[6] << endl;
    // int asciiValue = arr[5];
    // cout << asciiValue << endl;




    // char arr[4];
    // arr[0] = 'a';
    // arr[1] = 'b';
    // arr[2] = '\0';
  

//     return 0;
// }










// Cout Behaviour

// #include <iostream>
// using namespace std;

// int main() {

//     // int brr[4] = {1,2,3,4};
//     // cout << brr << endl;
//     // Yha Par BASE Address Print Hoga




//     char arr[5] = "Love";
//     cout << arr << endl;

//     for(int i = 0 ; i < 5 ; i++){
//         cout << arr[i] << " " << endl;
//     }

//     // Ye BASE Address Print Nhi krta ye Entire Sequence Of Character Print krta hai jb tk null character nhil milta

//     return 0;
// }





// Common Operations -->>  Find Length , Copying , Concatenation , Comparison

#include <iostream>
using namespace std;

int getLength (char arr[]){
    int count = 0;
    int index = 0;
    while (arr [index] != '\0'){
        count++;
        index++;
    }
    return count;
}

int main() {

    char arr[] = "Harsh Singh";
    cout << getLength(arr) << endl;


    

    return 0;
}



















