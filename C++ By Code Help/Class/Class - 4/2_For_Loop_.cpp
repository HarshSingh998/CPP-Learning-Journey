
// For Loop in C++ Syntax  - 
for (initialization; condition; update) {
    // Body of the loop (code to be executed)
}




#include <iostream>
using namespace std;

int main() {

    for(int count = 1; count <= 10; count++) {
        cout << "Harsh Singh" << endl;
    }

    for(int count = 1; count <= 10; count = count + 1) {
    cout << "Harsh Singh" << endl;
    }

// Both loops are same but in second loop we have used count = count + 1 instead of count++ which is same as count = count + 1

    // Counting from 1 to 10 using for loop
    for(int i = 1; i <=10 ; i++) {
        cout << i << endl;
    }

    // Counting from 51 to 69 using for loop
    for(int i = 51; i <=69 ; i++) {
        cout << i << endl;
    }

    return 0;
}








// Break keyword - Loop ko break krne ke liye use hota hai jo loop se bahar nikal deta hai. 


#include <iostream>
using namespace std;

int main() {

    for(int i = 1; i <=10 ; i++) {
        cout << i << " ";
        if(i == 5) {
            break; // Loop ko break kr diya
    }
}


    for(int i = 1; i <=10 ; i++) {
        if(i == 5) {
            break;
        }
        cout << "Iteration " << i << endl;
    }

    return 0;
}








// Continue keyword - Loop ko continue krne ke liye use hota hai jo loop ke current iteration ko skip kr deta hai aur next iteration me chala jata hai.

#include <iostream>
using namespace std;

int main() {

    for(int i = 1; i <=10 ; i++) {
        if(i == 5) {
            continue;  
            // Loop ke current iteration ko skip kr diya aur next iteration me chala gya;
    }
        cout << i << " ";
    
}


    for(int i = 1; i <=5 ; i++) {
        if(i == 3) {
            continue;
        }
        cout << "Iteration " << i << endl;
    }

    return 0;
}

