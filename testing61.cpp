// Write a C++ program to append given strings
#include<iostream>
using namespace std;
int main()
{
    string s1, s2;
    cin>>s1>>s2;
    cout<<"original s1 = "<<s1<<" s2 = "<<s2<<endl;
    s1.append(s2);
    cout<<"modified s1 = "<<s1<<" s2 = "<<s2<<endl;
}