
// ==========================================
//       Decimal to Binary Conversion
// ==========================================


#include <iostream>
using namespace std;

int main() {
    int n;
    int answer = 0;
    int place = 1;

    cout << "Enter a decimal number to convert into binary: ";
    cin >> n;

    // Handle zero separately
    if (n == 0) {
        cout << "Binary of the given number is: 0" << endl;
    }
    else if (n > 0) {

        // Repeat until n becomes zero
        while (n > 0) {

            // Find the remainder after dividing by 2
            int remainder = n % 2;

            // Add the remainder at the correct place
            answer = answer + remainder * place;

            // Divide n by 2
            n = n / 2;

            // Move to the next decimal place
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

