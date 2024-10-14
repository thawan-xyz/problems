#include <bits/stdc++.h>
#define array vector
#define uset unordered_set
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-07-16
// @problem: 707A - Brain's Photos (Codeforces)
// @url: https://codeforces.com/contest/707/problem/A

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int rows, columns; cin >> rows >> columns;

    char color; uset<char> colors = {'W', 'G', 'B'};
    while (cin >> color) colors.insert(color);

    string result = colors.size() > 3 ? "#Color" : "#Black&White";
    cout << result << endl;

    return 0;
}
