// Write a C++ program to find sum of squares of a number with the help of a function with argument and return value
#include <iostream>
using namespace std;

int square(int num) {
    return num * num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int sum = 0;
    for (int i = 1; i <= num; i++) {
        sum += square(i);
    }
    cout << "Sum of squares: " << sum << endl;
    return 0;
}