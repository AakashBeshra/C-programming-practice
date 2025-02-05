// Write a program to find a square and cube of any positive number using function

#include <iostream>
using namespace std;

int square(int num) {
    return num * num;
}

int cube(int num) {
    return num * num * num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Square: " << square(num) << endl;
    cout << "Cube: " << cube(num) << endl;
    return 0;
}
// Write  a program to find the sum of the series 1!/1+2!/2+3!/3+...+n!/n+1 using function

#include <iostream>
using namespace std;

double factorial(int n) {
    double fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    double sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += factorial(i) / (i + 1);
    }
    cout << "Sum of the series: " << sum << endl;
    return 0;
}
// Write a program to convert decimal number to binary number using function

#include <iostream>
using namespace std;

int decimalToBinary(int num) {
    int binaryNum[32];
    int i = 0;
    while(num > 0) {
        binaryNum[i] = num % 2;
        num /= 2;
        i++;
    }
    for(int j = i - 1; j >= 0; j--) {
        cout << binaryNum[j];
    }
    cout << endl;
    return 0;
}

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;
    decimalToBinary(num);
    return 0;
}
// Find out the prime numbers between 2 to 50 using function

#include <iostream>
using namespace std;

bool isPrime(int num) {
    if(num <= 1) {
        return false;
    }
    for(int i = 2; i <= num / 2; i++) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    for(int i = 2; i <= 50; i++) {
        if(isPrime(i)) {
            cout << i << " ";
        }
    }
    return 0;
}
// Write a program to check if the given number is armstrong and perfect number using function

#include <iostream>
using namespace std;

bool isArmstrong(int num) {
    int sum = 0;
    int temp = num;
    while(temp > 0) {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    return sum == num;
}

bool isPerfect(int num) {
    int sum = 0;
    for(int i = 1; i < num; i++) {
        if(num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}
// Check if the given string is anagram using function

#include <iostream>
using namespace std;

bool isAnagram(string str1, string str2) {
    if(str1.length() != str2.length()) {
        return false;
    }
    int count[256] = {0};
    for(int i = 0; i < str1.length(); i++) {
        count[str1[i]]++;
        count[str2[i]]--;
    }
    for(int i = 0; i < 256; i++) {
        if(count[i] != 0) {
            return false;
        }
    }
    return true;
}
int main()
{
    string str1, str2;
    cout << "Enter two strings: ";
    cin >> str1 >> str2;
    if(isAnagram(str1, str2)) {
        cout << "The two strings are anagrams." << endl;
    } else {
        cout << "The two strings are not anagrams." << endl;
    }
    return 0;
}