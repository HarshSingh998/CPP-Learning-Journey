
/*
============================================================
       Basic Programming -> Functions -> Arrays
============================================================

============================================================
SECTION 1: INPUT, OUTPUT & VARIABLES (1-10)
============================================================

Question:1 ->> Say Hello With Your Name

Objective:
Given a name S, print Hello, followed by the given name.

Example:
Input: Harsh
Output: Hello, Harsh

Task:- Take a name as input and print a greeting message.


Question:2 ->> Sum of Two Numbers

Objective:
Given two integers A and B, calculate and print their sum.

Example:
Input: 10 20
Output: 30

Task:- Take two integers as input and print their sum.


Question:3 ->> Swap Two Numbers

Objective:
Given two integers A and B, swap their values using a
temporary variable.

Example:
Input: 10 20
Output: 20 10

Task:- Swap the values of two variables and print them.


Question:4 ->> Area of a Rectangle

Objective:
Given length L and breadth B, calculate the area.

Example:
Input: 5 4
Output: 20

Task:- Use Area = Length * Breadth.


Question:5 ->> Area and Circumference of a Circle

Objective:
Given radius R, calculate area and circumference.

Example:
Input: 7
Output:
Area: 153.94
Circumference: 43.96

Task:- Use PI = 3.14.
Area = PI * R * R
Circumference = 2 * PI * R


Question:6 ->> Celsius to Fahrenheit

Objective:
Convert temperature from Celsius to Fahrenheit.

Example:
Input: 25
Output: 77

Task:- Use F = (C * 9 / 5) + 32.


Question:7 ->> Simple Interest Calculator

Objective:
Given principal P, rate R, and time T,
calculate simple interest.

Example:
Input: 1000 5 2
Output: 100

Task:- SI = (P * R * T) / 100.


Question:8 ->> Average of Three Numbers

Objective:
Given three numbers, calculate their average.

Example:
Input: 10 20 30
Output: 20

Task:- Average = (A + B + C) / 3.


Question:9 ->> Last Digit of a Number

Objective:
Given a non-negative integer N, find its last digit.

Example:
Input: 1234
Output: 4

Task:- Use the modulo operator.


Question:10 ->> Convert Minutes into Hours and Minutes

Objective:
Given total minutes M, convert them into hours and minutes.

Example:
Input: 135
Output: 2 Hours 15 Minutes

Task:- Use integer division and modulo operators.


============================================================
SECTION 2: OPERATORS & EXPRESSIONS (11-20)
============================================================

Question:11 ->> Even or Odd Using Bitwise Operator

Objective:
Determine whether a number is even or odd using bitwise AND.

Example:
Input: 8
Output: Even

Task:- Use N & 1.


Question:12 ->> Check Divisibility by 5 and 11

Objective:
Check whether a number is divisible by both 5 and 11.

Example:
Input: 55
Output: Yes

Task:- Use the modulo operator.


Question:13 ->> Pre-Increment and Post-Increment

Objective:
Demonstrate the difference between ++X and X++.

Example:
Input: 5
Output:
Post-Increment: 5
Pre-Increment: 7

Task:- Observe the value before and after increment.


Question:14 ->> Evaluate an Expression

Objective:
Given A, B, and C, evaluate A + B * C.

Example:
Input: 2 3 4
Output: 14

Task:- Follow operator precedence.


Question:15 ->> Convert Days into Years, Weeks and Days

Objective:
Given total days, calculate years, weeks, and remaining days.

Example:
Input: 400
Output: 1 Year 5 Weeks 1 Day

Task:- Use integer division and modulo.


Question:16 ->> Check Whether a Number is Multiple of 3

Objective:
Determine whether N is divisible by 3.

Example:
Input: 15
Output: Yes

Task:- Use the modulo operator.


Question:17 ->> Find the Square and Cube of a Number

Objective:
Given N, calculate its square and cube.

Example:
Input: 4
Output:
Square: 16
Cube: 64

Task:- Use multiplication operators.


Question:18 ->> Calculate Percentage

Objective:
Given total marks and obtained marks, calculate percentage.

Example:
Input: 500 425
Output: 85

Task:- Percentage = (Obtained / Total) * 100.


Question:19 ->> Check Whether Two Numbers are Equal

Objective:
Given A and B, check whether they are equal.

Example:
Input: 10 10
Output: Equal

Task:- Use the equality operator.


Question:20 ->> Final Price After Discount and Tax

Objective:
Calculate the final price after discount and tax.

Example:
Input: 1000 10 5
Output: 945

Task:- Apply discount first, then tax.


============================================================
SECTION 3: IF-ELSE & DECISION MAKING (21-35)
============================================================

Question:21 ->> Positive, Negative or Zero

Objective:
Determine whether N is positive, negative, or zero.

Example:
Input: -5
Output: Negative

Task:- Use if-else statements.


Question:22 ->> Even or Odd

Objective:
Determine whether N is even or odd.

Example:
Input: 7
Output: Odd

Task:- Use modulo and if-else.


Question:23 ->> Largest of Two Numbers

Objective:
Find the larger of A and B.

Example:
Input: 10 25
Output: 25

Task:- Use if-else.


Question:24 ->> Largest of Three Numbers

Objective:
Find the largest of A, B, and C using nested if-else.

Example:
Input: 4 9 6
Output: 9

Task:- Use nested if-else statements.


Question:25 ->> Voting Eligibility Checker

Objective:
Determine whether a person is eligible to vote.

Example:
Input: 18
Output: Eligible

Task:- Check whether age is at least 18.


Question:26 ->> Leap Year Checker

Objective:
Determine whether a given year is a leap year.

Example:
Input: 2024
Output: Leap Year

Task:- Use the leap year conditions:
Divisible by 400 OR divisible by 4 but not by 100.


Question:27 ->> Grade Calculator

Objective:
Given marks out of 100, print the grade.

Grading Rules:
90-100: A
80-89: B
70-79: C
60-69: D
Below 60: F

Example:
Input: 85
Output: B

Task:- Use an if-else ladder.


Question:28 ->> Triangle Validity Checker

Objective:
Check whether three sides form a valid triangle.

Example:
Input: 3 4 5
Output: Valid Triangle

Task:- Check whether the sum of any two sides
is greater than the third side.


Question:29 ->> Triangle Type Checker

Objective:
Identify the type of a valid triangle.

Example:
Input: 5 5 5
Output: Equilateral

Task:- Identify Equilateral, Isosceles, or Scalene.


Question:30 ->> Check Character Type

Objective:
Given a character, identify whether it is uppercase,
lowercase, digit, or special character.

Example:
Input: A
Output: Uppercase

Task:- Use ASCII ranges and if-else.


Question:31 ->> Electricity Bill Calculator

Objective:
Calculate electricity bill using these slabs:

First 100 units: Rs. 1/unit
Next 100 units: Rs. 2/unit
Above 200 units: Rs. 3/unit

Example:
Input: 250
Output: 450

Task:- Calculate the bill progressively.


Question:32 ->> Check Divisibility by 2 and 3

Objective:
Check whether N is divisible by both 2 and 3.

Example:
Input: 12
Output: Yes

Task:- Use logical AND.


Question:33 ->> Find the Middle Number

Objective:
Given three distinct numbers, find the middle number.

Example:
Input: 10 5 8
Output: 8

Task:- Use conditional comparisons.


Question:34 ->> Profit or Loss Calculator

Objective:
Given cost price and selling price,
determine profit, loss, or no profit/no loss.

Example:
Input: 100 120
Output: Profit: 20

Task:- Compare selling price and cost price.


Question:35 ->> Login Validation

Objective:
Given a username and password,
check whether they match the predefined credentials.

Example:
Input:
admin
1234

Output: Login Successful

Task:- Use conditional statements to validate both values.


============================================================
SECTION 4: SWITCH STATEMENT (36-45)
============================================================

Question:36 ->> Simple Calculator Using Switch

Objective:
Given A, B, and an operator, perform the arithmetic operation.

Example:
Input: 10 5 +
Output: 15

Task:- Use switch to handle +, -, *, and /.


Question:37 ->> Day of the Week

Objective:
Given a number from 1 to 7, print the day of the week.

Example:
Input: 1
Output: Monday

Task:- Use switch cases.


Question:38 ->> Month Name Finder

Objective:
Given a number from 1 to 12, print the month name.

Example:
Input: 3
Output: March

Task:- Use switch statements.


Question:39 ->> Number of Days in a Month

Objective:
Given a month number, print the number of days.

Example:
Input: 2
Output: 28 or 29

Task:- Use switch and handle February separately
according to leap year.


Question:40 ->> Vowel or Consonant Using Switch

Objective:
Given an alphabet character, determine whether it is
a vowel or consonant.

Example:
Input: e
Output: Vowel

Task:- Use switch cases for vowels.


Question:41 ->> Menu-Driven Area Calculator

Objective:
Create a menu to calculate the area of:
1. Circle
2. Rectangle
3. Square

Example:
Input: 3
Input: 5
Output: 25

Task:- Use switch to select the area calculation.


Question:42 ->> Traffic Light Simulator

Objective:
Given a traffic light color, print the corresponding action.

Example:
Input: Red
Output: Stop

Task:- Use switch cases for Red, Yellow, and Green.


Question:43 ->> Basic ATM Menu

Objective:
Create a menu-driven program for:
1. Check Balance
2. Deposit
3. Withdraw

Example:
Input: 1
Output: Balance: 5000

Task:- Use switch to perform the selected operation.


Question:44 ->> Grade Description Using Switch

Objective:
Given a grade character, print its description.

Example:
Input: A
Output: Excellent

Task:- Use switch cases for A, B, C, D, and F.


Question:45 ->> Currency Converter Menu

Objective:
Create a menu to convert INR into:
1. USD
2. EUR
3. GBP

Example:
Input: 1
Input: 100
Output: Converted Amount

Task:- Use switch to select the conversion.
Use fixed sample exchange rates.


============================================================
SECTION 5: LOOPS (46-60)
============================================================

Question:46 ->> Print Numbers from 1 to N

Objective:
Given N, print numbers from 1 to N.

Example:
Input: 5
Output: 1 2 3 4 5

Task:- Use a for loop.


Question:47 ->> Print Numbers from N to 1

Objective:
Given N, print numbers in reverse order.

Example:
Input: 5
Output: 5 4 3 2 1

Task:- Use a loop.


Question:48 ->> Sum of First N Natural Numbers

Objective:
Calculate the sum of the first N natural numbers.

Example:
Input: 5
Output: 15

Task:- Use a loop.


Question:49 ->> Multiplication Table

Objective:
Print the multiplication table of N from 1 to 10.

Example:
Input: 5
Output:
5 x 1 = 5
5 x 2 = 10
...
5 x 10 = 50

Task:- Use a loop.


Question:50 ->> Factorial of a Number

Objective:
Calculate factorial of N.

Example:
Input: 5
Output: 120

Task:- Calculate N! using a loop.


Question:51 ->> Count Digits

Objective:
Count the number of digits in N.

Example:
Input: 12345
Output: 5

Task:- Use a while loop and integer division.


Question:52 ->> Reverse a Number

Objective:
Reverse the digits of N.

Example:
Input: 1234
Output: 4321

Task:- Extract digits using modulo and construct
the reversed number.


Question:53 ->> Sum of Digits

Objective:
Calculate the sum of all digits of N.

Example:
Input: 1234
Output: 10

Task:- Use a while loop.


Question:54 ->> Palindrome Number

Objective:
Check whether N is a palindrome.

Example:
Input: 121
Output: Palindrome

Task:- Reverse N and compare it with the original.


Question:55 ->> Prime Number Checker

Objective:
Determine whether N is a prime number.

Example:
Input: 7
Output: Prime

Task:- Check divisibility using a loop.


Question:56 ->> Print All Factors

Objective:
Print all positive factors of N.

Example:
Input: 12
Output: 1 2 3 4 6 12

Task:- Check divisibility using a loop.


Question:57 ->> GCD of Two Numbers

Objective:
Find the greatest common divisor of A and B.

Example:
Input: 12 18
Output: 6

Task:- Use a loop to find the greatest common factor.


Question:58 ->> LCM of Two Numbers

Objective:
Find the least common multiple of A and B.

Example:
Input: 12 18
Output: 36

Task:- Use GCD or repeated checking.

Formula:
LCM = (A * B) / GCD(A, B)


Question:59 ->> Fibonacci Series

Objective:
Print the first N terms of the Fibonacci series.

Example:
Input: 6
Output: 0 1 1 2 3 5

Task:- Use a loop to generate the next term
by adding the previous two terms.


Question:60 ->> Armstrong Number

Objective:
Check whether N is an Armstrong number.

Example:
Input: 153
Output: Armstrong

Task:- Calculate the sum of each digit raised
to the power of the number of digits.


============================================================
SECTION 6: NESTED LOOPS & PATTERNS (61-70)
============================================================

Question:61 ->> Square Star Pattern

Objective:
Print a square pattern of N rows and N columns.

Example:
Input: 3
Output:
* * *
* * *
* * *

Task:- Use nested loops.


Question:62 ->> Right-Angled Triangle Pattern

Objective:
Print a right-angled triangle of stars.

Example:
Input: 4
Output:
*
* *
* * *
* * * *

Task:- Increase the number of stars in each row.


Question:63 ->> Inverted Triangle Pattern

Objective:
Print an inverted triangle of stars.

Example:
Input: 4
Output:
* * * *
* * *
* *
*

Task:- Decrease the number of stars in each row.


Question:64 ->> Number Triangle Pattern

Objective:
Print numbers from 1 to the row number.

Example:
Input: 4
Output:
1
1 2
1 2 3
1 2 3 4

Task:- Use nested loops.


Question:65 ->> Floyd's Triangle

Objective:
Print consecutive numbers in triangular form.

Example:
Input: 4
Output:
1
2 3
4 5 6
7 8 9 10

Task:- Use nested loops and a counter.


Question:66 ->> Centered Pyramid Pattern

Objective:
Given N, print a centered pyramid of stars.

Example:
Input: 3
Output:
  *
 * * *
* * * * *

Task:- Print spaces before stars and increase
stars by two in every row.


Question:67 ->> Inverted Pyramid Pattern

Objective:
Print an inverted centered pyramid.

Example:
Input: 3
Output:
* * * * *
 * * *
  *

Task:- Decrease stars and increase spaces
in every row.


Question:68 ->> Hollow Square Pattern

Objective:
Print a hollow square using stars.

Example:
Input: 4
Output:
* * * *
*     *
*     *
* * * *

Task:- Print stars only on the boundary.


Question:69 ->> Diamond Star Pattern

Objective:
Print a diamond pattern of stars.

Example:
Input: 3
Output:
  *
 * * *
* * * * *
 * * *
  *

Task:- Use nested loops to print upper and
lower pyramids.


Question:70 ->> Binary Triangle Pattern

Objective:
Print a triangle containing alternating 0s and 1s.

Example:
Input: 4
Output:
1
0 1
1 0 1
0 1 0 1

Task:- Use nested loops and conditional logic.


============================================================
SECTION 7: FUNCTIONS (71-80)
============================================================

Question:71 ->> Function to Find Maximum

Objective:
Create a function that returns the larger of two numbers.

Example:
Input: 10 25
Output: 25

Task:- Create:
int findMax(int A, int B)


Question:72 ->> Function to Check Even or Odd

Objective:
Create a function that checks whether N is even.

Example:
Input: 8
Output: Even

Task:- Create:
bool isEven(int N)


Question:73 ->> Function to Calculate Factorial

Objective:
Create a function that returns factorial of N.

Example:
Input: 5
Output: 120

Task:- Create:
long long factorial(int N)


Question:74 ->> Function to Check Prime

Objective:
Create a function to determine whether N is prime.

Example:
Input: 7
Output: Prime

Task:- Create:
bool isPrime(int N)


Question:75 ->> Function to Reverse a Number

Objective:
Create a function that returns the reversed number.

Example:
Input: 1234
Output: 4321

Task:- Create:
int reverseNumber(int N)


Question:76 ->> Function to Calculate Power

Objective:
Calculate A raised to power B using a function.

Example:
Input: 2 5
Output: 32

Task:- Create:
long long power(int A, int B)

Use a loop instead of the built-in power function.


Question:77 ->> Function to Find GCD

Objective:
Create a function to find the GCD of two numbers.

Example:
Input: 12 18
Output: 6

Task:- Create:
int findGCD(int A, int B)


Question:78 ->> Function to Check Palindrome

Objective:
Create a function that checks whether N is palindrome.

Example:
Input: 121
Output: Palindrome

Task:- Create:
bool isPalindrome(int N)


Question:79 ->> Function to Calculate Sum of Digits

Objective:
Create a function that returns the sum of digits.

Example:
Input: 1234
Output: 10

Task:- Create:
int sumOfDigits(int N)


Question:80 ->> Calculator Using Functions

Objective:
Create a calculator using separate arithmetic functions.

Example:
Input: 10 5 +
Output: 15

Task:- Create functions for:
Addition
Subtraction
Multiplication
Division

Use the appropriate function according to the operator.


============================================================
SECTION 8: ARRAYS (81-100)
============================================================

Question:81 ->> Input and Print an Array

Objective:
Given N integers, store them in an array and print them.

Example:
Input:
5
10 20 30 40 50

Output:
10 20 30 40 50

Task:- Use a loop to input and display array elements.


Question:82 ->> Sum of Array Elements

Objective:
Given an array of N integers, calculate the sum.

Example:
Input:
5
1 2 3 4 5

Output: 15

Task:- Traverse the array and add all elements.


Question:83 ->> Average of Array Elements

Objective:
Calculate the average of all elements in an array.

Example:
Input:
4
10 20 30 40

Output: 25

Task:- Calculate sum and divide by N.


Question:84 ->> Find Maximum Element in an Array

Objective:
Given an array of N integers, find the maximum element.

Example:
Input:
5
10 50 20 80 30

Output: 80

Task:- Traverse the array and maintain the maximum.


Question:85 ->> Find Minimum Element in an Array

Objective:
Given an array of N integers, find the minimum element.

Example:
Input:
5
10 50 20 80 30

Output: 10

Task:- Traverse the array and maintain the minimum.


Question:86 ->> Count Even and Odd Elements

Objective:
Count the number of even and odd elements in an array.

Example:
Input:
5
1 2 3 4 5

Output:
Even: 2
Odd: 3

Task:- Traverse the array and check each element.


Question:87 ->> Search an Element in an Array

Objective:
Given an array and a target X,
determine whether X exists in the array.

Example:
Input:
5
10 20 30 40 50
30

Output: Found

Task:- Use linear search.


Question:88 ->> Find the Index of an Element

Objective:
Given an array and target X, print its index.

Example:
Input:
5
10 20 30 40 50
30

Output: 2

Task:- Use zero-based indexing and linear search.

(Note: Print -1 if X is not found.)


Question:89 ->> Count Occurrences of an Element

Objective:
Given an array and target X,
count how many times X appears.

Example:
Input:
6
1 2 2 3 2 4
2

Output: 3

Task:- Traverse the array and count matching elements.


Question:90 ->> Reverse an Array

Objective:
Given an array, print its elements in reverse order.

Example:
Input:
5
1 2 3 4 5

Output:
5 4 3 2 1

Task:- Use two pointers or reverse traversal.


Question:91 ->> Copy One Array into Another

Objective:
Copy all elements of array A into array B.

Example:
Input:
4
10 20 30 40

Output:
10 20 30 40

Task:- Use a loop to copy each element.


Question:92 ->> Check Whether an Array is Sorted

Objective:
Determine whether an array is sorted in non-decreasing order.

Example:
Input:
5
1 2 3 4 5

Output: Sorted

Task:- Compare adjacent elements.


Question:93 ->> Second Largest Element

Objective:
Given an array of integers, find the second largest
distinct element.

Example:
Input:
5
10 50 20 80 30

Output: 50

Task:- Find the largest and second largest
distinct elements without sorting.

(Note: At least two distinct values exist.)


Question:94 ->> Second Smallest Element

Objective:
Find the second smallest distinct element in an array.

Example:
Input:
5
10 50 20 80 30

Output: 20

Task:- Find the smallest and second smallest
distinct elements.


Question:95 ->> Frequency of Each Element

Objective:
Given an array, print the frequency of each distinct element.

Example:
Input:
5
1 2 2 3 1

Output:
1: 2
2: 2
3: 1

Task:- Count occurrences of each element.


Question:96 ->> Remove Duplicate Elements

Objective:
Given an array, print only unique elements.

Example:
Input:
6
1 2 2 3 1 4

Output:
1 2 3 4

Task:- Remove duplicates while preserving
the original order.


Question:97 ->> Left Rotate an Array by One

Objective:
Rotate an array to the left by one position.

Example:
Input:
5
1 2 3 4 5

Output:
2 3 4 5 1

Task:- Move the first element to the last position.


Question:98 ->> Right Rotate an Array by One

Objective:
Rotate an array to the right by one position.

Example:
Input:
5
1 2 3 4 5

Output:
5 1 2 3 4

Task:- Move the last element to the first position.


Question:99 ->> Move All Zeros to the End

Objective:
Move all zeros to the end of an array
while maintaining the relative order of non-zero elements.

Example:
Input:
6
0 1 0 3 12 0

Output:
1 3 12 0 0 0

Task:- Rearrange elements without changing
the order of non-zero elements.


Question:100 ->> Find the Missing Number

Objective:
Given an array containing distinct numbers from 1 to N,
with one number missing, find the missing number.

Example:
Input:
5
1 2 4 5

Output: 3

Task:- Find the missing number using the sum formula
or an appropriate array traversal.

(Note: Numbers range from 1 to N, and exactly one
number is missing.)

============================================================
                  END OF PRACTICE SHEET
============================================================
*/
