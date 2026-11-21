
/*
📌 Question: Running Sum of 1D Array

Write a C++ program to read an integer N and N integers into an array, then calculate and print the running sum of the array.

The running sum is the sum of all elements from the beginning of the array up to the current index.

Example 1:
Input: 5
1 2 3 4 5

Calculation: 1, 1+2, 1+2+3, 1+2+3+4, 1+2+3+4+5

Output: 1 3 6 10 15

Example 2:
Input: 5
1 1 1 1 1

Output: 1 2 3 4 5

Example 3:
Input: 5
3 1 2 10 1

Output: 3 4 6 16 17

Constraints:
1 <= N <= 1000
-10^6 <= nums[i] <= 10^6

*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int N;
    cin >> N;

    int arr[N];

    // Input array elements
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Calculate running sum
    int sum = 0;

    for (int i = 0; i < N; i++) {
        sum += arr[i];
        cout << sum << " ";
    }

    return 0;
}















/*
📌 Question: Min and Max in Array

Write a C++ program to read an integer N and N integers into an array, then find and print the minimum and maximum elements present in the array.

Example 1:
Input: 6
1 4 3 5 8 6

Calculation: Minimum element = 1 and Maximum element = 8.

Output: 1 8

Example 2:
Input: 5
10 20 5 30 15

Output: 5 30

Example 3:
Input: 4
7 7 7 7

Output: 7 7

Constraints:
1 <= N <= 10^5
1 <= arr[i] <= 10^9

Time Limit: 2000ms
Memory Limit: 256MB

*/

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int N;
    cin >> N;

    vector<int> arr(N);

    // Input array elements
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Initialize minimum and maximum
    int minimum = arr[0];
    int maximum = arr[0];

    // Find minimum and maximum
    for (int i = 1; i < N; i++) {

        if (arr[i] < minimum) {
            minimum = arr[i];
        }

        if (arr[i] > maximum) {
            maximum = arr[i];
        }
    }

    cout << minimum << " " << maximum;

    return 0;
}













/*
📌 Question: Maximum Difference

Write a C++ program to read an integer N and N integers into an array, then find the maximum absolute difference between the nearest smaller element on the left and the nearest smaller element on the right for every array element.

For each element:
- Find the nearest smaller element on its left.
- Find the nearest smaller element on its right.
- If no smaller element exists on either side, consider its value as 0.
- Calculate the absolute difference between these two values.

Return or print the maximum absolute difference.

Example 1:
Input: 3
2 1 8

Calculation:
Left Smaller  = [0, 0, 1]
Right Smaller = [1, 0, 0]

Maximum Difference = max(|0-1|, |0-0|, |1-0|)

Output: 1

Example 2:
Input: 4
5 1 4 2

Left Smaller  = [0, 0, 1, 1]
Right Smaller = [1, 0, 2, 0]

Output: 1

Constraints:
1 <= N <= 10^6
1 <= arr[i] <= 10^9

Time Limit: 2000ms
Memory Limit: 256MB

💡 Hint:
Use a Monotonic Stack to efficiently find the nearest smaller elements on both sides.

*/

#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main() {

    int N;
    cin >> N;

    vector<long long> arr(N);
    vector<long long> left(N, 0);
    vector<long long> right(N, 0);

    stack<long long> st;

    // Input Array
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Nearest Smaller Element on Left
    for (int i = 0; i < N; i++) {

        while (!st.empty() && st.top() >= arr[i]) {
            st.pop();
        }

        if (!st.empty()) {
            left[i] = st.top();
        }

        st.push(arr[i]);
    }

    // Clear Stack
    while (!st.empty()) {
        st.pop();
    }

    // Nearest Smaller Element on Right
    for (int i = N - 1; i >= 0; i--) {

        while (!st.empty() && st.top() >= arr[i]) {
            st.pop();
        }

        if (!st.empty()) {
            right[i] = st.top();
        }

        st.push(arr[i]);
    }

    // Maximum Absolute Difference
    long long maxDiff = 0;

    for (int i = 0; i < N; i++) {

        long long diff = abs(left[i] - right[i]);

        maxDiff = max(maxDiff, diff);
    }

    cout << maxDiff << endl;

    return 0;
}













/*
📌 Question: Best Time to Buy and Sell Stock II

Write a C++ program to read an integer N and N integers into an array representing stock prices on different days, then calculate the maximum profit by completing as many transactions as possible.

You can buy and sell stocks multiple times, but you can hold only one share at a time. You must sell the stock before buying again.

If no profitable transaction is possible, print 0.

Example 1:
Input: 6
7 1 5 3 6 4

Calculation:
Buy at 1 and sell at 5 = Profit 4
Buy at 3 and sell at 6 = Profit 3

Total Profit = 4 + 3 = 7

Output: 7

Example 2:
Input: 5
1 2 3 4 5

Output: 4

Example 3:
Input: 5
7 6 4 3 1

Output: 0

Constraints:
1 <= N <= 30000
0 <= prices[i] <= 10000

Time Limit: 2000ms
Memory Limit: 256MB

*/

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int N;
    cin >> N;

    vector<int> prices(N);

    // Input stock prices
    for (int i = 0; i < N; i++) {
        cin >> prices[i];
    }

    // Initialize total profit
    int profit = 0;

    // Calculate maximum profit
    for (int i = 1; i < N; i++) {

        if (prices[i] > prices[i - 1]) {
            profit += prices[i] - prices[i - 1];
        }
    }

    cout << profit;

    return 0;
}
