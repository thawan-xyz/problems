#include <bits/stdc++.h>
#define array vector
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-17
// @problem: Sale Season (CodeChef)
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

        if (X > 5000) {
            X -= 500;
        }
        else if (X > 1000) {
            X -= 100;
        }
        else if (X > 100) {
            X -= 25;
        }

        cout << X << endl;
    }

    return 0;
}
