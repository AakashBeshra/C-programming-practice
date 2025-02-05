// Write a C++ program to find sum of n natural numbers
#include <iostream>
using namespace std;

int sumOfNaturalNumbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input! Please enter a positive integer." << endl;
        return 0;
    }

    int sum = sumOfNaturalNumbers(n);
    cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;

    return 0;
}
