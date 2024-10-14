#include <bits/stdc++.h>
#define array vector
#define long long long
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-07-17
// @problem: 483A - Counterexample (Codeforces)
// @url: https://codeforces.com/contest/483/problem/A

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    long l, r; cin >> l >> r; if (l & 1) l++;

    if (r - l > 1) {
        cout << l++ << ' ' << l << ' ' << ++l << endl;
    }
    else {
        cout << -1 << endl;
    }

    return 0;
}
