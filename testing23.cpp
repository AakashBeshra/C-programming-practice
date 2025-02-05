// Write a sample C++ program for function with no arguments but return value
#include<iostream>
using namespace std;
int fun2();
int main()
{
    int n = fun2();
    cout<<"Square of the number is: "<<n<<endl;
    cout<<"no arguments but return value";
    return 0;
}
int fun2()
{
    int a = 5;
    return a*a;
}