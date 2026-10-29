



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

