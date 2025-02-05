#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s1 = "1 0 0 1 1 2 1";
    sort(s1.begin(), s1.end());
    cout<<"Your sorted string ="<<s1<<endl;
}