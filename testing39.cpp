// Write a C++ program to find the unique element in the given list of elements

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements in the list: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the list: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                if (count > 1)
                {
                    break;
                }
            }
        }
        if (count == 1)
        {
            cout << "The unique element is: " << arr[i];
            break;
        }
    }
    return 0;
}