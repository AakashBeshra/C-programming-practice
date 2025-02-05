// Write a C++ program to find the biggest number from the given numbers

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    (a>b && a>c)?cout<<"The biggest number is: "<<a:(b>a && b>c)?cout<<"The biggest number is: "<<b:cout<<"The biggest number is: "<<c;
    return 0;  // Program execution ends here.
}