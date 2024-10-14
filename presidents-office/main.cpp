#include <bits/stdc++.h>
#define array vector
#define u16 unsigned short
#define str string
#define uset unordered_set
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-04
// @problem: 6B - President's Office (Codeforces)
// @url: https://codeforces.com/contest/6/problem/B

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    u16 rows, columns;
    cin >> rows >> columns;

    char president;
    cin >> president;

    char office[rows][columns];
    for (u16 r = 0; r < rows; ++r) {
        for (u16 c = 0; c < columns; ++c) {
            cin >> office[r][c];
        }
    }

    uset<char> neighbors;
    for (u16 r = 0; r < rows; ++r) {
        for (u16 c = 0; c < columns; ++c) {
            if (office[r][c] == president) {
                if (c > 0) {
                    neighbors.insert(office[r][c - 1]);
                }
                if (c < columns - 1) {
                    neighbors.insert(office[r][c + 1]);
                }
                if (r > 0) {
                    neighbors.insert(office[r - 1][c]);
                }
                if (r < rows - 1) {
                    neighbors.insert(office[r + 1][c]);
                }
            }
        }
    }
    neighbors.erase('.'), neighbors.erase(president);

    cout << neighbors.size() << endl;
    return 0;
}
