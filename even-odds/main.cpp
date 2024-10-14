#include <bits/stdc++.h>
#define array vector
#define long long long
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-07-13
// @problem: 318A - Even Odds (Codeforces)
// @url: https://codeforces.com/contest/318/problem/A

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    long n, k; cin >> n >> k; long d = (n + 1) / 2;
    long x = k > d ? 2 + (((k - d) - 1) * 2) : 1 + ((k - 1) * 2);
    cout << x << endl;

    return 0;
}
