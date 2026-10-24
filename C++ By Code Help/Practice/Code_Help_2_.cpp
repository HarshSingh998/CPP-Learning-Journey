
// Code Help Question From 201 To 210. 


// Voting Eligibility Checker

#include <iostream>
using namespace std;

int main(){

    int age;

    cout << "Enter Your Age :- " << endl;
    cin >> age;

    if(age >= 18){
        cout << "Eligible To Vote" << endl;
    }
    else{
        cout << "Not Eligible To Vote" << endl;
    }

    return 0;
}








// Check Number Sign ( Write a program to check whether an integer is Positive, Negative, or Zero using conditional statements. )

#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    if (num > 0) {
        cout << "Positive";
    }
    else if (num < 0) {
        cout << "Negative";
    }
    else {
        cout << "Zero";
    }

    return 0;
}



























