#include <bits/stdc++.h>
#define array vector
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-07-18
// @problem: 514A - Chewbacca and Number (Codeforces)
// @url: https://codeforces.com/contest/514/problem/A

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    string n; int l; cin >> n; l = n.size();
    for (int i = 0; i < l; ++i) {
        if ((n[i] > '4') && (i != 0 || n[i] != '9')) n[i] = '0' + (9 - (n[i] - '0'));
    }

    cout << n << endl;
    return 0;
}
