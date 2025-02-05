// Write a C++ program for parameter passing method
#include<iostream>
using namespace std;

// Function to swap the values using pass by reference
void swap(int &x, int &y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main() {
    int a = 10, b = 20;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "After swap: a = " << a << ", b = " << b << endl;
    return 0;
}