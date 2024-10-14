#include <bits/stdc++.h>
#define array vector
using namespace std;

// @author: Thawan Ribeiro, 2024-07-13
// @problem: 768A - Oath of the Night's Watch (Codeforces)
// @url: https://codeforces.com/contest/768/problem/A

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n; cin >> n; list<int> s;
    int x; while (cin >> x) s.push_back(x);

    s.sort(); int l = s.front(), h = s.back();

    while (!s.empty() && s.front() == l) s.pop_front();
    while (!s.empty() && s.back() == h) s.pop_back();

    cout << s.size();
    return 0;
}
