/*In a class of N students, a class test was held. The ith student scored Ai marks. It is also known that the scores of all students were distinct.

A student passes the test if their score is strictly greater than the passing mark. Given that exactly X students pass in the test, find the maximum value of the passing mark of the test.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains two space-separated integers N and X - the number of students in the class and the number of students that passed in the test.
The next line contains N space-separated integers A1, A2...An, where the ith integer denotes the marks of the ith student

Output Format
For each test case, output on a new line, the maximum value of the passing mark of the test.*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findMaxPassingMark(int T, vector<pair<int, int>> &testCases, vector<vector<int>> &scoresList) {
    vector<int> results;
    for (int i = 0; i < T; ++i) {
        int N = testCases[i].first;
        int X = testCases[i].second;
        vector<int> scores = scoresList[i];

        sort(scores.begin(), scores.end());

        int passingMark;
        if (X == 0) {
            passingMark = scores[N - 1] + 1;
        } else {
            passingMark = scores[N - X] - 1;
        }

        results.push_back(passingMark);
    }
    return results;
}

int main() {
    int T;
    cin >> T;
    vector<pair<int, int>> testCases(T);
    vector<vector<int>> scoresList(T);

    for (int i = 0; i < T; ++i) {
        int N, X;
        cin >> N >> X;
        testCases[i] = make_pair(N, X);

        vector<int> scores(N);
        for (int j = 0; j < N; ++j) {
            cin >> scores[j];
        }
        scoresList[i] = scores;
    }

    vector<int> results = findMaxPassingMark(T, testCases, scoresList);
    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
