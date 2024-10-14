#include <bits/stdc++.h>
#define array vector
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-18
// @problem: Air Conditioner Temperature (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;

    for (int _ = 0; _ < T; ++_) {
        int A, B, C;
        cin >> A >> B >> C;

        if (A <= B && B >= C) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
