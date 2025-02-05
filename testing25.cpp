// Write a C++ program for function with argument but no return value
#include<iostream>
using namespace std;
void fun3(int n);
int main()
{
    fun3(10);
    cout<<"function with argument but no return value";
    return 0;
}
void fun3(int n)
{
    cout<<"n = "<<n<<endl;
}