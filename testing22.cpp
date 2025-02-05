// Write a C++ program to find print the square of a number with the help of a function with no arguments and no return value
#include <iostream>
using namespace std;

// Function with no arguments and no return value
void printSquare() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Square of " << num << " is " << num * num << endl;
}

int main() {
    printSquare();
    return 0;
}
