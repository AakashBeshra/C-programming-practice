/*DNA Storage
For encoding an even-length binary string into a sequence of A, T, C, and G, we iterate from left to right and replace the characters as follows:
00 is replaced with A
01 is replaced with T
10 is replaced with C
11 is replaced with G
Given a binary search S of length N (N is even), find the encoded sequence.

Input Format
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains two lines of input.
First line contains a single integer N, the length of the sequence.
Second line contains binary string S of length N.

Output Format
For each test case, output in a single line the encoded sequence.

Note: Output is case-sensitive.*/
#include <iostream>
#include <string>
using namespace std;


string encodeDNA(string binaryString) {
    string dnaSequence = "";
    for (size_t i = 0; i < binaryString.length(); i += 2) {
        string pair = binaryString.substr(i, 2);
        if (pair == "00")
            dnaSequence += "A";
        else if (pair == "01")
            dnaSequence += "T";
        else if (pair == "10")
            dnaSequence += "C";
        else if (pair == "11")
            dnaSequence += "G";
    }
    return dnaSequence;
}

int main() {
    int T;
    cout << "Enter the number of test cases: ";
    cin >> T;
    while (T--) {
        int N;
        cout << "Enter the length of the binary string: ";
        cin >> N;
        string binaryString;
        cout << "Enter the binary string: ";
        cin >> binaryString;

        
        string dnaSequence = encodeDNA(binaryString);
        cout << dnaSequence << endl;
    }
    return 0;
}
