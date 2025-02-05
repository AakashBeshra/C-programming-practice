// Write a C++ program to find the sum of last two digits. For above input 13613 output 1 + 3 = 4 and input 324 output 2 + 4 = 6.

#include<iostream>
using namespace std;

int getLastTwoDigits(int n) {
    return n % 100;
}

int sumLastTwoDigits(int n) {
    return getLastTwoDigits(n) / 10 + getLastTwoDigits(n) % 10;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of last two digits: " << sumLastTwoDigits(n) << endl;
    return 0;
}