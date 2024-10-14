#include <bits/stdc++.h>
#define array vector
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-17
// @problem: Chefland Games (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;

    for (int _ = 0; _ < T; ++_) {
        int R1, R2, R3, R4;
        cin >> R1 >> R2 >> R3 >> R4;

        if (R1 + R2 + R3 + R4 < 1) {
            cout << "IN" << endl;
        }
        else {
            cout << "OUT" << endl;
        }
    }

    return 0;
}
