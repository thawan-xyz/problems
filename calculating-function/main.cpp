#include <bits/stdc++.h>
#define array vector
#define long long long
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-07-15
// @problem: 486A - Calculating Function (Codeforces)
// @url: https://codeforces.com/contest/486/problem/A

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    long n; cin >> n;
    cout << static_cast<long>(pow(-1, n)) * ((n + 1) / 2);

    return 0;
}
