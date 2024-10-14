#include <bits/stdc++.h>
#define array vector
#define u32 unsigned int
#define str string
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-07
// @problem: 766B - Mahmoud and a Triangle (Codeforces)
// @url: https://codeforces.com/contest/766/problem/B

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    u32 n;
    cin >> n;

    u32 s[n];
    for (auto& x : s) {
        cin >> x;
    }

    sort(s, s + n);
    for (u32 i = 1; i < n - 1; ++i) {
        if (s[i - 1] + s[i] > s[i + 1]) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
