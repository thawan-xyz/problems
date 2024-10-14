#include <bits/stdc++.h>
#define array vector
using namespace std;

// @author: Thawan Ribeiro, 2024-06-25
// @problem: 767A - Snacktower (Codeforces)
// @url: https://codeforces.com/problemset/problem/767/A

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n; cin >> n;
    priority_queue<int> q;

    int m = n;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x; q.push(x);

        string d = "";
        while (x == m) {
            d += to_string(x) + " ";
            q.pop(); x = q.top(); m--;
        }
        if (!d.empty()) d.pop_back();
        cout << d << "\n";
    }

    return 0;
}
