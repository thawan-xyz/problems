#include <bits/stdc++.h>
#define array vector
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-07-13
// @problem: 469A - I Wanna Be the Guy (Codeforces)
// @url: https://codeforces.com/contest/469/problem/A

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n; cin >> n; array<bool> l(n);

    int x, a; cin >> x;
    while(x--) cin >> a, l[--a] = true;

    int y, b; cin >> y;
    while(y--) cin >> b, l[--b] = true;

    bool r = true;
    for (auto z : l) r &= z;

    cout << (r ? "I become the guy." : "Oh, my keyboard!");
    return 0;
}
