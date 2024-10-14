#include <bits/stdc++.h>
#define array vector
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-07-13
// @problem: 160A - Twins (Codeforces)
// @url: https://codeforces.com/contest/160/problem/A

int r(int s, int t, array<int>& c) {
    int x = 0;
    while (s <= t) s += c.back(), c.pop_back(), x++;
    return x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n; cin >> n; array<int> c(n);
    for (int& a : c) cin >> a;

    sort(c.begin(), c.end()); int t = accumulate(c.begin(), c.end(), 0) / 2;

    cout << r(0, t, c) << endl;
    return 0;
}
