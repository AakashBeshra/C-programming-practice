/*WA Test Cases
Chef has recently introduced a feature, called WA Test Cases, which allows you to see the smallest test case that your WA code has failed in. For example, you can go to any relevant problem in Practice, make a submission which gets a WA verdict, and then click on the "Debug My Code" button to see the test case.

Your job now is to find the smallest test case that a particular submission fails on. That problem has N test cases, and you are given the size of each of those test cases as S1, S2, ... Sn. You are also given a binary string V, which tells whether the submission has passed a particular test case or not. That is, if the ith bit of V is 1, that means that the submission has passed that ith test case. If it is 0, then it has failed the test case. Your job is the output of the size of the smallest test case where teh submission has failed.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string V;
        cin >> V;
        int count = 0;
        for (int i = 0; i < N; i++) {
            if (V[i] == '0') {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}