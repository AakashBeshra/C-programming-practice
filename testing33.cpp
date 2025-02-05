#include<iostream>
using namespace std;
int main()
{
    int L[10];
    cout<<"please enter 10 integer number";
    for(int i = 0; i < 10; i++)
    {
        cin >> L[i];
    }
    cout<<"the sum of number is: "<<(L[0]+L[1]+L[2]+L[3]+L[4]+L[5]+L[6]+L[7]+L[8]+L[9]);
    return 0;
}
