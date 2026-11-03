
/*

Two's Complement in C++ ->>>
Two's complement is a method used to represent negative binary numbers.

1's Complement ->>>>
1's Complement is a method of representing binary numbers in which every bit of a binary number is inverted (flipped).
- 0 → 1
- 1 → 0


Steps For Two's Complements :-
1. Convert decimal number into binary.
2. Add prefix zeros to make it 8-bit.
3. Flip all bits (1 → 0 and 0 → 1) — Ones Complement.
4. Add 1 to get Two's Complement.



Important Concepts :
- MSB (Most Significant Bit): Leftmost bit.
- Prefix Zeros: Make binary representation 8-bit.
- Flip: 0 → 1 and 1 → 0.
- Ones Complement: Flip all bits.
- Twos Complement: Ones Complement + 1.

! Note: In 8-bit signed representation, the MSB 1 indicates a negative number and 0 indicates a positive number. 

*/



/*

Example: Convert -8 into Binary & Reverse

* Decimal to Binary 

Step 1: Convert Decimal to Binary

8 = 1000


Step 2: Add Prefix Zero

1000
01000


Step 3: Find Ones Complement (Flip Bits)

0 → 1
1 → 0

01000
10111


Step 4: Add 1 (Two's Complement)

  10111
+     1
-------
  11000


Final Answer :- 

-8 = 11000










Example: Convert 11000 into Decimal

* Binary to Decimal

Step 1: Check MSB (Most Significant Bit)

11000

MSB = 1

Number is negative in signed Two's Complement representation.


Step 2: Find Ones Complement (Flip Bits)

0 → 1

1 → 0

11000
00111


Step 3: Add 1 (To Find Magnitude)

  00111
+     1
-------
  01000


Step 4: Convert Binary into Decimal

01000 = 8


Final Answer :-

11000 = -8







Important Points -:

MSB = 0 → Positive number or zero.
MSB = 1 → Negative number in signed Two's Complement.

To convert negative binary into decimal:
Check MSB.
Flip all bits.
Add 1.
Convert into decimal.
Add negative sign.

*/




/*

* Decimal to Binary & Binary to Decimal

Example: -12

? 1. Decimal to Binary (-12)

Step 1: Convert Decimal to Binary

12 = 1100


Step 2: Add Prefix Zero

1100
01100


Step 3: Find Ones Complement (Flip Bits)

0 → 1

1 → 0

01100
10011


Step 4: Add 1 (Two's Complement)

  10011
+     1
-------
  10100


Final Answer :-

-12 = 10100












? 2. Binary to Decimal (10100)

Step 1: Check MSB

10100

MSB = 1

Number is negative in signed Two's Complement.


Step 2: Find Ones Complement (Flip Bits)

10100
01011


Step 3: Add 1

  01011
+     1
-------
  01100


Step 4: Convert Binary into Decimal

01100 = 12


Final Answer :-

10100 = -12







Important Note -:

10100 represents -12 in 5-bit Two's Complement.
MSB = 1 indicates a negative number.
Two's Complement = Ones Complement + 1.

*/