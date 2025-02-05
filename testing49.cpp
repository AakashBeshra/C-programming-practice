// Write a C++ program to read and print two dimensional array

#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout<<"Enter the number of rows and columns ";
    cin>>r>>c;
    int a[r][c];
    cout<<"Enter the 2D array elements ";
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"The 2D array is: \n";
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}