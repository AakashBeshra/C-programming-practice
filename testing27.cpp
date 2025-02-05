// Write a C++ program for function with argument and return value
#include<iostream>
using namespace std;
int fun4(int i, int j);
int main()
{
    int sum = fun4(10, 20);
    cout<<"sum = "<<sum<<endl;
    cout<<"function with argument and return value";
    return 0;
}
int fun4(int i, int j)
{
    return i + j;
}