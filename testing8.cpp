// Write a C++ program to find the biggest numbers among the three numbers using else if ladder
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 > num2 && num1 > num3) {
        cout << "The biggest number is: " << num1 << endl;
    } else if (num2 > num1 && num2 > num3) {
        cout << "The biggest number is: " << num2 << endl;
    } else {
        cout << "The biggest number is: " << num3 << endl;
    }

    return 0;
}