/*400M race
Alice, Bob, and Charlie participated in a 400-metre race.
The time take by Alice, Bob, and Charlie to complete the race was X, Y, and Z seconds respectively.
Note that X, Y and X are distinct.

Determine the person having hte highest average speed.

Sample Input
3
1 2 8
4 100 1
7 3 5

Sample Output
ALICE
CHARLIE
BOB
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int a = (x + y + z) / 2;
        if (a == x)
        {
            cout << "ALICE" << endl;
        }
        else if (a == y)
        {
            cout << "BOB" << endl;
        }
        else
        {
            cout << "CHARLIE" << endl;
        }
    }
    return 0;
}https://www.myabandonware.com/