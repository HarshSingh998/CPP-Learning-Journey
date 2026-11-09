
/*
1. WAF to calculate sum & product of all numbers in an array.

Input:
nums[] = {2, 3, 4, 5}

Output:
Sum: 14
Product: 120

*/


#include <iostream>
using namespace std;

int main() {

    int nums[] = {2, 3, 4, 5};
    int size = 4;

    int sum = 0;
    int product = 1;

    for (int i = 0; i < size; i++) {
        sum += nums[i];
    }

    for (int i = 0; i < size; i++) {
        product *= nums[i];
    }

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;

    return 0;
}












/*
2. WAF to swap the maximum & minimum numbers of an array.

Input:
nums[] = {5, 15, 22, 1, -15, 24}

Output:
Array After Swapping: 5 15 22 24 -15 1

*/


#include <iostream>
using namespace std;

int main() {

    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = 6;

    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 0; i < size; i++) {
        if (nums[i] < nums[minIndex]) {
            minIndex = i;
        }
    }

    for (int i = 0; i < size; i++) {
        if (nums[i] > nums[maxIndex]) {
            maxIndex = i;
        }
    }

    swap(nums[minIndex], nums[maxIndex]);

    cout << "Array After Swapping: ";

    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}












/*
3. WAF to print all the unique values in an array.

Input:
nums[] = {1, 2, 3, 2, 4, 1, 5}

Output:
Unique Elements: 1 2 3 4 5

*/


#include <iostream>
using namespace std;

int main() {

    int nums[] = {1, 2, 3, 2, 4, 1, 5};
    int size = 7;

    cout << "Unique Elements: ";

    for (int i = 0; i < size; i++) {

        bool isUnique = true;

        for (int j = 0; j < i; j++) {
            if (nums[i] == nums[j]) {
                isUnique = false;
                break;
            }
        }

        if (isUnique) {
            cout << nums[i] << " ";
        }
    }

    return 0;
}














/*
4. WAF to print the intersection of two arrays.

Input:
arr1[] = {1, 2, 3, 4, 5}
arr2[] = {3, 4, 5, 6, 7}

Output:
Intersection: 3 4 5

*/


#include <iostream>
using namespace std;

int main() {

    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};

    int size1 = 5;
    int size2 = 5;

    cout << "Intersection: ";

    for (int i = 0; i < size1; i++) {

        for (int j = 0; j < size2; j++) {

            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;
            }
        }
    }

    return 0;
}
