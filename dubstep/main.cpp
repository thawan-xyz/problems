#include <bits/stdc++.h>
#define array vector
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-07-16
// @problem: 208A - Dubstep (Codeforces)
// @url: https://codeforces.com/contest/208/problem/A

string r(string s, string x = "") {
    if (!x.empty() && x.back() != ' ') x += ' ';

    int i = s.find("WUB"); if (i < 0) return x + s;

    x += s.substr(0, i); return r(s.substr(i + 3), x);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    string s; cin >> s;

    cout << r(s) << endl;

    return 0;
}
