#include <bits/stdc++.h>
#define array vector
using namespace std;

// @author: Thawan Ribeiro, 2024-06-25
// @problem: 474A - Keyboard (Codeforces)
// @url: https://codeforces.com/contest/474/problem/A

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    string k = "qwertyuiopasdfghjkl;zxcvbnm,./";

    char a; cin >> a;
    int x = a == 'L' ? 1 : -1;

    string s; cin >> s;
    for (auto c : s) {
        cout << k[k.find(c) + x];
    }

    return 0;
}
