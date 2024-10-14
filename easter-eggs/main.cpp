#include <bits/stdc++.h>
#define array vector
#define i32 int
#define str string
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-02
// @problem: 78B - Easter Eggs (Codeforces)
// @url: https://codeforces.com/contest/78/problem/B

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    i32 length;
    cin >> length;

    str colors = {'R', 'O', 'Y', 'G', 'B', 'I', 'V'};

    for (i32 i = 0; i < length - 3; ++i) {
        cout << colors[i % 4];
    }
    cout << colors[4] << colors[5] << colors[6];

    return 0;
}
