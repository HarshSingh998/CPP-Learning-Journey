
// ==========================================
//       Binary to Decimal Conversion
// ==========================================


#include <iostream>
using namespace std;

int binaryToDecimal (int binNum){
    int ans = 0;
    int power = 0;

    while(binaryToDecimal > 0){
        int rem = binNum % 10;
        ans += rem * power ;

        binNum /= 10 ;
        power *= 2;
    }
    return ans;          // Decimal Form
}

int main(){

    cout << "Binary To Decimal : " << binaryToDecimal ( 101 ) << endl;

    return 0;
}
