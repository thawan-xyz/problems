#include <bits/stdc++.h>
#define array vector
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-07-16
// @problem: 584A - Olesya and Rodion (Codeforces)
// @url: https://codeforces.com/contest/584/problem/A

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int N, T; cin >> N >> T;

    string R = T < 10 ? string(N, '0' + T) : (N > 1 ? "1" + string(N - 1, '0') : "-1");

    cout << R << endl; return 0;
}
