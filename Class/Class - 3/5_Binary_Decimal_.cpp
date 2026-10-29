// ==========================================
//       Binary to Decimal Conversion
// ==========================================

#include <iostream>
using namespace std;

int main() {
    int n;
    int answer = 0;
    int place = 1;

    cout << "Enter a Binary number: ";
    cin >> n;

    while (n > 0) {
        int remainder = n % 10;
        if (remainder != 0 && remainder != 1) {
            cout << "Invalid binary number." << endl;
            return 0;
        }

        answer = answer + remainder * place;
        place = place * 2;

        n = n / 10;
    }

    cout << "Decimal of the given number is: "
         << answer << endl;

    return 0;
}