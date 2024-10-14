#include <bits/stdc++.h>
#define array vector
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-18
// @problem: Monopoly (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;

    for (int _ = 0; _ < T; ++_) {
        int P, Q, R, S;
        cin >> P >> Q >> R >> S;

        int TOTAL = P + Q + R + S;
        if ((max({P, Q, R, S}) << 1) > TOTAL) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
