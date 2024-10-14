#include <bits/stdc++.h>
#define array vector
#define set unordered_set
using namespace std;

// @author: Thawan Ribeiro, 2024-06-25
// @problem: 520A - Pangram (Codeforces)
// @url: https://codeforces.com/contest/520/problem/A

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int l; cin >> l;
    string s; cin >> s;

    set<char> a;
    for (char c : s) a.insert(tolower(c));

    string r = a.size() >= 26 ? "YES" : "NO";
    cout << r;

    return 0;
}
