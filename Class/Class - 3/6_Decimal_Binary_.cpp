
// ==========================================
//       Decimal to Binary Conversion
// ==========================================


#include <iostream>
using namespace std;

int main() {
    int n;
    int answer = 0;
    int place = 1;

    cout << "Enter a Decimal number to convert into Binary: ";
    cin >> n;

    if (n == 0) {
        cout << "Binary of the given number is: 0" << endl;
    }
    else if (n > 0) {
        while (n > 0) {
            int remainder = n % 2;
            answer = answer + remainder * place;
            n = n / 2;
            place = place * 10;
        }

        cout << "Binary of the given number is: "
             << answer << endl;
    }
    else {
        cout << "Please enter a non-negative number." << endl;
    }

    return 0;
}

