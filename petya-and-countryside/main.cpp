#include <bits/stdc++.h>
#define array vector
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-08-18
// @problem: 66B - Petya and Countryside (Codeforces)
// @url: https://codeforces.com/contest/66/problem/B

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;

    array<int> h(n);
    for (auto& x : h) {
        cin >> x;
    }

    int m = 1;
    for (int i = 0; i < n; ++i) {
        int w = 1;

        for (int l = i - 1, s = h[i]; l >= 0 && h[l] <= s; l--) {
            s = h[l], w++;
        }

        for (int r = i + 1, s = h[i]; r < n && h[r] <= s; r++) {
            s = h[r], w++;
        }

        m = max(m, w);
    }
    cout << m << endl;

    return 0;
}
