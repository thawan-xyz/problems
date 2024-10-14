#include <bits/stdc++.h>
#define array vector
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-18
// @problem: Is the Score Consistent (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;

    for (int _ = 0; _ < T; ++_) {
        int A, B;
        cin >> A >> B;

        int C, D;
        cin >> C >> D;

        if (A <= C && B <= D) {
            cout << "POSSIBLE" << endl;
        }
        else {
            cout << "IMPOSSIBLE" << endl;
        }
    }

    return 0;
}
