// Write a program, which prints all even numbers between 20 and 70

#include <iostream>
using namespace std;

int main() {
    for (int i = 20; i <= 70; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }

    return 0;
}