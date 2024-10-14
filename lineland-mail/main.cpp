#include <bits/stdc++.h>
#define array vector
#define long long long
using namespace std;

// @author: Thawan Ribeiro, 2024-06-25
// @problem: 567A - Lineland Mail (Codeforces)
// @url: https://codeforces.com/contest/567/problem/A

string max(long& c, set<long>& l) {
    return to_string(max(abs(c - *l.begin()), abs(c - *l.rbegin())));
}

string min(long& c, set<long>& l) {
    auto f = l.find(c);

    if (next(f) == l.end()) return to_string(abs(c - *prev(f)));

    if (f == l.begin()) return to_string(abs(c - *next(f)));

    return to_string(min(abs(c - *prev(f)), abs(c - *next(f))));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n; cin >> n;
    array<long> o(n); set<long> l;

    for (int i = 0; i < n; ++i) {
        long x; cin >> x;
        o[i] = x; l.insert(x);
    }

    for (long c : o) {
        cout << min(c, l) + ' ' + max(c, l) + '\n';
    }

    return 0;
}
