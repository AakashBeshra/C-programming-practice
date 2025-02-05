// Write a C++ code to find the largest and the second largest number where the largest and second largest must be distinct.


#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n); // Sort the array in ascending order

    int largest = arr[n - 1];
    int secondLargest = arr[n - 2];

    cout << "Largest number: " << largest << endl;
    cout << "Second largest number: " << secondLargest << endl;

    return 0;
}