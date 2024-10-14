#include <bits/stdc++.h>
#define array vector
#define str string
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-21
// @problem: Mario and Transformation (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    array<str> A = {"NORMAL", "HUGE", "SMALL"};

    int T;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        int X;
        cin >> X;

        cout << A[X % 3] << endl;
    }

    return 0;
}
