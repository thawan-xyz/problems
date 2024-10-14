#include <bits/stdc++.h>
#define array vector
#define last second
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-07-18
// @problem: 298A - Snow Footprints (Codeforces)
// @url: https://codeforces.com/contest/298/problem/A

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int number; string road; cin >> number >> road;

    pair<int, int> left = {road.find_first_of('L') + 1, road.find_last_of('L') + 1};
    pair<int, int> right = {road.find_first_of('R') + 1, road.find_last_of('R') + 1};

    if (right.first < 1) {
        cout << left.last << ' ' << left.first - 1 << endl;
    }
    else {
        cout << right.first << ' ' << (left.first > 0 ? left.first : right.last + 1) << endl;
    }

    return 0;
}
