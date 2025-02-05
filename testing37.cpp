/*Given a list of N integers, representing height of mountains. Find the height of the tallest mountain
Input:
First line will contain T, number of test cases. Then the test cases follow.
The first line in each test case contains one integer, N.
The following line contains N space separated integers, representing height of mountains.

Output:
For each test case, output one line with one integer, the height of the tallest mountain for the test case*/

#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        sort(arr.begin(), arr.end());
        printf("%d\n", arr[n-1]);
    }
    return 0;
}