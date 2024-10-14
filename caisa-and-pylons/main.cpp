#include <bits/stdc++.h>
#define array vector
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-01
// @problem: 463B - Caisa and Pylons (Codeforces)
// @url: https://codeforces.com/contest/463/problem/B

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int pylons;
    cin >> pylons;
    
    int total = 0;
    for (int _ = 0; _ < pylons; ++_) {
        int height;
        cin >> height;

        total = max(height, total);
    }

    cout << total;
    return 0;
}
