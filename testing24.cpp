// Write a C++ program to find factorial of a given number using function with no argument but return value
#include <iostream>
using namespace std;

// Function with no arguments but return value
int fun1() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int result = fun1();
    cout << "Factorial is: " << result << endl;
    return 0;
}
