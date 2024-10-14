#include <bits/stdc++.h>
#define array vector
#define umap unordered_map
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-07-16
// @problem: 43A - Football (Codeforces)
// @url: https://codeforces.com/contest/43/problem/A

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n; cin >> n; umap<string, int> a(n);
    string x; while (cin >> x) a[x]++;

    string w = ""; int m = 0;
    for (auto [t, s]: a) if (s > m) w = t, m = s;

    cout << w << endl;
    return 0;
}
