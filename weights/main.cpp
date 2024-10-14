#include <bits/stdc++.h>
using i32 = int32_t;
#define array vector
#define str string
#define endl '\n'
using namespace std;

// @author: Thawan Ribeiro, 2024-09-25
// @problem: Weights (CodeChef)
// @url: https://www.codechef.com/practice/logical-problems

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    i32 T;
    cin >> T;

    for (i32 n = 0; n < T; ++n) {
        i32 W, X, Y, Z;
        cin >> W >> X >> Y >> Z;

        array<i32> A = {X, Y, Z};
        bool R = false;

        for (i32 k = 0; k < 8; ++k) {
            i32 S = 0;

            for (i32 i = 0; i < 3; ++i) {
                if (k & (1 << i)) {
                    S += A[i];
                }
            }

            if (S == W) {
                R = true;
            }
        }

        cout << (R ? "YES" : "NO") << endl;
    }

    return 0;
}
