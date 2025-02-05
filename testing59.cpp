/*Chef and Happy String
Chef has a string S with him. Chef is happy if the string contains a contiguous substring of length strictly greater than 2 in which all its characters are vowels.
Determine whether Chef is happy or not.
Note that, in english alphabet, vowels are a,e,i,o and u.

Input Format
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, a string S.

Sample Input
4
aeiou
abxy
aebcdefghij
abcdeeafg

Output
Happy
Sad
Sad
Happy*/
#include <iostream>
#include <string>
using namespace std;
bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

string checkHappiness(const string& S) {
    int count = 0;
    for (char c : S) {
        if (isVowel(c)) {
            count++;
            if (count > 2) return "Happy";
        } else {
            count = 0;
        }
    }
    return "Sad";
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string S;
        cin >> S;
        cout << checkHappiness(S) << endl;
    }
    return 0;
}
