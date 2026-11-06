
/*
============================================================
       Strings + 2D Arrays + Searching + Sorting + Recursion
============================================================

============================================================
SECTION 9: STRINGS (101-120)
============================================================

Question:101 ->> Input and Print a String

Objective:
Given a string S, print the string.

Example:
Input: Hello
Output: Hello

Task:- Take a string as input and display it.


Question:102 ->> Find the Length of a String

Objective:
Given a string S, calculate its length.

Example:
Input: Harsh
Output: 5

Task:- Count the characters in the string.


Question:103 ->> Reverse a String

Objective:
Given a string S, print its reverse.

Example:
Input: Hello
Output: olleH

Task:- Reverse the string using a loop.


Question:104 ->> Palindrome String

Objective:
Determine whether a string reads the same
forward and backward.

Example:
Input: madam
Output: Palindrome

Task:- Reverse the string and compare it
with the original string.


Question:105 ->> Count Vowels and Consonants

Objective:
Given a string, count vowels and consonants.

Example:
Input: hello
Output:
Vowels: 2
Consonants: 3

Task:- Traverse the string and check each character.


Question:106 ->> Count Uppercase and Lowercase Characters

Objective:
Count uppercase and lowercase letters in a string.

Example:
Input: HelloWorld
Output:
Uppercase: 2
Lowercase: 8

Task:- Use character conditions to count letters.


Question:107 ->> Convert String to Uppercase

Objective:
Convert all lowercase letters into uppercase.

Example:
Input: hello
Output: HELLO

Task:- Convert each character to uppercase.


Question:108 ->> Convert String to Lowercase

Objective:
Convert all uppercase letters into lowercase.

Example:
Input: HELLO
Output: hello

Task:- Convert each character to lowercase.


Question:109 ->> Count Words in a String

Objective:
Given a sentence, count the number of words.

Example:
Input: I Love Coding
Output: 3

Task:- Count words separated by spaces.


Question:110 ->> Count Frequency of a Character

Objective:
Given a string S and character C,
count how many times C appears.

Example:
Input:
banana
a

Output: 3

Task:- Traverse the string and count matching characters.


Question:111 ->> Remove Spaces from a String

Objective:
Remove all spaces from a string.

Example:
Input: Hello World
Output: HelloWorld

Task:- Create a new string without spaces.


Question:112 ->> Replace a Character in a String

Objective:
Replace every occurrence of character A
with character B.

Example:
Input:
banana
a
o

Output: bonono

Task:- Traverse the string and replace characters.


Question:113 ->> Check Whether Two Strings are Equal

Objective:
Given two strings, check whether they are equal.

Example:
Input:
hello
hello

Output: Equal

Task:- Compare both strings.


Question:114 ->> Check Anagram Strings

Objective:
Determine whether two strings contain
the same characters in different arrangements.

Example:
Input:
listen
silent

Output: Anagram

Task:- Compare character frequencies or sort both strings.

(Note: Assume lowercase English letters.)


Question:115 ->> First Character of a String

Objective:
Given a non-empty string, print its first character.

Example:
Input: Coding
Output: C

Task:- Access the first character using indexing.


Question:116 ->> Last Character of a String

Objective:
Given a non-empty string, print its last character.

Example:
Input: Coding
Output: g

Task:- Access the last character using string length.


Question:117 ->> Remove Duplicate Characters

Objective:
Remove repeated characters while preserving
the first occurrence of each character.

Example:
Input: programming
Output: progamin

Task:- Use character frequency or a visited array.


Question:118 ->> Find the First Non-Repeating Character

Objective:
Given a string, find the first character
that appears exactly once.

Example:
Input: aabbcde
Output: c

Task:- Count character frequencies and find
the first character with frequency one.


Question:119 ->> Find the First Repeating Character

Objective:
Find the first character that appears more than once.

Example:
Input: abca
Output: a

Task:- Traverse the string and identify repeated characters.


Question:120 ->> Toggle Case of Every Character

Objective:
Convert uppercase letters into lowercase
and lowercase letters into uppercase.

Example:
Input: HeLLo
Output: hEllO

Task:- Use character conditions to toggle case.


============================================================
SECTION 10: 2D ARRAYS / MATRICES (121-135)
============================================================

Question:121 ->> Input and Print a Matrix

Objective:
Given R rows and C columns, input and print a matrix.

Example:
Input:
2 2
1 2
3 4

Output:
1 2
3 4

Task:- Use nested loops to input and display elements.


Question:122 ->> Sum of All Matrix Elements

Objective:
Calculate the sum of all elements of a matrix.

Example:
Input:
2 2
1 2
3 4

Output: 10

Task:- Traverse the matrix and calculate the sum.


Question:123 ->> Find Maximum Element in a Matrix

Objective:
Find the maximum element in a matrix.

Example:
Input:
2 2
1 8
3 4

Output: 8

Task:- Traverse all matrix elements and maintain maximum.


Question:124 ->> Find Minimum Element in a Matrix

Objective:
Find the minimum element in a matrix.

Example:
Input:
2 2
1 8
3 4

Output: 1

Task:- Traverse all matrix elements and maintain minimum.


Question:125 ->> Sum of Each Row

Objective:
Calculate the sum of every row in a matrix.

Example:
Input:
2 3
1 2 3
4 5 6

Output:
6
15

Task:- Use nested loops and calculate row-wise sums.


Question:126 ->> Sum of Each Column

Objective:
Calculate the sum of every column in a matrix.

Example:
Input:
2 3
1 2 3
4 5 6

Output:
5 7 9

Task:- Use nested loops and calculate column-wise sums.


Question:127 ->> Main Diagonal Sum

Objective:
Calculate the sum of the main diagonal
of a square matrix.

Example:
Input:
3 3
1 2 3
4 5 6
7 8 9

Output: 15

Task:- Add elements where row index equals column index.


Question:128 ->> Secondary Diagonal Sum

Objective:
Calculate the sum of the secondary diagonal
of a square matrix.

Example:
Input:
3 3
1 2 3
4 5 6
7 8 9

Output: 15

Task:- Add elements where row index + column index
equals N - 1.


Question:129 ->> Transpose of a Matrix

Objective:
Given a matrix, print its transpose.

Example:
Input:
2 3
1 2 3
4 5 6

Output:
1 4
2 5
3 6

Task:- Swap row and column positions while printing.


Question:130 ->> Check Identity Matrix

Objective:
Determine whether a square matrix is an identity matrix.

Example:
Input:
3 3
1 0 0
0 1 0
0 0 1

Output: Identity Matrix

Task:- Check diagonal elements are 1
and all other elements are 0.


Question:131 ->> Check Symmetric Matrix

Objective:
Determine whether a square matrix is symmetric.

Example:
Input:
2 2
1 2
2 1

Output: Symmetric

Task:- Check whether A[i][j] equals A[j][i].


Question:132 ->> Matrix Addition

Objective:
Given two matrices of the same dimensions,
calculate their sum.

Example:
Input:
2 2
1 2
3 4
5 6
7 8

Output:
6 8
10 12

Task:- Add corresponding elements of both matrices.


Question:133 ->> Matrix Subtraction

Objective:
Given two matrices of the same dimensions,
calculate their difference.

Example:
Input:
2 2
5 6
7 8
1 2
3 4

Output:
4 4
4 4

Task:- Subtract corresponding elements.


Question:134 ->> Matrix Multiplication

Objective:
Given two compatible matrices,
calculate their product.

Example:
Input:
2 2
1 2
3 4
2 2
5 6
7 8

Output:
19 22
43 50

Task:- Use three nested loops to multiply matrices.


Question:135 ->> Count Zero Elements in a Matrix

Objective:
Count the number of zero elements in a matrix.

Example:
Input:
2 3
0 1 0
2 0 3

Output: 3

Task:- Traverse the matrix and count zero elements.


============================================================
SECTION 11: SEARCHING (136-150)
============================================================

Question:136 ->> Linear Search

Objective:
Given an array and target X,
find whether X exists in the array.

Example:
Input:
5
10 20 30 40 50
30

Output: Found

Task:- Traverse the array and compare each element with X.


Question:137 ->> Linear Search Using Function

Objective:
Create a function that searches for X in an array.

Example:
Input:
5
10 20 30 40 50
30

Output: 2

Task:- Create:
int linearSearch(vector<int>& arr, int X)

Return the index of X or -1 if not found.


Question:138 ->> Binary Search

Objective:
Given a sorted array and target X,
find its index using binary search.

Example:
Input:
5
10 20 30 40 50
40

Output: 3

Task:- Use left, right, and mid pointers
to perform binary search.


Question:139 ->> Binary Search Using Function

Objective:
Create a function that searches for X
in a sorted array.

Example:
Input:
5
10 20 30 40 50
30

Output: 2

Task:- Create:
int binarySearch(vector<int>& arr, int X)

Return index or -1 if not found.


Question:140 ->> First Occurrence of an Element

Objective:
Find the first occurrence of X in a sorted array.

Example:
Input:
6
1 2 2 2 3 4
2

Output: 1

Task:- Use binary search to find the first occurrence.


Question:141 ->> Last Occurrence of an Element

Objective:
Find the last occurrence of X in a sorted array.

Example:
Input:
6
1 2 2 2 3 4
2

Output: 3

Task:- Use binary search to find the last occurrence.


Question:142 ->> Count Occurrences Using Binary Search

Objective:
Count how many times X appears in a sorted array.

Example:
Input:
6
1 2 2 2 3 4
2

Output: 3

Task:- Find first and last occurrence
and calculate their difference + 1.


Question:143 ->> Search Insert Position

Objective:
Given a sorted array and target X,
find the position where X should be inserted.

Example:
Input:
4
1 3 5 6
2

Output: 1

Task:- Use binary search to find the insertion position.


Question:144 ->> Floor of an Element

Objective:
Given a sorted array and X,
find the largest element less than or equal to X.

Example:
Input:
5
1 3 5 7 9
6

Output: 5

Task:- Use binary search or linear traversal.


Question:145 ->> Ceiling of an Element

Objective:
Given a sorted array and X,
find the smallest element greater than or equal to X.

Example:
Input:
5
1 3 5 7 9
6

Output: 7

Task:- Use binary search or linear traversal.


Question:146 ->> Square Root Using Binary Search

Objective:
Given a non-negative integer N,
find its integer square root.

Example:
Input: 16
Output: 4

Task:- Use binary search to find the largest
integer whose square is not greater than N.


Question:147 ->> Search in a 2D Matrix

Objective:
Given a matrix and target X,
determine whether X exists in the matrix.

Example:
Input:
2 3
1 2 3
4 5 6
5

Output: Found

Task:- Traverse the matrix and search for X.


Question:148 ->> Find Missing Number Using Search

Objective:
Given a sorted array containing numbers from 1 to N
with one number missing, find the missing number.

Example:
Input:
5
1 2 4 5

Output: 3

Task:- Use binary search or sum formula.


Question:149 ->> Find Peak Element

Objective:
Given an array, find an element that is greater
than or equal to its neighbors.

Example:
Input:
5
1 3 5 4 2

Output: 5

Task:- Find a peak element using array traversal
or binary search.


Question:150 ->> Search in a Rotated Sorted Array

Objective:
Given a rotated sorted array and target X,
find the index of X.

Example:
Input:
6
4 5 6 7 0 1
0

Output: 4

Task:- Use binary search to search efficiently.


============================================================
SECTION 12: SORTING (151-170)
============================================================

Question:151 ->> Sort an Array in Ascending Order

Objective:
Given an array, arrange elements in ascending order.

Example:
Input:
5
5 2 4 1 3

Output:
1 2 3 4 5

Task:- Use any sorting algorithm.


Question:152 ->> Sort an Array in Descending Order

Objective:
Arrange array elements in descending order.

Example:
Input:
5
5 2 4 1 3

Output:
5 4 3 2 1

Task:- Sort elements from largest to smallest.


Question:153 ->> Bubble Sort

Objective:
Sort an array using Bubble Sort.

Example:
Input:
5
5 1 4 2 8

Output:
1 2 4 5 8

Task:- Repeatedly compare adjacent elements
and swap if they are in the wrong order.


Question:154 ->> Selection Sort

Objective:
Sort an array using Selection Sort.

Example:
Input:
5
64 25 12 22 11

Output:
11 12 22 25 64

Task:- Select the minimum element from the
unsorted portion and place it correctly.


Question:155 ->> Insertion Sort

Objective:
Sort an array using Insertion Sort.

Example:
Input:
5
5 2 4 6 1

Output:
1 2 4 5 6

Task:- Insert each element into its correct
position in the sorted portion.


Question:156 ->> Sort an Array Using Function

Objective:
Create a function to sort an array in ascending order.

Example:
Input:
5
5 3 1 4 2

Output:
1 2 3 4 5

Task:- Create:
void sortArray(vector<int>& arr)


Question:157 ->> Merge Two Sorted Arrays

Objective:
Given two sorted arrays, merge them
into one sorted array.

Example:
Input:
3
1 3 5
3
2 4 6

Output:
1 2 3 4 5 6

Task:- Use two pointers to merge the arrays.


Question:158 ->> Sort an Array of 0s and 1s

Objective:
Sort an array containing only 0 and 1.

Example:
Input:
6
1 0 1 0 1 0

Output:
0 0 0 1 1 1

Task:- Rearrange all zeros before ones.


Question:159 ->> Sort an Array of 0s, 1s and 2s

Objective:
Sort an array containing only 0, 1, and 2.

Example:
Input:
6
2 0 1 2 1 0

Output:
0 0 1 1 2 2

Task:- Use the Dutch National Flag algorithm
or counting approach.


Question:160 ->> Find Kth Smallest Element

Objective:
Given an array and K,
find the Kth smallest element.

Example:
Input:
5
7 10 4 3 20
3

Output: 7

Task:- Sort the array and access position K-1.


Question:161 ->> Find Kth Largest Element

Objective:
Given an array and K,
find the Kth largest element.

Example:
Input:
5
7 10 4 3 20
2

Output: 10

Task:- Sort the array and access the required position.


Question:162 ->> Check Whether Two Arrays are Equal

Objective:
Determine whether two arrays contain
the same elements in the same order.

Example:
Input:
3
1 2 3
3
1 2 3

Output: Equal

Task:- Compare corresponding elements.


Question:163 ->> Sort Characters in a String

Objective:
Given a string, sort its characters alphabetically.

Example:
Input: dcba
Output: abcd

Task:- Use a sorting algorithm or built-in sorting.


Question:164 ->> Merge Sort

Objective:
Sort an array using the Merge Sort algorithm.

Example:
Input:
5
5 4 3 2 1

Output:
1 2 3 4 5

Task:- Divide the array into smaller parts,
sort them, and merge them.


Question:165 ->> Quick Sort

Objective:
Sort an array using Quick Sort.

Example:
Input:
5
5 4 3 2 1

Output:
1 2 3 4 5

Task:- Select a pivot and partition the array.


Question:166 ->> Count Sort

Objective:
Sort an array of non-negative integers
using Counting Sort.

Example:
Input:
6
4 2 2 8 3 3

Output:
2 2 3 3 4 8

Task:- Count the frequency of each value
and reconstruct the sorted array.


Question:167 ->> Sort Array by Absolute Value

Objective:
Arrange array elements in increasing order
of their absolute values.

Example:
Input:
5
-10 5 -2 8 1

Output:
1 -2 5 8 -10

Task:- Sort using absolute value as the comparison key.


Question:168 ->> Sort Even and Odd Numbers

Objective:
Arrange even numbers first and odd numbers later.

Example:
Input:
6
1 2 3 4 5 6

Output:
2 4 6 1 3 5

Task:- Rearrange even and odd elements.


Question:169 ->> Find the Minimum Swaps to Sort

Objective:
Given an array of distinct elements,
calculate the minimum swaps required to sort it.

Example:
Input:
4
4 3 2 1

Output: 2

Task:- Determine the minimum number of swaps
needed to arrange elements in ascending order.


Question:170 ->> Check Whether an Array is Sorted

Objective:
Determine whether an array is sorted in ascending order.

Example:
Input:
5
1 2 3 4 5

Output: Sorted

Task:- Compare adjacent elements.


============================================================
SECTION 13: RECURSION (171-185)
============================================================

Question:171 ->> Print Numbers from 1 to N Using Recursion

Objective:
Print numbers from 1 to N using recursion.

Example:
Input: 5
Output: 1 2 3 4 5

Task:- Create a recursive function to print numbers.


Question:172 ->> Print Numbers from N to 1 Using Recursion

Objective:
Print numbers from N to 1 using recursion.

Example:
Input: 5
Output: 5 4 3 2 1

Task:- Create a recursive function.


Question:173 ->> Sum of N Natural Numbers Using Recursion

Objective:
Calculate the sum of first N natural numbers.

Example:
Input: 5
Output: 15

Task:- Use a recursive function with a base case.


Question:174 ->> Factorial Using Recursion

Objective:
Calculate factorial of N using recursion.

Example:
Input: 5
Output: 120

Task:- Create:
long long factorial(int N)


Question:175 ->> Fibonacci Using Recursion

Objective:
Find the Nth Fibonacci number using recursion.

Example:
Input: 6
Output: 8

Task:- Create a recursive Fibonacci function.

(Note: Fibonacci starts with 0 and 1.)


Question:176 ->> Reverse a String Using Recursion

Objective:
Reverse a string using recursive function calls.

Example:
Input: hello
Output: olleh

Task:- Use recursion to process characters
from opposite ends.


Question:177 ->> Sum of Digits Using Recursion

Objective:
Calculate the sum of digits using recursion.

Example:
Input: 1234
Output: 10

Task:- Use recursive calls to remove one digit.


Question:178 ->> Reverse a Number Using Recursion

Objective:
Reverse the digits of a number using recursion.

Example:
Input: 1234
Output: 4321

Task:- Use recursion and digit extraction.


Question:179 ->> Check Palindrome Using Recursion

Objective:
Determine whether a string is a palindrome using recursion.

Example:
Input: madam
Output: Palindrome

Task:- Compare characters from both ends recursively.


Question:180 ->> Calculate Power Using Recursion

Objective:
Calculate A raised to power B using recursion.

Example:
Input: 2 5
Output: 32

Task:- Create a recursive power function.


Question:181 ->> GCD Using Recursion

Objective:
Find GCD of two numbers using recursion.

Example:
Input: 12 18
Output: 6

Task:- Use the Euclidean algorithm recursively.


Question:182 ->> Print Array Using Recursion

Objective:
Print all elements of an array using recursion.

Example:
Input:
4
1 2 3 4

Output:
1 2 3 4

Task:- Use recursive calls to traverse the array.


Question:183 ->> Find Maximum in an Array Using Recursion

Objective:
Find the maximum element using recursion.

Example:
Input:
5
1 8 3 9 2

Output: 9

Task:- Compare the current element with
the maximum of the remaining elements.


Question:184 ->> Binary Search Using Recursion

Objective:
Search for X in a sorted array using recursive binary search.

Example:
Input:
5
1 3 5 7 9
7

Output: 3

Task:- Create a recursive binary search function.


Question:185 ->> Tower of Hanoi

Objective:
Solve the Tower of Hanoi problem for N disks.

Example:
Input: 2

Output:
Move disk 1 from A to B
Move disk 2 from A to C
Move disk 1 from B to C

Task:- Use recursion to move disks
between three rods.

(Note: 1 <= N <= 10.)


============================================================
SECTION 14: MIXED DSA & COMPANY PRACTICE (186-200)
============================================================

Question:186 ->> Two Sum

Objective:
Given an array and target X,
find two distinct elements whose sum equals X.

Example:
Input:
4
2 7 11 15
9

Output:
0 1

Task:- Return the indices of two elements
whose sum equals the target.


Question:187 ->> Best Time to Buy and Sell Stock

Objective:
Given daily stock prices,
find the maximum possible profit from one buy
and one sell transaction.

Example:
Input:
6
7 1 5 3 6 4

Output: 5

Task:- Buy before selling and maximize profit.


Question:188 ->> Contains Duplicate

Objective:
Determine whether an array contains duplicate elements.

Example:
Input:
5
1 2 3 1 5

Output: Yes

Task:- Check whether any element appears more than once.


Question:189 ->> Majority Element

Objective:
Find the element that appears more than N/2 times.

Example:
Input:
5
2 2 1 2 2

Output: 2

Task:- Find the majority element using frequency
counting or an efficient algorithm.


Question:190 ->> Missing Number

Objective:
Given numbers from 0 to N with one missing,
find the missing number.

Example:
Input:
4
0 1 3 4

Output: 2

Task:- Use the sum formula or XOR.


Question:191 ->> Move Zeros to the End

Objective:
Move all zeros to the end of an array
without changing the order of non-zero elements.

Example:
Input:
5
0 1 0 3 12

Output:
1 3 12 0 0

Task:- Use two pointers or an efficient traversal.


Question:192 ->> Remove Duplicates from Sorted Array

Objective:
Remove duplicate elements from a sorted array
and return the number of unique elements.

Example:
Input:
6
1 1 2 2 3 4

Output:
4

Task:- Use two pointers to keep unique elements.


Question:193 ->> Rotate Array by K Positions

Objective:
Rotate an array to the right by K positions.

Example:
Input:
5
1 2 3 4 5
2

Output:
4 5 1 2 3

Task:- Rotate the array efficiently.


Question:194 ->> Intersection of Two Arrays

Objective:
Find common elements between two arrays.

Example:
Input:
4
1 2 3 4
3
3 4 5

Output:
3 4

Task:- Find elements present in both arrays.


Question:195 ->> Union of Two Arrays

Objective:
Find all distinct elements present in either array.

Example:
Input:
3
1 2 3
3
2 3 4

Output:
1 2 3 4

Task:- Combine both arrays without duplicates.


Question:196 ->> Maximum Subarray Sum

Objective:
Find the maximum sum of a contiguous subarray.

Example:
Input:
5
-2 1 -3 4 -1

Output: 4

Task:- Use Kadane's algorithm or brute force.


Question:197 ->> Pair with Given Difference

Objective:
Given an array and integer K,
find whether a pair exists whose difference is K.

Example:
Input:
5
1 5 3 4 2
2

Output: Yes

Task:- Find two distinct elements with absolute difference K.


Question:198 ->> Find the Single Element

Objective:
Given an array where every element appears twice
except one element, find the single element.

Example:
Input:
5
2 3 2 4 3

Output: 4

Task:- Use XOR or frequency counting.


Question:199 ->> Maximum Consecutive Ones

Objective:
Given a binary array, find the maximum number
of consecutive 1s.

Example:
Input:
6
1 1 0 1 1 1

Output: 3

Task:- Traverse the array and maintain
the current and maximum consecutive count.


Question:200 ->> Find the Element with Odd Frequency

Objective:
Given an array where exactly one element
occurs an odd number of times and all others
occur an even number of times,
find the odd-frequency element.

Example:
Input:
5
2 3 2 3 4

Output: 4

Task:- Use XOR or frequency counting.

============================================================
                  END OF QUESTIONS 101-200
============================================================
*/
