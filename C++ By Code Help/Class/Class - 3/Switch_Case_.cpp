
// Not A Example Of Switch Case 

#include <iostream>
using namespace std;

int main() {

    char grade;
    cout << "Enter Your Grade :- " << endl;
    cin >> grade;

    if(grade == 'A') {
        cout << "Your Marks Will Be In Range Of 90 to 100" << endl;
    }
    else if(grade == 'B') {
        cout << "Your Marks Will Be In Range Of 80 to 90 " << endl;
    }
    else if(grade == 'C') {
        cout << "Your Marks Will Be In Range Of 70 to 80" << endl;
    }
    else if(grade == 'D') {
        cout << "Your Marks Will Be In Range Of 60 to 70" << endl;
    }
    else {
        cout << "Your Marks Will Be In Range Of 0 to 60" << endl;
    }

    return 0;
}






// Jab Bhi mujhe comparison krna hai to ( == ) sign ka use krta hu in c++ 




/*
A switch statement in C++ is like a multiple-choice menu. It looks at the value of a single variable and jumps directly to the "case" that matches that value.
Instead of writing a long, messy chain of if-else if-else statements, you use switch to make your code much cleaner and easier to read. 
*/


/*
We use break in switch to stop execution after the matching case. ( Switch Case me hr ek case ke baad break lagana padega. )
👉 break = exit the switch
Without break, C++ may continue into the next cases (fall-through).
*/






// Switch Case Example - 1

#include <iostream>
using namespace std;

int main() {

    char grade;
    cout << "Enter Your Grade :- " << endl;
    cin >> grade;

    switch(grade){
        case 'A' : cout << "Your Marks Will Be In Range Of 90 to 100" << endl;
        break;
        case 'B' : cout << "Your Marks Will Be In Range Of 80 to 90 " << endl;
        break;
        case 'C' : cout << "Your Marks Will Be In Range Of 70 to 80" << endl;
        break;
        case 'D' : cout << "Your Marks Will Be In Range Of 60 to 70" << endl;
        break;
        default : cout << "Your Marks Will Be In Range Of 0 to 60" << endl;
    }


    return 0;
}









// Switch Case Example - 2

#include <iostream>
using namespace std;

int main() {

    int day;
    cout << "Enter Your Number Of Day" << endl;
    cin >> day;

    switch (day){
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        default:
            cout << "Weekend" << endl;
    }

    return 0;
}




/*
switch case me expression ( yani jha aapne ye likha hai switch (day) ) me sirf integer, char, or enum ka use kr skte hai. 
or aap string , float, double or non integral values ka use nahi kr skte hai.
*/





