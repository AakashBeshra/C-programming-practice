// Write a C++ program to find the grade of the student using the following data
#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 95 && marks <= 100) {
        cout << "Grade: O" << endl;
    } else if (marks >= 90 && marks < 95) {
        cout << "Grade: A+" << endl;
    } else if (marks >= 80 && marks < 90) {
        cout << "Grade: A" << endl;
    } else if (marks >= 70 && marks < 80) {
        cout << "Grade: B+" << endl;
    } else if (marks >= 60 && marks < 70) {
        cout << "Grade: B" << endl;
    } else if (marks >= 50 && marks < 60) {
        cout << "Grade: C+" << endl;
    } else if (marks >= 45 && marks < 50) {
        cout << "Grade: C" << endl;
    } else if (marks > 40 && marks < 45){
    } else {
        cout << "Grade: F" << endl;
    }

    return 0;
}