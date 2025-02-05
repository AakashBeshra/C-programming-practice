// Write a C++ program to delete last two digits. Input 13613 output 136. Input 324 output 3.
#include <iostream>
using namespace std;

int deleteLastTwoDigits(int num) {
    int lastTwoDigits = num % 100;
    return num / 100 * 100 + lastTwoDigits / 10;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = deleteLastTwoDigits(num);
    cout << "Result: " << result << endl;

    return 0;
}