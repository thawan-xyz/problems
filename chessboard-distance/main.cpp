#include <bits/stdc++.h>
using i32 = int32_t;
#define array vector
#define str string
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-24
// @problem: Chessboard Distance (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    i32 T;
    cin >> T;

    for (i32 i = 0; i < T; ++i) {
        i32 X[2], Y[2];
        cin >> X[0] >> Y[0] >> X[1] >> Y[1];

        cout << max(abs(X[1] - X[0]), abs(Y[1] - Y[0])) << endl;
    }

    return 0;
}
