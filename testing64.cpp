/*Chef has a binary strings S of length N, and an integer K.
Hitesh wants to maximize the decimal representation of S using K operations of the following type:
Type 1: Inset 0 at any position in the string
Type 2: Change any 0 to 1.

Help Hitesh find the modified string with maximum possible decimal representation after performing at most K operations.
Note that the decimal representation of a binary string refers to teh numeric value it represents when converted to the decimal number system. For instance, teh decimal representation of 101 will be 5(2^2 + 2^0) and that of 000110 will be 6(2^2 + 2^1)

Input Format
First line will contain T, number of test cases. Then the test cases follow.
The first line of each test case contain two integers N and K.
The second line contains the string S.

Sample Input
4
1 2
1101
001110
5 4
00110
3 1
000


Sample output
110100
10111000
10110000
100*/
