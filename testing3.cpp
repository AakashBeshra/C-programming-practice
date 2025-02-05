// Write c++ program to print the second last digit. Input 23617 output 1
#include<iostream>
using namespace std;

int main() {
    int num = 23617;
    int secondLastDigit = (num % 100) / 10;
    cout << "Second last digit: " << secondLastDigit << endl;
    return 0;
}