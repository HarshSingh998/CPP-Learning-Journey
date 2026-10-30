

// Control Flow Statement OR Conditional Statement

/*
---------------------------------------------------------------------------------------------------------------------------------------
---------------------------------------------------------- Part - 1  ------------------------------------------------------------------
---------------------------------------------------------------------------------------------------------------------------------------
*/


// Decision Making ->>>

// If Statement Syntax ( Rule ) to buy Scorpio

#include <iostream>
using namespace std;

int main() {

    int budget;
    cout << "Enter Your Budget :- " << endl;

    cin >> budget;

    if ( budget > 2000000 ) {
        cout << "Your Can Buy Scorpio" << endl;
    }

    return 0;
}










// Ifelse Statement Syntax ( Rule ) to buy Scorpio

#include <iostream>
using namespace std;

int main() {

    int budget;
    cout << "Enter Your Budget :- " << endl;

    cin >> budget;

    if ( budget > 2000000 ) {
        cout << "Your Can Buy Scorpio" << endl;
    }
    else{
        cout << "You Can't But Scorpio" << endl;
    }


// Another Example - For To Give Vote Or Not

    int age = 100;
    if (age > 18) {
        cout << "You Can Vote" << endl;
    }
    else{
        cout << "You Can't Vote" << endl;
    }




    return 0;
}











// If-else if Statement Syntax ( Rule )

#include <iostream>
using namespace std;

int main() {

    int marks = 65;

    if ( marks > 90 ) {
        cout << "A" << endl;
    }
    else if ( marks > 80 ) {
        cout << "B" << endl;
    }
    else if ( marks > 70 ) {
        cout << "C" << endl;
    }
    else if ( marks > 60 ) {
        cout << "D" << endl;
    }



    return 0;
}










// If-else if-else Statement Syntax ( Rule )

#include <iostream>
using namespace std;

int main() {

    int marks = 55;

    if ( marks > 90 ) {
        cout << "A" << endl;
    }
    else if ( marks > 80 ) {
        cout << "B" << endl;
    }
    else if ( marks > 70 ) {
        cout << "C" << endl;
    }
    else if ( marks > 60 ) {
        cout << "D" << endl;
    }
    else {
        cout << "Fail" << endl;
    }



    return 0;
}










// Nested If Statement Syntax ( Rule )

#include <iostream>
using namespace std;

int main() {

   int height;
   cout << "Enter Your Height In Feet :- " << endl;
   cin >> height;

   int weigth;
   cout << "Enter Your Weight in Kg :- " << endl;
   cin >> weigth;

   if(height > 5) {

    if(weigth > 70) {
        cout << "You Got A Good BMI" << endl;
    }
    else{
        cout << "Tujhse Na Ho Payega" << endl;
    }
   }
   else{
    cout << "Complain Pile Jake" << endl;
   }



    return 0;
}











/*
---------------------------------------------------------------------------------------------------------------------------------------
---------------------------------------------------------- Part - 2  ------------------------------------------------------------------
---------------------------------------------------------------------------------------------------------------------------------------
*/



// Who Can Give Vote  ->>>

#include <iostream>
using namespace std;

int main () {

int age = 19;

if ( age >= 18 ){
    cout << " Valid Voter" << endl;
}
else {
    cout << " Not A Valid Voter" << endl;
}

return 0;
}






// In Two Number Which Is Greater 

#include <iostream>
using namespace std;

int main () {

int a = 7;
int b = 10;
if ( a > b ){
    cout << a << endl;
}
else {
    cout << b << endl;
}

return 0;
}




// else if ladder use in multiple condition and sab me se jo true ho whi chle baki na chle 

#include <iostream>
using namespace std;

int main () {

int a = 10 , b = 20 ;

if ( a <= 50 ){
    cout << "Line 1" << endl;
}

else if ( 10 > 7){
    cout << "Line 2" << endl;
}

else if ( 100 > 7){
    cout << "Line 3" << endl;
}

else if ( 10 > 17){
    cout << "Line 4" << endl;
}

else {
    cout << "Last else" << endl;
}

return 0;
}






#include <iostream>
using namespace std;

int main () {

int a = 10 , b = 20 ;

if ( a > 50 ){
    cout << "Line 1" << endl;
}

else if ( 10 < 7){
    cout << "Line 2" << endl;
}

else if ( 100 > 7){
    cout << "Line 3" << endl;
}

else if ( 10 > 17){
    cout << "Line 4" << endl;
}

else {
    cout << "Last else" << endl;
}

return 0;
}







#include <iostream>
using namespace std;

int main () {

int a = 10 , b = 20 ;

if ( a > 50 ){
    cout << "Line 1" << endl;
}

else if ( 10 < 7){
    cout << "Line 2" << endl;
}

else if ( 100 < 7){
    cout << "Line 3" << endl;
}

else if ( 10 > 17){
    cout << "Line 4" << endl;
}

else {
    cout << "Last else" << endl;
}

return 0;
}








#include <iostream>
using namespace std;

int main () {

int a = 10 , b = 20 ;

if ( a < 50 ){
    cout << "Line 1" << endl;
}

if ( 10 > 7){
    cout << "Line 2" << endl;
}

if ( 100 > 7){
    cout << "Line 3" << endl;
}

if ( 10 < 17){
    cout << "Line 4" << endl;
}

else {
    cout << "Last else" << endl;
}

return 0;
}





#include <iostream>
using namespace std;

int main () {

int a = 10 , b = 20 ;

if ( a < 50 ){
    cout << "Line 1" << endl;
}

if ( 10 > 7){
    cout << "Line 2" << endl;
}

if ( 100 > 7){
    cout << "Line 3" << endl;
}

if ( 10 > 17){
    cout << "Line 4" << endl;
}

else {
    cout << "Last else" << endl;
}

return 0;
}






// Difference b/w IF Ladder And Else Ladder -:  If Is independent but else if is dependent 
