
// ==========================================
//       GCD (Greatest Common Divisor)
// ==========================================

#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int a, b;

    cout << "Enter two numbers to find GCD: ";
    cin >> a >> b;

    // Start checking from the smaller number
    for (int i = min(a, b); i >= 1; i--) {

        // Check if i divides both numbers completely
        if (a % i == 0 && b % i == 0) {

            cout << "GCD of " << a << " and " << b
                 << " is: " << i << endl;

            // Stop after finding the GCD
            break;
        }
    }
    return 0;
}







/*

<algorithm> is a C++ library that provides
useful functions for working with data.

Why do we use it?
We use it when we need functions like min()
and max() in our program.

1. min(a, b)
Returns the smaller value.

Example:
min(12, 18) = 12

2. max(a, b)
Returns the larger value.

Example:
max(12, 18) = 18

*/