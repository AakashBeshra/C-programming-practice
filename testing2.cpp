// Write a program to delete the last digit. Input 13613 output 1361. input 324 output 32

#include <iostream>
#include <string>
using namespace std;

int deleteLastDigit(int n) {
    string numStr = to_string(n);
    numStr.pop_back();
    return stoi(numStr);
}

int main() {
    cout << deleteLastDigit(13613) << endl; // Output: 1361
    cout << deleteLastDigit(324) << endl; // Output: 32
    return 0;
}