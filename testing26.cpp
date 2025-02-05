// Write a C++ program to find all the prime numbers between the range 1 to 20 using function with argument but no return value
#include <iostream>
using namespace std;
void prime(int n) {
    for (int num = 2; num <= n; num++) {
        bool isPrime = true;
        
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        
        if (isPrime) {
            cout << num << " ";
        }
    }
    cout << endl;
}

int main() {
    prime(20);
    return 0;
}
