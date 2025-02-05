// find the string length
#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin, s); // including white spaces
    cout<<s<<endl;
    cout<<s.length()<<endl;
    cout<<s.size();
    return 0;
}