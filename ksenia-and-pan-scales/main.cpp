#include <bits/stdc++.h>
#define array vector
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-07-18
// @problem: 382A - Ksenia and Pan Scales (Codeforces)
// @url: https://codeforces.com/contest/382/problem/A

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    string weight; cin >> weight; int delimiter = weight.find('|');

    string left = weight.substr(0, delimiter); int l = left.size();
    string right = weight.substr(delimiter + 1); int r = right.size();

    string unused; cin >> unused;
    for (char x : unused) {
        if (l < r) {
            left += x; l++;
        }
        else {
            right += x; r++;
        }
    }

    if (l != r) {
        cout << "Impossible" << endl;
    }
    else {
        cout << left << '|' << right << endl;
    }

    return 0;
}
