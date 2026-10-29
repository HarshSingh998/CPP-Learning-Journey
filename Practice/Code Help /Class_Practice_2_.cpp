// Class - 6

/*

1. Print counting 1 to 100
2. Simple Interest using Function
3. Print Prime Numbers from 1 to 100
4. Check Voting Eligibility
5. SIP Calculator using Function

*/


#include <iostream>
using namespace std;

void counting(){
    for(int i = 1; i <= 100; i++){
        cout << i << " ";
    }
}

int main(){

    counting();

    return 0;
}












#include <iostream>
using namespace std;

void simpleInterest(){
    float p, r, t, si;

    cout << "Enter Principal: ";
    cin >> p;

    cout << "Enter Rate: ";
    cin >> r;

    cout << "Enter Time: ";
    cin >> t;

    si = (p * r * t) / 100;

    cout << "Simple Interest = " << si;
}

int main(){

    simpleInterest();

    return 0;
}












#include <iostream>
using namespace std;

void primeNumbers(){
    for(int n = 2; n <= 100; n++){
        int count = 0;

        for(int i = 1; i <= n; i++){
            if(n % i == 0){
                count++;
            }
        }

        if(count == 2){
            cout << n << " ";
        }
    }
}

int main(){

    primeNumbers();

    return 0;
}











#include <iostream>
using namespace std;

void voting(){
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if(age >= 18){
        cout << "Eligible for Voting";
    }
    else{
        cout << "Not Eligible for Voting";
    }
}

int main(){

    voting();

    return 0;
}











#include <iostream>
#include <cmath>
using namespace std;

void sipCalculator(){
    double monthlyInvestment;
    double annualRate;
    int years;

    cout << "Enter Monthly Investment: ";
    cin >> monthlyInvestment;

    cout << "Enter Annual Rate of Return (%): ";
    cin >> annualRate;

    cout << "Enter Time in Years: ";
    cin >> years;

    double monthlyRate = annualRate / (12 * 100);
    int months = years * 12;

    double amount = monthlyInvestment *
                    ((pow(1 + monthlyRate, months) - 1)
                    / monthlyRate) *
                    (1 + monthlyRate);

    cout << "Estimated SIP Amount = " << amount;
}

int main(){
    
    sipCalculator();

    return 0;
}




