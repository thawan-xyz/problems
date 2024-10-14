#include <bits/stdc++.h>
#define array vector
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-19
// @problem: Nearest Exit (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;

    for (int _ = 0; _ < T; ++_) {
        int X;
        cin >> X;

        if (X <= 50) {
            cout << "LEFT" << endl;
        }
        else {
            cout << "RIGHT" << endl;
        }
    }
    return 0;
}
