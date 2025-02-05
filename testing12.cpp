// Write a C++ program to print numbers between 0 and 100, which are either even or between 50 and 70.
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i <= 100; i++) {
        if ((i % 2 == 0) || (i >= 50 && i <= 70)) {
            cout << i << " ";
        }
    }
    return 0;
}