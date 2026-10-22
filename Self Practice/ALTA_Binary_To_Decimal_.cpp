// ==========================================
//       Binary to Decimal Conversion
// ==========================================

#include <iostream>
using namespace std;

int main() {
    int n;
    int answer = 0;
    int place = 1;

    cout << "Enter a binary number: ";
    cin >> n;

    while (n > 0) {

        // Extract the last digit
        int remainder = n % 10;

        // Check if the digit is valid
        if (remainder != 0 && remainder != 1) {
            cout << "Invalid binary number." << endl;
            return 0;
        }

        // Add digit at the correct place value
        answer = answer + remainder * place;

        // Move to the next power of 2
        place = place * 2;

        // Remove the last digit
        n = n / 10;
    }

    cout << "Decimal of the given number is: "
         << answer << endl;

    return 0;
}