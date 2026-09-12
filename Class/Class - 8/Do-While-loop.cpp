
// Do While Loop ek baar to chlta hi hai bhale wo condition True Ho ya False. 

#include <iostream>
#include <cmath>
using namespace std;

int main (){

    int i = 1;
    do{
        cout << "Hello" << endl;
        i++;
    }
    while( i <= 5 );







     int i = 10;
    do{
        cout << "Hello" << endl;
        i++;
    }
    while( i <= 5 );
// This Condition Is False



    return 0;
}















// Guess Input Game 

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main (){

    int num = rand();
    cout << num << endl;
Isme hr baar same number generate ho rha hai

    int num = rand()%10+1;
    cout << num << endl;


    srand (time(0));
    int num = rand()%10+1;
    cout << num << endl;
// Time ke sath change horha hai 




    int guess = 0;
    srand (time(0));
    int random = rand()%10+1;
      cout << random << endl;
    

    do{
        cout << "Guess the Number Between 1 to 10" << endl;
        cin >> guess;
        if (guess > random)
        cout << "Too High" << endl;
        else if (guess < random)
        cout << "Too Low" << endl;
        else
        cout << " Congratulation, Your Guess Is Correct !!" << endl;
    }
    while(guess != random);


    return 0;
}