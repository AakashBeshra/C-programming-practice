// Write a Sample C++ program for Function with no argument and no return value
#include<iostream>
using namespace std;
void fun1(); // function declaration
int main()
{
    fun1(); // function call
    cout<<"no arguments and no return value";
}
void fun1() // function definition
{
    int i = 10, j = 20;
    cout << "i = "<<i<<endl<<"j = "<<j<<endl;
}