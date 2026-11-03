
// ==========================================
//       Decimal to Binary Conversion
// ==========================================


#include <iostream>
using namespace std;

int decimalToBinary ( int decNum ){
    int ans = 0;
    int power = 1;

    while (decNum > 0){
        int rem = decNum % 2;
        decNum = decNum / 2;

        ans += ( rem * power);
        power *= 10;
    }
    return ans ;          // Binary Form
}

int main(){

    int decNum = 50;

    cout << "Decimal To Binary : " << decimalToBinary(decNum) << endl;

    return 0;
}














// Binary Number From 1 To 10

#include <iostream>
using namespace std;

int decimalToBinary(int decNum) {
    int ans = 0;
    int power = 1;

    while (decNum > 0) {
        int rem = decNum % 2;
        decNum = decNum / 2;

        ans += (rem * power);
        power *= 10;
    }

    return ans;
}

int main() {

    for (int i = 1; i <= 10; i++) {
        cout << "Binary Number : " << decimalToBinary(i) << endl;
    }

    return 0;
}

