#include <bits/stdc++.h>
#define array vector
#define mset multiset
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-07-17
// @problem: 287A - IQ Test (Codeforces)
// @url: https://codeforces.com/contest/287/problem/A

const int N = 4;

bool can_pass(char matrix[N][N]) {
    for (int i = 0; i < N - 1; ++i) {
        for (int j = 0; j < N - 1; ++j) {
            char a = matrix[i][j];
            char b = matrix[i][j + 1];
            char c = matrix[i + 1][j];
            char d = matrix[i + 1][j + 1];

            mset<char> m = {a, b, c, d};
            if (m.count('#') >= 3 || m.count('.') >= 3) return true;
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    char matrix[N][N];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> matrix[i][j];
        }
    }

    cout << (can_pass(matrix) ? "YES" : "NO") << endl;
    return 0;
}
