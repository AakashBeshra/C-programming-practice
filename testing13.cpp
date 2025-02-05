// The given program prints numbers which are between 20 and 70 but not betwen 40 and 60.

#include<iostream>
using namespace std;

int main() {
    for (int i = 20; i <= 70; i++) {
        if (i >= 40 && i <= 60) {
            continue;
        }
        cout << i << " ";
    }
    return 0;
}