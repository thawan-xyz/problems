#include <bits/stdc++.h>
#define array vector
#define long long long
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-07-13
// @problem: 1A - Theatre Square (Codeforces)
// @url: https://codeforces.com/contest/1/problem/A

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    long x, y, z; cin >> x >> y >> z;
    cout << (((x + z) - 1) / z) * (((y + z) - 1) / z);

    return 0;
}
