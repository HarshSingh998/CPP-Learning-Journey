
// Loops On Arrays -> ( Find Smallest & Largest Element In An Array )

#include <iostream>
using namespace std;

int main() {

    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = 6;

    int smallest = INT_MAX; 
    // Initialize smallest to the maximum integer value ( In Programming me +ve infinity Ko represent karne ke liye INT_MAX ka use hota hai )
    int largest = INT_MIN;
    // Initialize largest to the minimum integer value ( In Programming me -ve infinity Ko represent karne ke liye INT_MIN ka use hota hai )

    for( int i = 0; i < size; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
        }

    }

    for( int i = 0; i < size; i++){
        if(nums[i] > largest){
            largest = nums[i];
        }
    }

    cout << "Smallest Element: " << smallest << endl;
    cout << "Largest Element: " << largest << endl;

    return 0;
}





/*

For Loop -> ( Find Smallest & Largest Element In An Array )
! Smallest Element In An Array : 
if(nums[i] < smallest){
smallest = nums[i];
}

It Also Written As :
smallest = min(nums[i], smallest );

! Largest Element In An Array :
if(nums[i] > largest){
largest = nums[i];
}

It Also Written As :
largest = max(nums[i], largest );

*/









// INT_MAX aur INT_MIN ke liye #include <climits> add karna hai.
// Loops On Arrays -> ( Find Smallest & Largest Element Along With Their Index In An Array )

#include <iostream>
#include <climits> 
using namespace std;

int main() {

    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = 6;
    
    int smallest = INT_MAX;
    int largest = INT_MIN;

    int smallestIndex = -1; // Initialize to -1 to indicate no index found yet
    int largestIndex = -1;  // Initialize to -1 to indicate no index found

    for( int i = 0; i < size; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
            smallestIndex = i; // Update the index of the smallest element
        }
    }

    for( int i = 0; i < size; i++){
        if(nums[i] > largest){
            largest = nums[i];
            largestIndex = i; // Update the index of the largest element
        }
    }

    cout << "Smallest Element: " << smallest << " at index: " << smallestIndex << endl;
    cout << "Largest Element: " << largest << " at index: " << largestIndex << endl;

    return 0;
}



