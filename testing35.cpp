// Write a C++ program to find the smallest and largest number in the array

#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    cout<<"Enter five numbers: ";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"The smallest number is: "<<arr[0]<<endl;
    cout<<"The largest number is: "<<arr[4];
    return 0;
}